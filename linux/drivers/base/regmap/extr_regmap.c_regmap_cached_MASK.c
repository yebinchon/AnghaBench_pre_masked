
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {scalar_t__ cache_type; unsigned int max_register; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;int cache_ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct regmap *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 if (VAR_1->cache_type == VAR_0)
  return 0;

 if (!VAR_1->cache_ops)
  return 0;

 if (VAR_1->max_register && VAR_2 > VAR_1->max_register)
  return 0;

 VAR_1->lock(VAR_1->lock_arg);
 VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 VAR_1->unlock(VAR_1->lock_arg);
 if (VAR_3)
  return 0;

 return 1;
}
