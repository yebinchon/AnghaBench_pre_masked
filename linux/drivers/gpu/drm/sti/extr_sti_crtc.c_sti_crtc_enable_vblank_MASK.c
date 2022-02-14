
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_vtg {int dummy; } ;
struct sti_private {struct sti_compositor* compo; } ;
struct sti_compositor {struct sti_vtg** vtg; TYPE_1__** mixer; struct notifier_block* vtg_vblank_nb; } ;
struct notifier_block {int dummy; } ;
struct drm_device {struct sti_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {struct drm_crtc drm_crtc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct sti_vtg*,struct notifier_block*,struct drm_crtc*) ;

int FUNC_3(struct drm_device *VAR_1, unsigned int VAR_2)
{
 struct sti_private *VAR_3 = VAR_1->dev_private;
 struct sti_compositor *VAR_4 = VAR_3->compo;
 struct notifier_block *VAR_5 = &VAR_4->vtg_vblank_nb[VAR_2];
 struct drm_crtc *VAR_6 = &VAR_4->mixer[VAR_2]->drm_crtc;
 struct sti_vtg *VAR_7 = VAR_4->vtg[VAR_2];

 FUNC_0("\n");

 if (FUNC_2(VAR_7, VAR_5, VAR_6)) {
  FUNC_1("Cannot register VTG notifier\n");
  return -VAR_0;
 }

 return 0;
}
