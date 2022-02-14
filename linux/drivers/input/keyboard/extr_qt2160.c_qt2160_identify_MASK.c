
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static bool FUNC_3(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;


 VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (VAR_5 != VAR_3) {
  FUNC_0(&VAR_4->dev, "ID %d not supported\n", VAR_5);
  return 0;
 }


 VAR_6 = FUNC_2(VAR_4, VAR_1);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev, "could not get firmware version\n");
  return 0;
 }


 VAR_7 = FUNC_2(VAR_4, VAR_2);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_4->dev, "could not get firmware revision\n");
  return 0;
 }

 FUNC_1(&VAR_4->dev, "AT42QT2160 firmware version %d.%d.%d\n",
   VAR_6 >> 4, VAR_6 & 0xf, VAR_7);

 return 1;
}
