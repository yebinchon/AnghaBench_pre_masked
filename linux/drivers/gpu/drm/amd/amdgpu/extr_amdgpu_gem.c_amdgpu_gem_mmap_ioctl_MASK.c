
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr_ptr; } ;
struct TYPE_3__ {int handle; } ;
union drm_amdgpu_gem_mmap {TYPE_2__ out; TYPE_1__ in; } ;
typedef int uint32_t ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_file*,struct drm_device*,int ,int *) ;
 int FUNC_1 (union drm_amdgpu_gem_mmap*,int ,int) ;

int FUNC_2(struct drm_device *VAR_0, void *VAR_1,
     struct drm_file *VAR_2)
{
 union drm_amdgpu_gem_mmap *VAR_3 = VAR_1;
 uint32_t VAR_4 = VAR_3->in.handle;
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 return FUNC_0(VAR_2, VAR_0, VAR_4, &VAR_3->out.addr_ptr);
}
