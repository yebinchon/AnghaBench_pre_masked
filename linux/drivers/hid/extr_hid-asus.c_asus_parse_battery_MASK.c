
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asus_drvdata {int battery_capacity; int battery_stat; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct asus_drvdata *VAR_4, u8 *VAR_5, int VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_8 = VAR_5[1];
 VAR_7 = VAR_5[8];

 VAR_4->battery_capacity = ((int)VAR_8 * 100) / (int)VAR_0;

 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_1;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
 default:
  VAR_9 = VAR_2;
  break;
 }
 VAR_4->battery_stat = VAR_9;

 return 0;
}
