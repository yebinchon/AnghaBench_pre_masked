
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rm3100_data {int scale; int regmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct rm3100_data *VAR_1, int VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1->regmap, VAR_0 + 2 * VAR_4, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }






 switch (VAR_2) {
 case 50:
  VAR_1->scale = 500;
  break;
 case 100:
  VAR_1->scale = 263;
  break;





 default:
  VAR_1->scale = 133;
 }

 return 0;
}
