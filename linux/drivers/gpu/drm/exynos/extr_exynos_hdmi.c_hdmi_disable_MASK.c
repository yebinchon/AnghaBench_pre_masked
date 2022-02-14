
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int mutex; int notifier; int hotplug_work; scalar_t__ powered; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 struct hdmi_context* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_1)
{
 struct hdmi_context *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(&VAR_2->mutex);

 if (VAR_2->powered) {
  FUNC_4(&VAR_2->mutex);
  FUNC_0(&VAR_2->hotplug_work);
  FUNC_1(VAR_2->notifier,
        VAR_0);
  return;
 }

 FUNC_4(&VAR_2->mutex);
}
