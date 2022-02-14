
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_0,
          struct drm_display_mode *VAR_1,
          struct drm_display_mode *VAR_2)
{
 struct drm_device *VAR_3 = VAR_0->dev;

 FUNC_0(VAR_3);
 return;
}
