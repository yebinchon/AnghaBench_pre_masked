
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int mutex; } ;
struct drm_encoder {int dummy; } ;


 struct hdmi_context* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct hdmi_context*) ;
 int FUNC_2 (struct hdmi_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_0)
{
 struct hdmi_context *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(&VAR_1->mutex);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_4(&VAR_1->mutex);
}
