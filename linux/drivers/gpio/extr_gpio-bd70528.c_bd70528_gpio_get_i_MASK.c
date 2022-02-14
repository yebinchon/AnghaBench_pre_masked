
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int regmap; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct bd70528_gpio *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->chip.regmap, VAR_0, &VAR_3);

 if (!VAR_4)
  VAR_4 = !(VAR_3 & FUNC_0(VAR_2));
 else
  FUNC_1(VAR_1->chip.dev, "GPIO (in) state read failed\n");

 return VAR_4;
}
