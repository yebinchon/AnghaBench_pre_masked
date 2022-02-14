
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adv7511 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct adv7511* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, void *VAR_5)
{
 struct adv7511 *VAR_6 = FUNC_2(VAR_4);

 FUNC_3(VAR_6->regmap, VAR_1,
    FUNC_1(7), 0);


 FUNC_3(VAR_6->regmap, VAR_2,
    FUNC_1(5), FUNC_1(5));

 FUNC_3(VAR_6->regmap, VAR_3,
    FUNC_1(5), FUNC_1(5));

 FUNC_3(VAR_6->regmap, VAR_3,
    FUNC_1(6), FUNC_1(6));

 FUNC_3(VAR_6->regmap, VAR_0,
    FUNC_1(5), FUNC_1(5));

 FUNC_3(VAR_6->regmap, VAR_3,
    FUNC_1(3), FUNC_1(3));

 FUNC_3(VAR_6->regmap, FUNC_0(0),
    FUNC_1(7) | FUNC_1(6), FUNC_1(7));

 FUNC_3(VAR_6->regmap, FUNC_0(1),
    FUNC_1(5), 0);
 return 0;
}
