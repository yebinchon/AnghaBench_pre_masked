
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_2__ {int width; } ;
struct meson_clk_pll_data {int flags; TYPE_1__ frac; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned long) ;
 unsigned int FUNC_1 (unsigned int,unsigned long) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned long VAR_1,
        unsigned long VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4,
        struct meson_clk_pll_data *VAR_5)
{
 unsigned int VAR_6 = (1 << VAR_5->frac.width);
 u64 VAR_7 = (u64)VAR_1 * VAR_4;


 if (VAR_1 < VAR_2 * VAR_3 / VAR_4)
  return 0;

 if (VAR_5->flags & VAR_0)
  VAR_7 = FUNC_0(VAR_7 * VAR_6, VAR_2);
 else
  VAR_7 = FUNC_1(VAR_7 * VAR_6, VAR_2);

 VAR_7 -= VAR_3 * VAR_6;

 return FUNC_2((unsigned int)VAR_7, (VAR_6 - 1));
}
