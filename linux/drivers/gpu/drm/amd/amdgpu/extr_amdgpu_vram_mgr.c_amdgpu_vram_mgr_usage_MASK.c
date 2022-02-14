
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_type_manager {struct amdgpu_vram_mgr* priv; } ;
struct amdgpu_vram_mgr {int usage; } ;


 int FUNC_0 (int *) ;

uint64_t FUNC_1(struct ttm_mem_type_manager *VAR_0)
{
 struct amdgpu_vram_mgr *VAR_1 = VAR_0->priv;

 return FUNC_0(&VAR_1->usage);
}
