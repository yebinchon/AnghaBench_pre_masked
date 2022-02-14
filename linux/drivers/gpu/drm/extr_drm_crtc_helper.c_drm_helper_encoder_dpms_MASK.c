
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder_helper_funcs {int (* dpms ) (struct drm_encoder*,int) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;


 int FUNC_0 (struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_0, int VAR_1)
{
 const struct drm_encoder_helper_funcs *VAR_2;

 VAR_2 = VAR_0->helper_private;
 if (!VAR_2)
  return;

 if (VAR_2->dpms)
  VAR_2->dpms(VAR_0, VAR_1);
}
