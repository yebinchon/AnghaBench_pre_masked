
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dac {TYPE_1__* common; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct stm32_dac *VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_4))
  VAR_6 = FUNC_1(VAR_3->common->regmap, VAR_1, VAR_5);
 else
  VAR_6 = FUNC_1(VAR_3->common->regmap, VAR_2, VAR_5);

 return VAR_6 ? VAR_6 : VAR_0;
}
