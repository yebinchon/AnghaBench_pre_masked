
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_keypad_platform_data {int flags; unsigned int debounce; unsigned int prescale; int clk_rate; } ;
struct ep93xx_keypad {scalar_t__ mmio_base; int clk; struct ep93xx_keypad_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ep93xx_keypad *VAR_13)
{
 struct ep93xx_keypad_platform_data *VAR_14 = VAR_13->pdata;
 unsigned int VAR_15 = 0;

 FUNC_1(VAR_13->clk, VAR_14->clk_rate);

 if (VAR_14->flags & VAR_2)
  VAR_15 |= VAR_9;
 if (VAR_14->flags & VAR_1)
  VAR_15 |= VAR_8;
 if (VAR_14->flags & VAR_0)
  VAR_15 |= VAR_5;
 if (VAR_14->flags & VAR_3)
  VAR_15 |= VAR_12;

 VAR_15 |= ((VAR_14->debounce << VAR_7) & VAR_6);

 VAR_15 |= ((VAR_14->prescale << VAR_11) & VAR_10);

 FUNC_0(VAR_15, VAR_13->mmio_base + VAR_4);
}
