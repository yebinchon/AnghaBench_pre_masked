
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_access_table {int n_yes_ranges; int yes_ranges; int n_no_ranges; int no_ranges; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (unsigned int,int ,int ) ;

bool FUNC_1(struct regmap *VAR_0, unsigned int VAR_1,
         const struct regmap_access_table *VAR_2)
{

 if (FUNC_0(VAR_1, VAR_2->no_ranges, VAR_2->n_no_ranges))
  return 0;


 if (!VAR_2->n_yes_ranges)
  return 1;

 return FUNC_0(VAR_1, VAR_2->yes_ranges,
        VAR_2->n_yes_ranges);
}
