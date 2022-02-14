
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dsi {int enable; struct dsi_hw_ctx* ctx; } ;
struct dsi_hw_ctx {int pclk; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dw_dsi*) ;
 struct dw_dsi* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct dw_dsi *VAR_1 = FUNC_3(VAR_0);
 struct dsi_hw_ctx *VAR_2 = VAR_1->ctx;
 int VAR_3;

 if (VAR_1->enable)
  return;

 VAR_3 = FUNC_1(VAR_2->pclk);
 if (VAR_3) {
  FUNC_0("fail to enable pclk: %d\n", VAR_3);
  return;
 }

 FUNC_2(VAR_1);

 VAR_1->enable = 1;
}
