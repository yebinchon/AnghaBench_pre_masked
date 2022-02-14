
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dce110_clk_src {TYPE_1__* cs_mask; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
struct TYPE_2__ {scalar_t__ PHYPLLA_PIXCLK_DOUBLE_RATE_ENABLE; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(
  struct dce110_clk_src *VAR_4,
  enum signal_type VAR_5,
  enum dc_color_depth VAR_6,
  bool VAR_7)
{
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;







 if (VAR_5 == VAR_3) {
  VAR_9 = VAR_7 ? 1 : 0;

  switch (VAR_6) {
  case 128:
   VAR_8 = 0;
   break;
  case 131:
   VAR_8 = 1;
   break;
  case 130:
   VAR_8 = 2;
   break;
  case 129:
   VAR_8 = 3;
   break;
  default:
   break;
  }
 }

 if (VAR_4->cs_mask->PHYPLLA_PIXCLK_DOUBLE_RATE_ENABLE)
  FUNC_1(VAR_2,
    VAR_0, VAR_8,
    VAR_1, VAR_9);
 else
  FUNC_0(VAR_2,
    VAR_0, VAR_8);

}
