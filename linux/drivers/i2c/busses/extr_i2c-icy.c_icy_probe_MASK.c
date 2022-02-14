
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zorro_device_id {int dummy; } ;
struct TYPE_6__ {scalar_t__ start; } ;
struct zorro_dev {int dev; TYPE_2__ resource; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {int name; struct i2c_algo_pcf_data* algo_data; int owner; TYPE_1__ dev; } ;
struct icy_i2c {TYPE_3__ adapter; int ltc2990_client; struct fwnode_handle* ltc2990_fwnode; void* reg_s1; void* reg_s0; } ;
struct i2c_board_info {char* type; int addr; struct fwnode_handle* fwnode; } ;
struct i2c_algo_pcf_data {int waitforpin; int getclock; int getown; int getpcf; int setpcf; struct icy_i2c* data; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fwnode_handle*) ;
 scalar_t__* FUNC_1 (struct fwnode_handle*) ;
 int VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,scalar_t__*) ;
 int FUNC_5 (int *,struct icy_i2c*) ;
 void* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,scalar_t__,int,int ) ;
 struct fwnode_handle* FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_3__*,struct i2c_board_info*,int ,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int FUNC_12(struct zorro_dev *VAR_11,
       const struct zorro_device_id *VAR_12)
{
 struct icy_i2c *VAR_13;
 struct i2c_algo_pcf_data *VAR_14;
 struct fwnode_handle *VAR_15;
 struct i2c_board_info VAR_16 = {
  .type = "ltc2990",
  .addr = 0x4c,
 };

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_6(&VAR_11->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_0;

 FUNC_5(&VAR_11->dev, VAR_13);
 VAR_13->adapter.dev.parent = &VAR_11->dev;
 VAR_13->adapter.owner = VAR_3;

 VAR_13->adapter.algo_data = VAR_14;
 FUNC_11(VAR_13->adapter.name, "ICY I2C Zorro adapter",
  sizeof(VAR_13->adapter.name));

 if (!FUNC_7(&VAR_11->dev,
         VAR_11->resource.start,
         4, VAR_13->adapter.name))
  return -VAR_1;


 VAR_13->reg_s0 = FUNC_2(VAR_11->resource.start);
 VAR_13->reg_s1 = FUNC_2(VAR_11->resource.start + 2);

 VAR_14->data = VAR_13;
 VAR_14->setpcf = VAR_9;
 VAR_14->getpcf = VAR_8;
 VAR_14->getown = VAR_7;
 VAR_14->getclock = VAR_6;
 VAR_14->waitforpin = VAR_10;

 if (FUNC_10(&VAR_13->adapter)) {
  FUNC_3(&VAR_11->dev, "i2c_pcf_add_bus() failed\n");
  return -VAR_1;
 }

 FUNC_4(&VAR_11->dev, "ICY I2C controller at %pa, IRQ not implemented\n",
   &VAR_11->resource.start);
 VAR_15 = FUNC_8(VAR_5, ((void*)0));
 if (FUNC_0(VAR_15)) {
  FUNC_4(&VAR_11->dev, "Failed to create fwnode for LTC2990, error: %ld\n",
    FUNC_1(VAR_15));
 } else {





  VAR_13->ltc2990_fwnode = VAR_15;
  VAR_16.fwnode = VAR_15;

  VAR_13->ltc2990_client =
   FUNC_9(&VAR_13->adapter,
           &VAR_16,
           VAR_4,
           ((void*)0));
 }

 return 0;
}
