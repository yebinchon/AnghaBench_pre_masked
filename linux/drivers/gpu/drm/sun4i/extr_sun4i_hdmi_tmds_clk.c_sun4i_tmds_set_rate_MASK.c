
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sun4i_tmds {TYPE_1__* hdmi; scalar_t__ div_offset; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sun4i_tmds* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,unsigned long,scalar_t__,scalar_t__*,int*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_4, unsigned long VAR_5,
          unsigned long VAR_6)
{
 struct sun4i_tmds *VAR_7 = FUNC_1(VAR_4);
 bool VAR_8;
 u32 VAR_9;
 u8 VAR_10;

 FUNC_3(VAR_5, VAR_6, VAR_7->div_offset,
    &VAR_10, &VAR_8);

 VAR_9 = FUNC_2(VAR_7->hdmi->base + VAR_1);
 VAR_9 &= ~VAR_0;
 if (VAR_8)
  VAR_9 |= VAR_0;
 FUNC_4(VAR_9, VAR_7->hdmi->base + VAR_1);

 VAR_9 = FUNC_2(VAR_7->hdmi->base + VAR_3);
 VAR_9 &= ~VAR_2;
 FUNC_4(VAR_9 | FUNC_0(VAR_10 - VAR_7->div_offset),
        VAR_7->hdmi->base + VAR_3);

 return 0;
}
