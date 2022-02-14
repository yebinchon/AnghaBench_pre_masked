
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_dvo {int enabled; int clk; int clk_pix; int panel; scalar_t__ regs; TYPE_1__* config; } ;
struct drm_bridge {struct sti_dvo* driver_private; } ;
struct TYPE_2__ {scalar_t__ awg_fwgen_fct; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_2)
{
 struct sti_dvo *VAR_3 = VAR_2->driver_private;

 if (!VAR_3->enabled)
  return;

 FUNC_0("\n");

 if (VAR_3->config->awg_fwgen_fct)
  FUNC_3(0x00000000, VAR_3->regs + VAR_0);

 FUNC_3(0x00000000, VAR_3->regs + VAR_1);

 FUNC_2(VAR_3->panel);


 FUNC_1(VAR_3->clk_pix);
 FUNC_1(VAR_3->clk);

 VAR_3->enabled = 0;
}
