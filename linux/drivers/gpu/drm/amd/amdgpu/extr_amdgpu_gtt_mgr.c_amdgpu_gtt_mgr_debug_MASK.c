
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ttm_mem_type_manager {int size; struct amdgpu_gtt_mgr* priv; } ;
struct drm_printer {int dummy; } ;
struct amdgpu_gtt_mgr {int available; int lock; int mm; } ;


 int FUNC_0 (struct ttm_mem_type_manager*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct drm_printer*) ;
 int FUNC_3 (struct drm_printer*,char*,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ttm_mem_type_manager *VAR_0,
     struct drm_printer *VAR_1)
{
 struct amdgpu_gtt_mgr *VAR_2 = VAR_0->priv;

 FUNC_4(&VAR_2->lock);
 FUNC_2(&VAR_2->mm, VAR_1);
 FUNC_5(&VAR_2->lock);

 FUNC_3(VAR_1, "man size:%llu pages, gtt available:%lld pages, usage:%lluMB\n",
     VAR_0->size, (u64)FUNC_1(&VAR_2->available),
     FUNC_0(VAR_0) >> 20);
}
