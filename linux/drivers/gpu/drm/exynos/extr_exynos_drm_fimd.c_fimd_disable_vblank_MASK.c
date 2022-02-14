
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimd_context {scalar_t__ regs; scalar_t__ i80_if; int irq_flags; scalar_t__ suspended; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_drm_crtc *VAR_6)
{
 struct fimd_context *VAR_7 = VAR_6->ctx;
 u32 VAR_8;

 if (VAR_7->suspended)
  return;

 if (FUNC_1(0, &VAR_7->irq_flags)) {
  VAR_8 = FUNC_0(VAR_7->regs + VAR_0);

  VAR_8 &= ~VAR_1;

  if (VAR_7->i80_if) {
   VAR_8 &= ~VAR_3;
   VAR_8 &= ~VAR_4;
   VAR_8 &= ~VAR_5;
  } else
   VAR_8 &= ~VAR_2;

  FUNC_2(VAR_8, VAR_7->regs + VAR_0);
 }
}
