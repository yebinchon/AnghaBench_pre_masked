
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int update_lock; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*,int ) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int) ;
 struct w83781d_data* FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct i2c_client *VAR_8, struct i2c_board_info *VAR_9)
{
 int VAR_10, VAR_11;
 struct w83781d_data *VAR_12 = FUNC_8();
 struct i2c_adapter *VAR_13 = VAR_8->adapter;
 int VAR_14 = VAR_8->addr;
 const char *VAR_15;
 enum vendor { winbond, asus } VAR_16;

 if (!FUNC_1(VAR_13, VAR_1))
  return -VAR_0;






 if (VAR_12)
  FUNC_4(&VAR_12->update_lock);

 if (FUNC_2(VAR_8, VAR_5) & 0x80) {
  FUNC_0(&VAR_13->dev,
   "Detection of w83781d chip failed at step 3\n");
  goto err_nodev;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_3);
 VAR_11 = FUNC_2(VAR_8, VAR_4);

 if (!(VAR_10 & 0x07) &&
     ((!(VAR_10 & 0x80) && VAR_11 != 0xa3 && VAR_11 != 0xc3) ||
      ((VAR_10 & 0x80) && VAR_11 != 0x5c && VAR_11 != 0x12))) {
  FUNC_0(&VAR_13->dev,
   "Detection of w83781d chip failed at step 4\n");
  goto err_nodev;
 }




 if ((!(VAR_10 & 0x80) && VAR_11 == 0xa3) ||
     ((VAR_10 & 0x80) && VAR_11 == 0x5c)) {
  if (FUNC_2(VAR_8, VAR_6)
      != VAR_14) {
   FUNC_0(&VAR_13->dev,
    "Detection of w83781d chip failed at step 5\n");
   goto err_nodev;
  }
 }


 FUNC_3(VAR_8, VAR_3,
  (FUNC_2(VAR_8, VAR_3)
   & 0x78) | 0x80);


 VAR_11 = FUNC_2(VAR_8, VAR_4);
 if (VAR_11 == 0x5c)
  VAR_16 = winbond;
 else if (VAR_11 == 0x12)
  VAR_16 = asus;
 else {
  FUNC_0(&VAR_13->dev,
   "w83781d chip vendor is neither Winbond nor Asus\n");
  goto err_nodev;
 }


 VAR_10 = FUNC_2(VAR_8, VAR_7);
 if ((VAR_10 == 0x10 || VAR_10 == 0x11) && VAR_16 == winbond)
  VAR_15 = "w83781d";
 else if (VAR_10 == 0x30 && VAR_16 == winbond)
  VAR_15 = "w83782d";
 else if (VAR_10 == 0x40 && VAR_16 == winbond && VAR_14 == 0x2d)
  VAR_15 = "w83783s";
 else if (VAR_10 == 0x31)
  VAR_15 = "as99127f";
 else
  goto err_nodev;

 if (VAR_10 <= 0x30 && FUNC_7(VAR_8, VAR_10)) {
  FUNC_0(&VAR_13->dev,
   "Device at 0x%02x appears to be the same as ISA device\n",
   VAR_14);
  goto err_nodev;
 }

 if (VAR_12)
  FUNC_5(&VAR_12->update_lock);

 FUNC_6(VAR_9->type, VAR_15, VAR_2);

 return 0;

 err_nodev:
 if (VAR_12)
  FUNC_5(&VAR_12->update_lock);
 return -VAR_0;
}
