
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;
typedef enum asahi_compass_chipset { ____Placeholder_asahi_compass_chipset } asahi_compass_chipset ;



 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i2c_client*,int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_5,
      enum asahi_compass_chipset VAR_6)
{
 u8 VAR_7[2];
 int VAR_8;
 VAR_8 = FUNC_1(
   VAR_5, VAR_2, 2, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_5->dev, "Error reading WIA\n");
  return VAR_8;
 }

 if (VAR_7[0] != VAR_3)
  return -VAR_4;

 switch (VAR_6) {
 case 128:
 case 129:
  return 0;
 case 131:
  if (VAR_7[1] == VAR_0)
   return 0;
  break;
 case 130:
  if (VAR_7[1] == VAR_1)
   return 0;
  break;
 default:
  FUNC_0(&VAR_5->dev, "Type %d unknown\n", VAR_6);
 }
 return -VAR_4;
}
