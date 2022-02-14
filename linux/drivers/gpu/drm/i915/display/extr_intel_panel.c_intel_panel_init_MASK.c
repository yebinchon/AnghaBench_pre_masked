
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_panel {struct drm_display_mode* downclock_mode; struct drm_display_mode* fixed_mode; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct intel_panel*) ;

int FUNC_1(struct intel_panel *VAR_0,
       struct drm_display_mode *VAR_1,
       struct drm_display_mode *VAR_2)
{
 FUNC_0(VAR_0);

 VAR_0->fixed_mode = VAR_1;
 VAR_0->downclock_mode = VAR_2;

 return 0;
}
