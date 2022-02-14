
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_mixer {scalar_t__ id; int status; struct device* dev; } ;
struct sti_compositor {int clk_compo_aux; int clk_pix_aux; int clk_compo_main; int clk_pix_main; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {TYPE_1__ base; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct sti_compositor* FUNC_2 (struct device*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct sti_mixer*,int) ;
 int FUNC_5 (struct sti_mixer*) ;
 struct sti_mixer* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_2)
{
 struct sti_mixer *VAR_3 = FUNC_6(VAR_2);
 struct device *VAR_4 = VAR_3->dev;
 struct sti_compositor *VAR_5 = FUNC_2(VAR_4);

 FUNC_0("CRTC:%d (%s)\n", VAR_2->base.id, FUNC_5(VAR_3));


 FUNC_4(VAR_3, 0);

 FUNC_3(VAR_2);


 if (VAR_3->id == VAR_1) {
  FUNC_1(VAR_5->clk_pix_main);
  FUNC_1(VAR_5->clk_compo_main);
 } else {
  FUNC_1(VAR_5->clk_pix_aux);
  FUNC_1(VAR_5->clk_compo_aux);
 }

 VAR_3->status = VAR_0;
}
