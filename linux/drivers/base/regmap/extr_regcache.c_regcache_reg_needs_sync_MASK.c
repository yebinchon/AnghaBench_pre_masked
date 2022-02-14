
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {TYPE_1__* reg_defaults; int no_sync_defaults; } ;
struct TYPE_2__ {unsigned int def; } ;


 int FUNC_0 (struct regmap*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct regmap *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 int VAR_3;


 if (!VAR_0->no_sync_defaults)
  return 1;


 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 >= 0 && VAR_2 == VAR_0->reg_defaults[VAR_3].def)
  return 0;
 return 1;
}
