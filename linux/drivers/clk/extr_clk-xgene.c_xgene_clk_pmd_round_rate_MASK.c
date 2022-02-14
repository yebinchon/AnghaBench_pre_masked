
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct xgene_clk_pmd {unsigned long denom; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (long,unsigned long) ;
 int FUNC_1 (long,unsigned long) ;
 struct xgene_clk_pmd* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct xgene_clk_pmd *VAR_3 = FUNC_2(VAR_0);
 u64 VAR_4, VAR_5;

 if (!VAR_1 || VAR_1 >= *VAR_2)
  return *VAR_2;


 VAR_4 = VAR_1 * VAR_3->denom;
 VAR_5 = FUNC_0(VAR_4, *VAR_2);

 VAR_4 = (u64)*VAR_2 * VAR_5;
 FUNC_1(VAR_4, VAR_3->denom);

 return VAR_4;
}
