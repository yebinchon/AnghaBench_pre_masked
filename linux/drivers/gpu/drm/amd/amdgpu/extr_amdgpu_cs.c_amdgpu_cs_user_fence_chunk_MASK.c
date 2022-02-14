
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct drm_amdgpu_cs_chunk_fence {int offset; int handle; } ;
struct TYPE_4__ {int num_shared; TYPE_3__* bo; } ;
struct TYPE_5__ {TYPE_1__ tv; scalar_t__ priority; } ;
struct amdgpu_cs_parser {TYPE_2__ uf_entry; int filp; } ;
struct TYPE_6__ {int ttm; } ;
struct amdgpu_bo {TYPE_3__ tbo; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct amdgpu_bo* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_bo**) ;
 scalar_t__ FUNC_3 (int ) ;
 struct drm_gem_object* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_cs_parser *VAR_2,
          struct drm_amdgpu_cs_chunk_fence *VAR_3,
          uint32_t *VAR_4)
{
 struct drm_gem_object *VAR_5;
 struct amdgpu_bo *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_2->filp, VAR_3->handle);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_0(FUNC_6(VAR_5));
 VAR_2->uf_entry.priority = 0;
 VAR_2->uf_entry.tv.bo = &VAR_6->tbo;

 VAR_2->uf_entry.tv.num_shared = 2;

 FUNC_5(VAR_5);

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 != VAR_1 || (VAR_3->offset + 8) > VAR_7) {
  VAR_8 = -VAR_0;
  goto error_unref;
 }

 if (FUNC_3(VAR_6->tbo.ttm)) {
  VAR_8 = -VAR_0;
  goto error_unref;
 }

 *VAR_4 = VAR_3->offset;

 return 0;

error_unref:
 FUNC_2(&VAR_6);
 return VAR_8;
}
