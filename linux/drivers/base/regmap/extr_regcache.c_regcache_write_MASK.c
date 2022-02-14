
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {scalar_t__ cache_type; TYPE_1__* cache_ops; } ;
struct TYPE_2__ {int (* write ) (struct regmap*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_3(struct regmap *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_1->cache_type == VAR_0)
  return 0;

 FUNC_0(!VAR_1->cache_ops);

 if (!FUNC_1(VAR_1, VAR_2))
  return VAR_1->cache_ops->write(VAR_1, VAR_2, VAR_3);

 return 0;
}
