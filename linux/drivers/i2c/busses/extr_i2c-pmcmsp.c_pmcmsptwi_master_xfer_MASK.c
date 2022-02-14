
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcmsptwi_data {int dummy; } ;
struct pmcmsptwi_cmd {int addr; int * write_data; scalar_t__ write_len; int * read_data; scalar_t__ read_len; int type; } ;
struct pmcmsptwi_cfg {int add10; } ;
struct i2c_msg {int flags; scalar_t__ len; int addr; int * buf; } ;
struct i2c_adapter {int dev; } ;
typedef int oldcfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,char*,scalar_t__,char*) ;
 struct pmcmsptwi_data* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct pmcmsptwi_cfg*,struct pmcmsptwi_cfg*,int) ;
 int FUNC_3 (struct pmcmsptwi_cfg*,struct pmcmsptwi_data*) ;
 int FUNC_4 (struct pmcmsptwi_cfg*,struct pmcmsptwi_data*) ;
 int FUNC_5 (struct pmcmsptwi_cmd*,struct pmcmsptwi_data*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_7,
    struct i2c_msg *VAR_8, int VAR_9)
{
 struct pmcmsptwi_data *VAR_10 = FUNC_1(VAR_7);
 struct pmcmsptwi_cmd VAR_11;
 struct pmcmsptwi_cfg VAR_12, VAR_13;
 int VAR_14;

 if (VAR_9 == 2) {
  struct i2c_msg *VAR_15 = VAR_8 + 1;

  VAR_11.type = VAR_5;
  VAR_11.write_len = VAR_8->len;
  VAR_11.write_data = VAR_8->buf;
  VAR_11.read_len = VAR_15->len;
  VAR_11.read_data = VAR_15->buf;
 } else if (VAR_8->flags & VAR_1) {
  VAR_11.type = VAR_3;
  VAR_11.read_len = VAR_8->len;
  VAR_11.read_data = VAR_8->buf;
  VAR_11.write_len = 0;
  VAR_11.write_data = ((void*)0);
 } else {
  VAR_11.type = VAR_4;
  VAR_11.read_len = 0;
  VAR_11.read_data = ((void*)0);
  VAR_11.write_len = VAR_8->len;
  VAR_11.write_data = VAR_8->buf;
 }

 VAR_11.addr = VAR_8->addr;

 if (VAR_8->flags & VAR_2) {
  FUNC_3(&VAR_13, VAR_10);
  FUNC_2(&VAR_12, &VAR_13, sizeof(VAR_12));


  VAR_13.add10 = 1;

  FUNC_4(&VAR_13, VAR_10);
 }


 VAR_14 = FUNC_5(&VAR_11, VAR_10);

 if (VAR_8->flags & VAR_2)
  FUNC_4(&VAR_12, VAR_10);

 FUNC_0(&VAR_7->dev, "I2C %s of %d bytes %s\n",
  (VAR_8->flags & VAR_1) ? "read" : "write", VAR_8->len,
  (VAR_14 == VAR_6) ? "succeeded" : "failed");

 if (VAR_14 != VAR_6) {




  return -VAR_0;
 }

 return VAR_9;
}
