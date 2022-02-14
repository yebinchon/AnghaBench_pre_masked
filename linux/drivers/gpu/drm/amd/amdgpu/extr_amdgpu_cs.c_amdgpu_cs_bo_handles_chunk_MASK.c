
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_amdgpu_bo_list_in {int bo_number; } ;
struct drm_amdgpu_bo_list_entry {int dummy; } ;
struct amdgpu_cs_parser {int bo_list; int filp; int adev; } ;


 int FUNC_0 (struct drm_amdgpu_bo_list_in*,struct drm_amdgpu_bo_list_entry**) ;
 int FUNC_1 (int ,int ,struct drm_amdgpu_bo_list_entry*,int ,int *) ;
 int FUNC_2 (struct drm_amdgpu_bo_list_entry*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_cs_parser *VAR_0,
          struct drm_amdgpu_bo_list_in *VAR_1)
{
 int VAR_2;
 struct drm_amdgpu_bo_list_entry *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0->adev, VAR_0->filp, VAR_3, VAR_1->bo_number,
      &VAR_0->bo_list);
 if (VAR_2)
  goto error_free;

 FUNC_2(VAR_3);
 return 0;

error_free:
 if (VAR_3)
  FUNC_2(VAR_3);

 return VAR_2;
}
