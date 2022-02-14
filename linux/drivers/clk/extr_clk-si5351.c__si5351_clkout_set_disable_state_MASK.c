
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si5351_driver_data {int dummy; } ;
typedef enum si5351_disable_state { ____Placeholder_si5351_disable_state } si5351_disable_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct si5351_driver_data*,int,int,int) ;

__attribute__((used)) static int FUNC_1(
 struct si5351_driver_data *VAR_8, int VAR_9,
 enum si5351_disable_state VAR_10)
{
 u8 VAR_11 = (VAR_9 < 4) ? VAR_1 :
  VAR_2;
 u8 VAR_12 = (VAR_9 < 4) ? (2 * VAR_9) : (2 * (VAR_9-4));
 u8 VAR_13 = VAR_6 << VAR_12;
 u8 VAR_14;

 if (VAR_9 > 8)
  return -VAR_0;

 switch (VAR_10) {
 case 129:
  VAR_14 = VAR_5;
  break;
 case 130:
  VAR_14 = VAR_4;
  break;
 case 131:
  VAR_14 = VAR_3;
  break;
 case 128:
  VAR_14 = VAR_7;
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_8, VAR_11, VAR_13, VAR_14 << VAR_12);

 return 0;
}
