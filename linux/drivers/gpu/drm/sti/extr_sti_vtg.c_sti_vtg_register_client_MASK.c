
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_vtg {int notifier_list; struct drm_crtc* crtc; } ;
struct notifier_block {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct sti_vtg *VAR_0, struct notifier_block *VAR_1,
       struct drm_crtc *VAR_2)
{
 VAR_0->crtc = VAR_2;
 return FUNC_0(&VAR_0->notifier_list, VAR_1);
}
