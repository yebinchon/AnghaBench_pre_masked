
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si5351_driver_data {int dummy; } ;
typedef enum si5351_drive_strength { ____Placeholder_si5351_drive_strength } si5351_drive_strength ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct si5351_driver_data*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(
 struct si5351_driver_data *VAR_7, int VAR_8,
 enum si5351_drive_strength VAR_9)
{
 u8 VAR_10;

 if (VAR_8 > 8)
  return -VAR_0;

 switch (VAR_9) {
 case 131:
  VAR_10 = VAR_2;
  break;
 case 130:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_7, VAR_1 + VAR_8,
   VAR_6, VAR_10);
 return 0;
}
