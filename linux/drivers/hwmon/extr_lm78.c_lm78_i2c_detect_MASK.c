
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm78_data {int update_lock; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int) ;
 struct lm78_data* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
      struct i2c_board_info *VAR_7)
{
 int VAR_8;
 struct lm78_data *VAR_9 = FUNC_4();
 const char *VAR_10;
 struct i2c_adapter *VAR_11 = VAR_6->adapter;
 int VAR_12 = VAR_6->addr;

 if (!FUNC_1(VAR_11, VAR_1))
  return -VAR_0;






 if (VAR_9)
  FUNC_5(&VAR_9->update_lock);

 if ((FUNC_2(VAR_6, VAR_4) & 0x80)
  || FUNC_2(VAR_6, VAR_5) != VAR_12)
  goto err_nodev;


 VAR_8 = FUNC_2(VAR_6, 0x4f);
 if (VAR_8 == 0xa3 || VAR_8 == 0x5c)
  goto err_nodev;


 VAR_8 = FUNC_2(VAR_6, VAR_3);
 if (VAR_8 == 0x00 || VAR_8 == 0x20
  || VAR_8 == 0x40)
  VAR_10 = "lm78";
 else if ((VAR_8 & 0xfe) == 0xc0)
  VAR_10 = "lm79";
 else
  goto err_nodev;

 if (FUNC_3(VAR_6, VAR_8)) {
  FUNC_0(&VAR_11->dev,
   "Device at 0x%02x appears to be the same as ISA device\n",
   VAR_12);
  goto err_nodev;
 }

 if (VAR_9)
  FUNC_6(&VAR_9->update_lock);

 FUNC_7(VAR_7->type, VAR_10, VAR_2);

 return 0;

 err_nodev:
 if (VAR_9)
  FUNC_6(&VAR_9->update_lock);
 return -VAR_0;
}
