
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct stm32_clk_mmux {TYPE_1__* mmux; } ;
struct clk_mux {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int (* set_parent ) (struct clk_hw*,int ) ;} ;
struct TYPE_3__ {int nbr_clk; struct clk_hw** hws; } ;


 struct clk_hw* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*,struct clk_hw*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (struct clk_hw*,int ) ;
 struct stm32_clk_mmux* FUNC_3 (struct clk_mux*) ;
 struct clk_mux* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_mux *VAR_3 = FUNC_4(VAR_1);
 struct stm32_clk_mmux *VAR_4 = FUNC_3(VAR_3);
 struct clk_hw *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_0.set_parent(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_4->mmux->nbr_clk; VAR_7++)
  if (VAR_4->mmux->hws[VAR_7] != VAR_1)
   FUNC_1(VAR_4->mmux->hws[VAR_7], VAR_5);

 return 0;
}
