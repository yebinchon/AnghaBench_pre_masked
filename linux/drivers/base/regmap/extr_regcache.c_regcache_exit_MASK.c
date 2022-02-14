
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {scalar_t__ cache_type; TYPE_1__* cache_ops; int dev; int reg_defaults_raw; scalar_t__ cache_free; int reg_defaults; } ;
struct TYPE_2__ {int (* exit ) (struct regmap*) ;int name; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regmap*) ;

void FUNC_4(struct regmap *VAR_1)
{
 if (VAR_1->cache_type == VAR_0)
  return;

 FUNC_0(!VAR_1->cache_ops);

 FUNC_2(VAR_1->reg_defaults);
 if (VAR_1->cache_free)
  FUNC_2(VAR_1->reg_defaults_raw);

 if (VAR_1->cache_ops->exit) {
  FUNC_1(VAR_1->dev, "Destroying %s cache\n",
   VAR_1->cache_ops->name);
  VAR_1->cache_ops->exit(VAR_1);
 }
}
