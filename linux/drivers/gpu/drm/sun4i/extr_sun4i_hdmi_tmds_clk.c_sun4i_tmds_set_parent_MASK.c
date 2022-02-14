
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sun4i_tmds {TYPE_1__* hdmi; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct sun4i_tmds* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_3, u8 VAR_4)
{
 struct sun4i_tmds *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;

 if (VAR_4 > 1)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5->hdmi->base + VAR_1);
 VAR_6 &= ~VAR_2;
 FUNC_3(VAR_6 | FUNC_0(VAR_4),
        VAR_5->hdmi->base + VAR_1);

 return 0;
}
