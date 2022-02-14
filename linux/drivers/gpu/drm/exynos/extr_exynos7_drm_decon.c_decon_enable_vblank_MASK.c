
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {scalar_t__ regs; int i80_if; int irq_flags; scalar_t__ suspended; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_crtc *VAR_6)
{
 struct decon_context *VAR_7 = VAR_6->ctx;
 u32 VAR_8;

 if (VAR_7->suspended)
  return -VAR_0;

 if (!FUNC_1(0, &VAR_7->irq_flags)) {
  VAR_8 = FUNC_0(VAR_7->regs + VAR_1);

  VAR_8 |= VAR_4;

  if (!VAR_7->i80_if) {
   VAR_8 |= VAR_5;
   VAR_8 &= ~VAR_2;
   VAR_8 |= VAR_3;
  }

  FUNC_2(VAR_8, VAR_7->regs + VAR_1);
 }

 return 0;
}
