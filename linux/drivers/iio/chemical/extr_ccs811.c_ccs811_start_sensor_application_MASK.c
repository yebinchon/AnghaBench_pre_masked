
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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 if ((VAR_8 & VAR_4))
  return 0;

 if ((VAR_8 & VAR_3) !=
     VAR_2)
  return -VAR_6;

 VAR_8 = FUNC_2(VAR_7, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 if ((VAR_8 & VAR_5) !=
     VAR_4) {
  FUNC_0(&VAR_7->dev, "Application failed to start. Sensor is still in boot mode.\n");
  return -VAR_6;
 }

 return 0;
}
