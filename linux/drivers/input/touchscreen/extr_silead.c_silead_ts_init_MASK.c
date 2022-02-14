
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct silead_ts_data {int max_fingers; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 struct silead_ts_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8)
{
 struct silead_ts_data *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_6,
       VAR_1);
 if (VAR_10)
  goto i2c_write_err;
 FUNC_3(VAR_3, VAR_2);

 VAR_10 = FUNC_2(VAR_8, VAR_7,
     VAR_9->max_fingers);
 if (VAR_10)
  goto i2c_write_err;
 FUNC_3(VAR_3, VAR_2);

 VAR_10 = FUNC_2(VAR_8, VAR_5,
       VAR_0);
 if (VAR_10)
  goto i2c_write_err;
 FUNC_3(VAR_3, VAR_2);

 VAR_10 = FUNC_2(VAR_8, VAR_6,
       VAR_4);
 if (VAR_10)
  goto i2c_write_err;
 FUNC_3(VAR_3, VAR_2);

 return 0;

i2c_write_err:
 FUNC_0(&VAR_8->dev, "Registers clear error %d\n", VAR_10);
 return VAR_10;
}
