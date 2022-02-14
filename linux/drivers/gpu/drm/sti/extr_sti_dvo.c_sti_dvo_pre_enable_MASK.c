
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sti_dvo {int enabled; scalar_t__ regs; int panel; int clk; int clk_pix; struct dvo_config* config; } ;
struct dvo_config {int lowbyte; int midbyte; int highbyte; int flags; scalar_t__ awg_fwgen_fct; } ;
struct drm_bridge {struct sti_dvo* driver_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sti_dvo*,int*,int ) ;
 int FUNC_5 (struct sti_dvo*,int *,int*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_7)
{
 struct sti_dvo *VAR_8 = VAR_7->driver_private;
 struct dvo_config *VAR_9 = VAR_8->config;
 u32 VAR_10;

 FUNC_0("\n");

 if (VAR_8->enabled)
  return;


 FUNC_6(0x00000000, VAR_8->regs + VAR_2);
 FUNC_6(0x00000000, VAR_8->regs + VAR_1);

 if (VAR_9->awg_fwgen_fct) {
  u8 VAR_11;
  u32 VAR_12[VAR_0];

  if (!FUNC_5(VAR_8, &VAR_11, VAR_12))
   FUNC_4(VAR_8, VAR_12, VAR_11);
  else
   return;
 }


 if (FUNC_2(VAR_8->clk_pix))
  FUNC_1("Failed to prepare/enable dvo_pix clk\n");
 if (FUNC_2(VAR_8->clk))
  FUNC_1("Failed to prepare/enable dvo clk\n");

 FUNC_3(VAR_8->panel);


 FUNC_6(VAR_9->lowbyte, VAR_8->regs + VAR_5);
 FUNC_6(VAR_9->midbyte, VAR_8->regs + VAR_6);
 FUNC_6(VAR_9->highbyte, VAR_8->regs + VAR_4);


 VAR_10 = (VAR_9->flags | VAR_3);
 FUNC_6(VAR_10, VAR_8->regs + VAR_2);

 VAR_8->enabled = 1;
}
