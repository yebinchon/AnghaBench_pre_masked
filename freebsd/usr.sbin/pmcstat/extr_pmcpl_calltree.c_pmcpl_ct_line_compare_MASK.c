
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_line {scalar_t__ ln_sum; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct pmcpl_ct_line *VAR_2, *VAR_3;

 VAR_2 = (const struct pmcpl_ct_line *) VAR_0;
 VAR_3 = (const struct pmcpl_ct_line *) VAR_1;


 if (VAR_2->ln_sum < VAR_3->ln_sum)
  return (1);
 if (VAR_2->ln_sum > VAR_3->ln_sum)
  return (-1);
 return (0);
}
