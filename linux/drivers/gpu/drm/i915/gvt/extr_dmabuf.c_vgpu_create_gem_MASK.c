
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_fb_info {int drm_format_mod; unsigned int stride; int size; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {unsigned int tiling_and_stride; scalar_t__ write_domain; int read_domains; int base; } ;
struct drm_device {int dummy; } ;






 int VAR_0 ;
 unsigned int VAR_1 ;
 void* VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_4 ;
 int FUNC_1 (struct drm_device*,int *,int ) ;
 int FUNC_2 (char*,int) ;
 struct drm_i915_gem_object* FUNC_3 () ;
 int FUNC_4 (struct drm_i915_gem_object*,int *) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;

__attribute__((used)) static struct drm_i915_gem_object *FUNC_7(struct drm_device *VAR_6,
  struct intel_vgpu_fb_info *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_6(VAR_6);
 struct drm_i915_gem_object *VAR_9;

 VAR_9 = FUNC_3();
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_6, &VAR_9->base,
  FUNC_5(VAR_7->size, VAR_4));
 FUNC_4(VAR_9, &VAR_5);

 VAR_9->read_domains = VAR_0;
 VAR_9->write_domain = 0;
 if (FUNC_0(VAR_8) >= 9) {
  unsigned int VAR_10 = 0;
  unsigned int VAR_11 = 0;

  switch (VAR_7->drm_format_mod) {
  case 131:
   VAR_10 = VAR_1;
   break;
  case 130:
   VAR_10 = VAR_2;
   VAR_11 = VAR_7->stride;
   break;
  case 129:
  case 128:
   VAR_10 = VAR_3;
   VAR_11 = VAR_7->stride;
   break;
  default:
   FUNC_2("invalid drm_format_mod %llx for tiling\n",
         VAR_7->drm_format_mod);
  }
  VAR_9->tiling_and_stride = VAR_10 | VAR_11;
 } else {
  VAR_9->tiling_and_stride = VAR_7->drm_format_mod ?
     VAR_2 : 0;
 }

 return VAR_9;
}
