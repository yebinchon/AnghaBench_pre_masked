
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_2__ {int width; } ;
struct meson_clk_pll_data {TYPE_1__ frac; } ;


 unsigned long FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_0,
       unsigned int VAR_1, unsigned int VAR_2,
       unsigned int VAR_3,
       struct meson_clk_pll_data *VAR_4)
{
 u64 VAR_5 = (u64)VAR_0 * VAR_1;

 if (VAR_3 && FUNC_1(&VAR_4->frac)) {
  u64 VAR_6 = (u64)VAR_0 * VAR_3;

  VAR_5 += FUNC_0(VAR_6,
      (1 << VAR_4->frac.width));
 }

 return FUNC_0(VAR_5, VAR_2);
}
