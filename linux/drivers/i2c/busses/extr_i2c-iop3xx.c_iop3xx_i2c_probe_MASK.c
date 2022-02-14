
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {int id; TYPE_2__ dev; int name; } ;
struct TYPE_3__ {int of_node; TYPE_2__* parent; } ;
struct i2c_algo_iop3xx_data {int class; int ioaddr; struct i2c_algo_iop3xx_data* algo_data; int lock; int waitq; int * algo; int timeout; int nr; TYPE_1__ dev; int owner; int name; scalar_t__ id; void* gpio_sda; void* gpio_scl; } ;
struct i2c_adapter {int class; int ioaddr; struct i2c_adapter* algo_data; int lock; int waitq; int * algo; int timeout; int nr; TYPE_1__ dev; int owner; int name; scalar_t__ id; void* gpio_sda; void* gpio_scl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_12 ;
 void* FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (struct i2c_algo_iop3xx_data*) ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int VAR_14 ;
 int FUNC_5 (struct i2c_algo_iop3xx_data*) ;
 int VAR_15 ;
 int FUNC_6 (struct i2c_algo_iop3xx_data*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct i2c_algo_iop3xx_data*) ;
 struct i2c_algo_iop3xx_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct i2c_algo_iop3xx_data*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int,int ,int ,int ,struct i2c_algo_iop3xx_data*) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(struct platform_device *VAR_16)
{
 struct resource *VAR_17;
 int VAR_18, VAR_19;
 struct i2c_adapter *VAR_20;
 struct i2c_algo_iop3xx_data *VAR_21;

 VAR_20 = FUNC_10(sizeof(struct i2c_adapter), VAR_5);
 if (!VAR_20) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_21 = FUNC_10(sizeof(struct i2c_algo_iop3xx_data), VAR_5);
 if (!VAR_21) {
  VAR_18 = -VAR_3;
  goto free_adapter;
 }

 VAR_21->gpio_scl = FUNC_2(&VAR_16->dev,
        "scl",
        VAR_6);
 if (FUNC_0(VAR_21->gpio_scl))
  return FUNC_1(VAR_21->gpio_scl);
 VAR_21->gpio_sda = FUNC_2(&VAR_16->dev,
        "sda",
        VAR_6);
 if (FUNC_0(VAR_21->gpio_sda))
  return FUNC_1(VAR_21->gpio_sda);

 VAR_17 = FUNC_13(VAR_16, VAR_11, 0);
 if (!VAR_17) {
  VAR_18 = -VAR_2;
  goto free_both;
 }

 if (!FUNC_17(VAR_17->start, VAR_10, VAR_16->name)) {
  VAR_18 = -VAR_0;
  goto free_both;
 }


 VAR_21->id = VAR_13++;

 VAR_21->ioaddr = FUNC_7(VAR_17->start, VAR_10);
 if (!VAR_21->ioaddr) {
  VAR_18 = -VAR_3;
  goto release_region;
 }

 VAR_19 = FUNC_12(VAR_16, 0);
 if (VAR_19 < 0) {
  VAR_18 = -VAR_4;
  goto unmap;
 }
 VAR_18 = FUNC_16(VAR_19, VAR_15, 0,
    VAR_16->name, VAR_21);

 if (VAR_18) {
  VAR_18 = -VAR_1;
  goto unmap;
 }

 FUNC_11(VAR_20->name, VAR_16->name, FUNC_19(VAR_16->name));
 VAR_20->owner = VAR_12;
 VAR_20->class = VAR_8 | VAR_9;
 VAR_20->dev.parent = &VAR_16->dev;
 VAR_20->dev.of_node = VAR_16->dev.of_node;
 VAR_20->nr = VAR_16->id;




 VAR_20->timeout = VAR_7;
 VAR_20->algo = &VAR_14;

 FUNC_4(&VAR_21->waitq);
 FUNC_18(&VAR_21->lock);

 FUNC_6(VAR_21);
 FUNC_5(VAR_21);

 FUNC_14(VAR_16, VAR_20);
 VAR_20->algo_data = VAR_21;

 FUNC_3(VAR_20);

 return 0;

unmap:
 FUNC_8(VAR_21->ioaddr);

release_region:
 FUNC_15(VAR_17->start, VAR_10);

free_both:
 FUNC_9(VAR_21);

free_adapter:
 FUNC_9(VAR_20);

out:
 return VAR_18;
}
