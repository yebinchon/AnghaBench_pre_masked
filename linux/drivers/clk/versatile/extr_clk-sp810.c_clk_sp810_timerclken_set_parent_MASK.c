
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_sp810_timerclken {int channel; struct clk_sp810* sp810; } ;
struct clk_sp810 {int lock; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct clk_sp810_timerclken* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2, u8 VAR_3)
{
 struct clk_sp810_timerclken *VAR_4 = FUNC_5(VAR_2);
 struct clk_sp810 *VAR_5 = VAR_4->sp810;
 u32 VAR_6, VAR_7 = FUNC_0(VAR_4->channel);
 unsigned long VAR_8 = 0;

 if (FUNC_1(VAR_3 > 1))
  return -VAR_0;

 FUNC_3(&VAR_5->lock, VAR_8);

 VAR_6 = FUNC_2(VAR_5->base + VAR_1);
 VAR_6 &= ~(1 << VAR_7);
 VAR_6 |= VAR_3 << VAR_7;
 FUNC_6(VAR_6, VAR_5->base + VAR_1);

 FUNC_4(&VAR_5->lock, VAR_8);

 return 0;
}
