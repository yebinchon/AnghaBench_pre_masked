
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int class; int timeout; int * algo; int name; TYPE_1__ dev; } ;
struct ibm_iic_private {int fast_mode; int * vaddr; scalar_t__ irq; struct i2c_adapter adap; int clckdiv; int wq; } ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (scalar_t__,struct ibm_iic_private*) ;
 int FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (struct i2c_adapter*,struct ibm_iic_private*) ;
 int VAR_7 ;
 int FUNC_7 (int const) ;
 int FUNC_8 (struct ibm_iic_private*) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (struct ibm_iic_private*,int ) ;
 scalar_t__ FUNC_10 (struct platform_device*,struct ibm_iic_private*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ibm_iic_private*) ;
 struct ibm_iic_private* FUNC_14 (int,int ) ;
 int * FUNC_15 (struct device_node*,char*,int *) ;
 int * FUNC_16 (struct device_node*,int ) ;
 int FUNC_17 (struct device_node*) ;
 int FUNC_18 (struct platform_device*,struct ibm_iic_private*) ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct ibm_iic_private *VAR_11;
 struct i2c_adapter *VAR_12;
 const u32 *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_14(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_1(&VAR_9->dev, "failed to allocate device data\n");
  return -VAR_1;
 }

 FUNC_18(VAR_9, VAR_11);

 VAR_11->vaddr = FUNC_16(VAR_10, 0);
 if (VAR_11->vaddr == ((void*)0)) {
  FUNC_1(&VAR_9->dev, "failed to iomap device\n");
  VAR_14 = -VAR_2;
  goto error_cleanup;
 }

 FUNC_11(&VAR_11->wq);

 VAR_11->irq = FUNC_10(VAR_9, VAR_11);
 if (!VAR_11->irq)
  FUNC_3(&VAR_9->dev, "using polling mode\n");


 if (VAR_8 || FUNC_15(VAR_10, "fast-mode", ((void*)0)))
  VAR_11->fast_mode = 1;

 VAR_13 = FUNC_15(VAR_10, "clock-frequency", ((void*)0));
 if (VAR_13 == ((void*)0)) {
  VAR_13 = FUNC_15(VAR_10->parent, "clock-frequency", ((void*)0));
  if (VAR_13 == ((void*)0)) {
   FUNC_1(&VAR_9->dev, "Unable to get bus frequency\n");
   VAR_14 = -VAR_0;
   goto error_cleanup;
  }
 }

 VAR_11->clckdiv = FUNC_7(*VAR_13);
 FUNC_0(&VAR_9->dev, "clckdiv = %d\n", VAR_11->clckdiv);


 FUNC_8(VAR_11);


 VAR_12 = &VAR_11->adap;
 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->dev.of_node = FUNC_17(VAR_10);
 FUNC_19(VAR_12->name, "IBM IIC", sizeof(VAR_12->name));
 FUNC_6(VAR_12, VAR_11);
 VAR_12->class = VAR_5 | VAR_6;
 VAR_12->algo = &VAR_7;
 VAR_12->timeout = VAR_4;

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14 < 0)
  goto error_cleanup;

 FUNC_2(&VAR_9->dev, "using %s mode\n",
   VAR_11->fast_mode ? "fast (400 kHz)" : "standard (100 kHz)");

 return 0;

error_cleanup:
 if (VAR_11->irq) {
  FUNC_9(VAR_11, 0);
  FUNC_4(VAR_11->irq, VAR_11);
 }

 if (VAR_11->vaddr)
  FUNC_12(VAR_11->vaddr);

 FUNC_13(VAR_11);
 return VAR_14;
}
