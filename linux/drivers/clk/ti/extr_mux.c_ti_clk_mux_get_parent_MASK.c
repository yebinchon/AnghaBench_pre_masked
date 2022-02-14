
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct clk_omap_mux {int shift; int mask; int* table; int flags; int reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_3 ;
 struct clk_omap_mux* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct clk_hw *VAR_4)
{
 struct clk_omap_mux *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7;
 VAR_7 = VAR_3->clk_readl(&VAR_5->reg) >> VAR_5->shift;
 VAR_7 &= VAR_5->mask;

 if (VAR_5->table) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   if (VAR_5->table[VAR_8] == VAR_7)
    return VAR_8;
  return -VAR_2;
 }

 if (VAR_7 && (VAR_5->flags & VAR_0))
  VAR_7 = FUNC_1(VAR_7) - 1;

 if (VAR_7 && (VAR_5->flags & VAR_1))
  VAR_7--;

 if (VAR_7 >= VAR_6)
  return -VAR_2;

 return VAR_7;
}
