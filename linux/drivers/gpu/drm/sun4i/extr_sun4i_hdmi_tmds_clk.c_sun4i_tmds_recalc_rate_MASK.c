
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_tmds {int div_offset; TYPE_1__* hdmi; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sun4i_tmds* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_3,
         unsigned long VAR_4)
{
 struct sun4i_tmds *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->hdmi->base + VAR_1);
 if (VAR_6 & VAR_0)
  VAR_4 /= 2;

 VAR_6 = FUNC_1(VAR_5->hdmi->base + VAR_2);
 VAR_6 = ((VAR_6 >> 4) & 0xf) + VAR_5->div_offset;
 if (!VAR_6)
  VAR_6 = 1;

 return VAR_4 / VAR_6;
}
