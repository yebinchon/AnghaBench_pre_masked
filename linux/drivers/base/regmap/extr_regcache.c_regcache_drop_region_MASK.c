
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int lock_arg; int (* unlock ) (int ) ;TYPE_1__* cache_ops; int (* lock ) (int ) ;} ;
struct TYPE_2__ {int (* drop ) (struct regmap*,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_4(struct regmap *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_1->cache_ops || !VAR_1->cache_ops->drop)
  return -VAR_0;

 VAR_1->lock(VAR_1->lock_arg);

 FUNC_3(VAR_1, VAR_2, VAR_3);

 VAR_4 = VAR_1->cache_ops->drop(VAR_1, VAR_2, VAR_3);

 VAR_1->unlock(VAR_1->lock_arg);

 return VAR_4;
}
