
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int disabled; int mutex; } ;
struct drm_bridge {struct dw_hdmi* driver_private; } ;


 int FUNC_0 (struct dw_hdmi*) ;
 int FUNC_1 (struct dw_hdmi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_0)
{
 struct dw_hdmi *VAR_1 = VAR_0->driver_private;

 FUNC_2(&VAR_1->mutex);
 VAR_1->disabled = 0;
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->mutex);
}
