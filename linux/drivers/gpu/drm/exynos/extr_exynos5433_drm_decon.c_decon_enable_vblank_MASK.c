
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_drm_crtc {scalar_t__ i80_mode; struct decon_context* ctx; } ;
struct decon_context {int out_type; int te_irq; int irq; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct exynos_drm_crtc *VAR_6)
{
 struct decon_context *VAR_7 = VAR_6->ctx;
 u32 VAR_8;

 VAR_8 = VAR_4;
 if (VAR_6->i80_mode)
  VAR_8 |= VAR_2;
 else
  VAR_8 |= VAR_5 | VAR_3;

 FUNC_1(VAR_8, VAR_7->addr + VAR_0);

 FUNC_0(VAR_7->irq);
 if (!(VAR_7->out_type & VAR_1))
  FUNC_0(VAR_7->te_irq);

 return 0;
}
