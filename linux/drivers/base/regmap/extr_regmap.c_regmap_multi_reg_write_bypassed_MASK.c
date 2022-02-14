
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int cache_bypass; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;
struct reg_sequence {int dummy; } ;


 int FUNC_0 (struct regmap*,struct reg_sequence const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct regmap *VAR_0,
        const struct reg_sequence *VAR_1,
        int VAR_2)
{
 int VAR_3;
 bool VAR_4;

 VAR_0->lock(VAR_0->lock_arg);

 VAR_4 = VAR_0->cache_bypass;
 VAR_0->cache_bypass = 1;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->cache_bypass = VAR_4;

 VAR_0->unlock(VAR_0->lock_arg);

 return VAR_3;
}
