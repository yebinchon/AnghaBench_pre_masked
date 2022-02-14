
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_cgnode {scalar_t__ pcg_count; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct pmcstat_cgnode *const *VAR_2, *const *VAR_3, *VAR_4, *VAR_5;

 VAR_2 = (const struct pmcstat_cgnode *const *) VAR_0;
 VAR_4 = *VAR_2;
 VAR_3 = (const struct pmcstat_cgnode *const *) VAR_1;
 VAR_5 = *VAR_3;


 if (VAR_4->pcg_count < VAR_5->pcg_count)
  return (1);
 if (VAR_4->pcg_count > VAR_5->pcg_count)
  return (-1);
 return (0);
}
