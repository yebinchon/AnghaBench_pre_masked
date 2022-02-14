
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_drm_plane {unsigned int index; } ;
struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {scalar_t__ regs; scalar_t__ suspended; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct decon_context*,unsigned int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_3,
    struct exynos_drm_plane *VAR_4)
{
 struct decon_context *VAR_5 = VAR_3->ctx;
 unsigned int VAR_6 = VAR_4->index;
 u32 VAR_7;

 if (VAR_5->suspended)
  return;


 FUNC_1(VAR_5, VAR_6, 1);


 VAR_7 = FUNC_2(VAR_5->regs + FUNC_0(VAR_6));
 VAR_7 &= ~VAR_2;
 FUNC_3(VAR_7, VAR_5->regs + FUNC_0(VAR_6));

 VAR_7 = FUNC_2(VAR_5->regs + VAR_0);
 VAR_7 |= VAR_1;
 FUNC_3(VAR_7, VAR_5->regs + VAR_0);
}
