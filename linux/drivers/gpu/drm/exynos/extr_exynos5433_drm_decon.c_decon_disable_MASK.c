
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int out_type; int first_win; int dev; int * planes; int irq; int te_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct exynos_drm_crtc*,int *) ;
 int FUNC_1 (struct decon_context*) ;
 int FUNC_2 (struct exynos_drm_crtc*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct exynos_drm_crtc *VAR_2)
{
 struct decon_context *VAR_3 = VAR_2->ctx;
 int VAR_4;

 if (!(VAR_3->out_type & VAR_0))
  FUNC_4(VAR_3->te_irq);
 FUNC_4(VAR_3->irq);






 for (VAR_4 = VAR_3->first_win; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_2, &VAR_3->planes[VAR_4]);

 FUNC_1(VAR_3);

 FUNC_2(VAR_2, 0);

 FUNC_3(VAR_3->dev);
}
