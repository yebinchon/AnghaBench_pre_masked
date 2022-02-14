
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {int seqno; } ;
struct drm_vc4_wait_bo {scalar_t__ pad; int timeout_ns; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct vc4_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_device*,int ,int *) ;

int
FUNC_5(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 int VAR_4;
 struct drm_vc4_wait_bo *VAR_5 = VAR_2;
 struct drm_gem_object *VAR_6;
 struct vc4_bo *VAR_7;

 if (VAR_5->pad != 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_5->handle);
 if (!VAR_6) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_5->handle);
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_6);

 VAR_4 = FUNC_4(VAR_1, VAR_7->seqno,
           &VAR_5->timeout_ns);

 FUNC_2(VAR_6);
 return VAR_4;
}
