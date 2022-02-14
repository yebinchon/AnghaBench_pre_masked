
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int status; } ;
struct TYPE_8__ {int timeout; int handle; } ;
union drm_amdgpu_gem_wait_idle {TYPE_3__ out; TYPE_4__ in; } ;
typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {int resv; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 long FUNC_1 (int ,int,int,unsigned long) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (union drm_amdgpu_gem_wait_idle*,int ,int) ;

int FUNC_6(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 union drm_amdgpu_gem_wait_idle *VAR_4 = VAR_2;
 struct drm_gem_object *VAR_5;
 struct amdgpu_bo *VAR_6;
 uint32_t VAR_7 = VAR_4->in.handle;
 unsigned long VAR_8 = FUNC_0(VAR_4->in.timeout);
 int VAR_9 = 0;
 long VAR_10;

 VAR_5 = FUNC_2(VAR_3, VAR_7);
 if (VAR_5 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_6 = FUNC_4(VAR_5);
 VAR_10 = FUNC_1(VAR_6->tbo.base.resv, 1, 1,
        VAR_8);





 if (VAR_10 >= 0) {
  FUNC_5(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->out.status = (VAR_10 == 0);
 } else
  VAR_9 = VAR_10;

 FUNC_3(VAR_5);
 return VAR_9;
}
