
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimd_context {scalar_t__ regs; scalar_t__ i80_if; int irq_flags; scalar_t__ suspended; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_crtc *VAR_11)
{
 struct fimd_context *VAR_12 = VAR_11->ctx;
 u32 VAR_13;

 if (VAR_12->suspended)
  return -VAR_0;

 if (!FUNC_1(0, &VAR_12->irq_flags)) {
  VAR_13 = FUNC_0(VAR_12->regs + VAR_1);

  VAR_13 |= VAR_6;

  if (VAR_12->i80_if) {
   VAR_13 |= VAR_8;
   VAR_13 |= VAR_9;
   VAR_13 &= ~VAR_10;
  } else {
   VAR_13 |= VAR_7;

   VAR_13 &= ~VAR_3;
   VAR_13 |= VAR_2;
   VAR_13 &= ~VAR_4;
   VAR_13 |= VAR_5;
  }

  FUNC_2(VAR_13, VAR_12->regs + VAR_1);
 }

 return 0;
}
