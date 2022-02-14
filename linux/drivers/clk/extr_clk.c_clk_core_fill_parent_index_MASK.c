
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct clk_parent_map {struct clk_core* core; scalar_t__ name; TYPE_1__* hw; } ;
struct clk_core {struct clk_parent_map* parents; } ;
struct TYPE_2__ {struct clk_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_core* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk_core*) ;
 int FUNC_2 (struct clk_core*) ;
 struct clk_core* FUNC_3 (struct clk_core*,size_t) ;
 struct clk_core* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct clk_core *VAR_2, u8 VAR_3)
{
 struct clk_parent_map *VAR_4 = &VAR_2->parents[VAR_3];
 struct clk_core *VAR_5 = FUNC_0(-VAR_0);

 if (VAR_4->hw) {
  VAR_5 = VAR_4->hw->core;





  if (!VAR_5)
   VAR_5 = FUNC_0(-VAR_1);
 } else {
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  if (FUNC_1(VAR_5) && FUNC_2(VAR_5) == -VAR_0 && VAR_4->name)
   VAR_5 = FUNC_4(VAR_4->name);
 }


 if (!FUNC_1(VAR_5))
  VAR_4->core = VAR_5;
}
