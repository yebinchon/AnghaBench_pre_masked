
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int cache_only; int lock_arg; int (* unlock ) (int ) ;scalar_t__ cache_bypass; int (* lock ) (int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regmap*,int) ;

void FUNC_4(struct regmap *VAR_0, bool VAR_1)
{
 VAR_0->lock(VAR_0->lock_arg);
 FUNC_0(VAR_0->cache_bypass && VAR_1);
 VAR_0->cache_only = VAR_1;
 FUNC_3(VAR_0, VAR_1);
 VAR_0->unlock(VAR_0->lock_arg);
}
