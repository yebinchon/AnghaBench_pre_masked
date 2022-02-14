
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static bool FUNC_3(struct i2c_client *VAR_3)
{
 int VAR_4, VAR_5;


 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 != VAR_2) {
  FUNC_0(&VAR_3->dev, "ID %d not supported\n", VAR_4);
  return 0;
 }


 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "could not read the firmware version\n");
  return 0;
 }

 FUNC_1(&VAR_3->dev, "AT42QT1070 firmware version %x\n", VAR_5);

 return 1;
}
