
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {scalar_t__ regs; int i80_if; int irq_flags; scalar_t__ suspended; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_drm_crtc *VAR_3)
{
 struct decon_context *VAR_4 = VAR_3->ctx;
 u32 VAR_5;

 if (VAR_4->suspended)
  return;

 if (FUNC_1(0, &VAR_4->irq_flags)) {
  VAR_5 = FUNC_0(VAR_4->regs + VAR_0);

  VAR_5 &= ~VAR_1;
  if (!VAR_4->i80_if)
   VAR_5 &= ~VAR_2;

  FUNC_2(VAR_5, VAR_4->regs + VAR_0);
 }
}
