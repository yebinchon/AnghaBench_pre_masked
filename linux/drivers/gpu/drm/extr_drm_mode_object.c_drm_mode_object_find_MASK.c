
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_mode_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct drm_mode_object* FUNC_0 (struct drm_device*,struct drm_file*,int ,int ) ;

struct drm_mode_object *FUNC_1(struct drm_device *VAR_0,
  struct drm_file *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 struct drm_mode_object *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
