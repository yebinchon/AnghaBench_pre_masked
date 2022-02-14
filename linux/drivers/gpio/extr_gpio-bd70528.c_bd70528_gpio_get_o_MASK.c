
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int regmap; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct bd70528_gpio *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_2(VAR_1->chip.regmap, FUNC_0(VAR_2), &VAR_4);
 if (!VAR_3)
  VAR_3 = !!(VAR_4 & VAR_0);
 else
  FUNC_1(VAR_1->chip.dev, "GPIO (out) state read failed\n");

 return VAR_3;
}
