
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int crtc; scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_2)
{
 struct decon_context *VAR_3 = VAR_2->ctx;
 unsigned int VAR_4, VAR_5 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_6 = FUNC_2(VAR_3->regs + FUNC_0(VAR_4));

  if (VAR_6 & VAR_0) {
   VAR_6 &= ~VAR_0;
   FUNC_3(VAR_6, VAR_3->regs + FUNC_0(VAR_4));
   VAR_5 = 1;
  }
 }


 if (VAR_5)
  FUNC_1(VAR_3->crtc);
}
