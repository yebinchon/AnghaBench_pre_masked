
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pll_hw {int min_mul; int max_mul; int bfreq; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct owl_pll_hw*) ;

__attribute__((used)) static u32 FUNC_2(struct owl_pll_hw *VAR_0, unsigned long VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0->bfreq);
 if (VAR_2 < VAR_0->min_mul)
  VAR_2 = VAR_0->min_mul;
 else if (VAR_2 > VAR_0->max_mul)
  VAR_2 = VAR_0->max_mul;

 return VAR_2 &= FUNC_1(VAR_0);
}
