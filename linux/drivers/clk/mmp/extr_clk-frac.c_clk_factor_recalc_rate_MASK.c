
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_factor_masks {unsigned int num_shift; unsigned int num_mask; unsigned int den_shift; unsigned int den_mask; unsigned int factor; } ;
struct mmp_clk_factor {struct mmp_clk_factor_masks* masks; int base; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 struct mmp_clk_factor* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct mmp_clk_factor *VAR_2 = FUNC_1(VAR_0);
 struct mmp_clk_factor_masks *VAR_3 = VAR_2->masks;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_2->base);


 VAR_5 = (VAR_4 >> VAR_3->num_shift) & VAR_3->num_mask;


 VAR_6 = (VAR_4 >> VAR_3->den_shift) & VAR_3->den_mask;

 if (!VAR_6)
  return 0;

 return (((VAR_1 / 10000) * VAR_6) /
   (VAR_5 * VAR_2->masks->factor)) * 10000;
}
