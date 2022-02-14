
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sun4i_tmds* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_3)
{
 struct sun4i_tmds *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->hdmi->base + VAR_0);
 return ((VAR_5 & VAR_1) >>
  VAR_2);
}
