
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int name; int cache_type; int readable_noinc_reg; int writeable_noinc_reg; int precious_reg; int volatile_reg; int readable_reg; int writeable_reg; int max_register; } ;
struct regmap {int cache_bypass; int cache_only; int cache_type; int readable_noinc_reg; int writeable_noinc_reg; int precious_reg; int volatile_reg; int readable_reg; int writeable_reg; int max_register; } ;


 int FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*,struct regmap_config const*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*,int ) ;

int FUNC_4(struct regmap *VAR_0, const struct regmap_config *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);

 VAR_0->max_register = VAR_1->max_register;
 VAR_0->writeable_reg = VAR_1->writeable_reg;
 VAR_0->readable_reg = VAR_1->readable_reg;
 VAR_0->volatile_reg = VAR_1->volatile_reg;
 VAR_0->precious_reg = VAR_1->precious_reg;
 VAR_0->writeable_noinc_reg = VAR_1->writeable_noinc_reg;
 VAR_0->readable_noinc_reg = VAR_1->readable_noinc_reg;
 VAR_0->cache_type = VAR_1->cache_type;

 FUNC_3(VAR_0, VAR_1->name);

 VAR_0->cache_bypass = 0;
 VAR_0->cache_only = 0;

 return FUNC_1(VAR_0, VAR_1);
}
