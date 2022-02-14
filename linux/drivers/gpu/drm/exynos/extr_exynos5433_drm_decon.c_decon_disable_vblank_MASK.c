
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int out_type; scalar_t__ addr; int irq; int te_irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct exynos_drm_crtc *VAR_2)
{
 struct decon_context *VAR_3 = VAR_2->ctx;

 if (!(VAR_3->out_type & VAR_1))
  FUNC_0(VAR_3->te_irq);
 FUNC_0(VAR_3->irq);

 FUNC_1(0, VAR_3->addr + VAR_0);
}
