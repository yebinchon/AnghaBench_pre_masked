
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_msm_gem_cpu_prep {int op; int handle; int timeout; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, void *VAR_4,
  struct drm_file *VAR_5)
{
 struct drm_msm_gem_cpu_prep *VAR_6 = VAR_4;
 struct drm_gem_object *VAR_7;
 ktime_t VAR_8 = FUNC_4(VAR_6->timeout);
 int VAR_9;

 if (VAR_6->op & ~VAR_2) {
  FUNC_0("invalid op: %08x\n", VAR_6->op);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6->handle);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_7, VAR_6->op, &VAR_8);

 FUNC_2(VAR_7);

 return VAR_9;
}
