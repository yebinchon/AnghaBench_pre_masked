
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct TYPE_9__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {TYPE_1__ dev; int * quirks; TYPE_8__* algo; int name; } ;
struct bcm_iproc_i2c_dev {int type; int irq; TYPE_2__* device; struct i2c_adapter adapter; int idm_lock; int ape_addr_mask; void* idm_base; void* base; int done; } ;
typedef enum bcm_iproc_i2c_type { ____Placeholder_bcm_iproc_i2c_type } bcm_iproc_i2c_type ;
struct TYPE_11__ {int * unreg_slave; int * reg_slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 TYPE_8__ VAR_5 ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*) ;
 int FUNC_3 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_4 (struct bcm_iproc_i2c_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 void* FUNC_7 (TYPE_2__*,struct resource*) ;
 struct bcm_iproc_i2c_dev* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,int,int ,int ,int ,struct bcm_iproc_i2c_dev*) ;
 int FUNC_10 (struct i2c_adapter*) ;
 int FUNC_11 (struct i2c_adapter*,struct bcm_iproc_i2c_dev*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,int *) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int) ;
 int FUNC_18 (struct platform_device*,struct bcm_iproc_i2c_dev*) ;
 int FUNC_19 (int ,int,char*,char*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 struct bcm_iproc_i2c_dev *VAR_11;
 struct i2c_adapter *VAR_12;
 struct resource *VAR_13;

 VAR_11 = FUNC_8(&VAR_8->dev, sizeof(*VAR_11),
     VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_18(VAR_8, VAR_11);
 VAR_11->device = &VAR_8->dev;
 VAR_11->type =
  (enum bcm_iproc_i2c_type)FUNC_13(&VAR_8->dev);
 FUNC_12(&VAR_11->done);

 VAR_13 = FUNC_17(VAR_8, VAR_3, 0);
 VAR_11->base = FUNC_7(VAR_11->device, VAR_13);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 if (VAR_11->type == VAR_4) {
  VAR_13 = FUNC_17(VAR_8, VAR_3, 1);
  VAR_11->idm_base = FUNC_7(VAR_11->device,
           VAR_13);
  if (FUNC_0(VAR_11->idm_base))
   return FUNC_1(VAR_11->idm_base);

  VAR_10 = FUNC_15(VAR_11->device->of_node,
        "brcm,ape-hsls-addr-mask",
        &VAR_11->ape_addr_mask);
  if (VAR_10 < 0) {
   FUNC_5(VAR_11->device,
    "'brcm,ape-hsls-addr-mask' missing\n");
   return -VAR_0;
  }

  FUNC_20(&VAR_11->idm_lock);


  VAR_5.reg_slave = ((void*)0);
  VAR_5.unreg_slave = ((void*)0);
 }

 VAR_10 = FUNC_4(VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_16(VAR_8, 0);
 if (VAR_9 > 0) {
  VAR_10 = FUNC_9(VAR_11->device, VAR_9,
           VAR_6, 0, VAR_8->name,
           VAR_11);
  if (VAR_10 < 0) {
   FUNC_5(VAR_11->device,
    "unable to request irq %i\n", VAR_9);
   return VAR_10;
  }

  VAR_11->irq = VAR_9;
 } else {
  FUNC_6(VAR_11->device,
    "no irq resource, falling back to poll mode\n");
 }

 FUNC_3(VAR_11, 1);

 VAR_12 = &VAR_11->adapter;
 FUNC_11(VAR_12, VAR_11);
 FUNC_19(VAR_12->name, sizeof(VAR_12->name),
  "Broadcom iProc (%s)",
  FUNC_14(VAR_11->device->of_node));
 VAR_12->algo = &VAR_5;
 VAR_12->quirks = &VAR_7;
 VAR_12->dev.parent = &VAR_8->dev;
 VAR_12->dev.of_node = VAR_8->dev.of_node;

 return FUNC_10(VAR_12);
}
