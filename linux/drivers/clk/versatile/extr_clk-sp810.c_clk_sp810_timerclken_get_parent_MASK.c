
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct clk_sp810_timerclken {int channel; TYPE_1__* sp810; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct clk_sp810_timerclken* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_1)
{
 struct clk_sp810_timerclken *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_2->sp810->base + VAR_0);

 return !!(VAR_3 & (1 << FUNC_0(VAR_2->channel)));
}
