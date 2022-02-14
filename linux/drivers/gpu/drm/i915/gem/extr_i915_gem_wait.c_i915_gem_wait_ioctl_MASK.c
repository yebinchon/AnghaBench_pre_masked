
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_wait {scalar_t__ flags; scalar_t__ timeout_ns; int bo_handle; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int ktime_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct drm_i915_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 long FUNC_2 (struct drm_i915_gem_object*,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

int
FUNC_8(struct drm_device *VAR_7, void *VAR_8, struct drm_file *VAR_9)
{
 struct drm_i915_gem_wait *VAR_10 = VAR_8;
 struct drm_i915_gem_object *VAR_11;
 ktime_t VAR_12;
 long VAR_13;

 if (VAR_10->flags != 0)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_9, VAR_10->bo_handle);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_3();

 VAR_13 = FUNC_2(VAR_11,
       VAR_5 |
       VAR_6 |
       VAR_4,
       FUNC_7(VAR_10->timeout_ns));

 if (VAR_10->timeout_ns > 0) {
  VAR_10->timeout_ns -= FUNC_5(FUNC_4(FUNC_3(), VAR_12));
  if (VAR_10->timeout_ns < 0)
   VAR_10->timeout_ns = 0;
  if (VAR_13 == -VAR_3 && !FUNC_6(VAR_10->timeout_ns))
   VAR_10->timeout_ns = 0;


  if (VAR_13 == -VAR_3 && VAR_10->timeout_ns)
   VAR_13 = -VAR_0;
 }

 FUNC_1(VAR_11);
 return VAR_13;
}
