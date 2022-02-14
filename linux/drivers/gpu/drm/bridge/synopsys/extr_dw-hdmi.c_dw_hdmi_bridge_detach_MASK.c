
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int cec_notifier_mutex; int * cec_notifier; } ;
struct drm_bridge {struct dw_hdmi* driver_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct dw_hdmi *VAR_1 = VAR_0->driver_private;

 FUNC_1(&VAR_1->cec_notifier_mutex);
 FUNC_0(VAR_1->cec_notifier);
 VAR_1->cec_notifier = ((void*)0);
 FUNC_2(&VAR_1->cec_notifier_mutex);
}
