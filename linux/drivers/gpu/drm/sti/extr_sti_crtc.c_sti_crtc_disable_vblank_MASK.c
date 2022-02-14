
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_vtg {int dummy; } ;
struct sti_private {struct sti_compositor* compo; } ;
struct sti_compositor {struct sti_vtg** vtg; struct notifier_block* vtg_vblank_nb; } ;
struct notifier_block {int dummy; } ;
struct drm_device {struct sti_private* dev_private; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct sti_vtg*,struct notifier_block*) ;

void FUNC_2(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct sti_private *VAR_2 = VAR_0->dev_private;
 struct sti_compositor *VAR_3 = VAR_2->compo;
 struct notifier_block *VAR_4 = &VAR_3->vtg_vblank_nb[VAR_1];
 struct sti_vtg *VAR_5 = VAR_3->vtg[VAR_1];

 FUNC_0("\n");

 if (FUNC_1(VAR_5, VAR_4))
  FUNC_0("Warning: cannot unregister VTG notifier\n");
}
