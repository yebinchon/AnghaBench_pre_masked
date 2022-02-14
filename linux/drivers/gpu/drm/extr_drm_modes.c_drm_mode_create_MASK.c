
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (int,int ) ;

struct drm_display_mode *FUNC_1(struct drm_device *VAR_1)
{
 struct drm_display_mode *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct drm_display_mode), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2;
}
