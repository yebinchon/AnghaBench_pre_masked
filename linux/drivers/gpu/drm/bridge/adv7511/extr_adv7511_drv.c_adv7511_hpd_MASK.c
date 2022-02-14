
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {int regmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct adv7511 *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->regmap, FUNC_0(0), &VAR_2);
 if (VAR_3 < 0)
  return 0;

 if (VAR_2 & VAR_0) {
  FUNC_2(VAR_1->regmap, FUNC_0(0),
        VAR_0);
  return 1;
 }

 return 0;
}
