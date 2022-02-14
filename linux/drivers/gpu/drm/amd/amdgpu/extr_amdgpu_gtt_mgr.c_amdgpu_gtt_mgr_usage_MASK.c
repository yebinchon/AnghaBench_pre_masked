
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_type_manager {int size; struct amdgpu_gtt_mgr* priv; } ;
struct amdgpu_gtt_mgr {int available; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

uint64_t FUNC_1(struct ttm_mem_type_manager *VAR_1)
{
 struct amdgpu_gtt_mgr *VAR_2 = VAR_1->priv;
 s64 VAR_3 = VAR_1->size - FUNC_0(&VAR_2->available);

 return (VAR_3 > 0 ? VAR_3 : 0) * VAR_0;
}
