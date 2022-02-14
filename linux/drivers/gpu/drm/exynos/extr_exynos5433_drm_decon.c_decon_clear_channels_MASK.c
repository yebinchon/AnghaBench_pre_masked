
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int * clks; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct decon_context*,int ,int ,int ) ;
 int FUNC_5 (struct decon_context*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct exynos_drm_crtc *VAR_5)
{
 struct decon_context *VAR_6 = VAR_5->ctx;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_9 = FUNC_3(VAR_6->clks[VAR_8]);
  if (VAR_9 < 0)
   goto err;
 }

 FUNC_5(VAR_6, 1);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_4(VAR_6, FUNC_1(VAR_7), VAR_2, 0);
 FUNC_5(VAR_6, 0);

 FUNC_4(VAR_6, VAR_0, VAR_1, ~0);


 FUNC_6(50);

err:
 while (--VAR_8 >= 0)
  FUNC_2(VAR_6->clks[VAR_8]);
}
