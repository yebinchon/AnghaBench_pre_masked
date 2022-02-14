
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_7,
       VAR_1);
 if (VAR_9)
  goto i2c_write_err;
 FUNC_2(VAR_3, VAR_2);

 VAR_9 = FUNC_1(VAR_8, VAR_5,
       VAR_0);
 if (VAR_9)
  goto i2c_write_err;
 FUNC_2(VAR_3, VAR_2);

 VAR_9 = FUNC_1(VAR_8, VAR_6,
       VAR_4);
 if (VAR_9)
  goto i2c_write_err;
 FUNC_2(VAR_3, VAR_2);

 return 0;

i2c_write_err:
 FUNC_0(&VAR_8->dev, "Chip reset error %d\n", VAR_9);
 return VAR_9;
}
