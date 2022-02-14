
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder_helper_funcs {int (* dpms ) (struct drm_encoder*,int ) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; int crtc; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*,int,int) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_encoder*,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 int VAR_3 = FUNC_0(VAR_1->crtc)->index;
 const struct drm_encoder_helper_funcs *VAR_4 = VAR_1->helper_private;

 VAR_4->dpms(VAR_1, VAR_0);

 FUNC_1(VAR_2, VAR_3);

 if (FUNC_3(VAR_2))
  FUNC_2(VAR_2, VAR_3 ^ 1, 0);

 FUNC_2(VAR_2, VAR_3, 1);
}
