
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_dualdiv_param {int n1; unsigned long m1; unsigned long m2; int n2; int dual; } ;


 unsigned long FUNC_0 (unsigned long,int) ;

__attribute__((used)) static unsigned long
FUNC_1(unsigned long VAR_0,
   const struct meson_clk_dualdiv_param *VAR_1)
{
 if (!VAR_1->dual)
  return FUNC_0(VAR_0, VAR_1->n1);

 return FUNC_0(VAR_0 * (VAR_1->m1 + VAR_1->m2),
     VAR_1->n1 * VAR_1->m1 + VAR_1->n2 * VAR_1->m2);
}
