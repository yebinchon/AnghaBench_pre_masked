
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si5351_driver_data {int variant; } ;
typedef enum si5351_clkout_src { ____Placeholder_si5351_clkout_src } si5351_clkout_src ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct si5351_driver_data*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct si5351_driver_data *VAR_8,
       int VAR_9, enum si5351_clkout_src VAR_10)
{
 u8 VAR_11;

 if (VAR_9 > 8)
  return -VAR_0;

 switch (VAR_10) {
 case 129:
  VAR_11 = VAR_5;
  break;
 case 130:

  if (VAR_9 == 0 || VAR_9 == 4)
   VAR_11 = VAR_5;
  else
   VAR_11 = VAR_4;
  break;
 case 128:
  VAR_11 = VAR_6;
  break;
 case 131:
  if (VAR_8->variant != VAR_7)
   return -VAR_0;

  VAR_11 = VAR_2;
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_8, VAR_1 + VAR_9,
   VAR_3, VAR_11);
 return 0;
}
