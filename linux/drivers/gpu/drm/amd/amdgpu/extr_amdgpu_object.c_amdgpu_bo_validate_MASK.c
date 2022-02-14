
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct amdgpu_bo {scalar_t__ preferred_domains; scalar_t__ allowed_domains; int placement; int tbo; scalar_t__ pin_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_bo*,scalar_t__) ;
 int FUNC_1 (int *,int *,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct amdgpu_bo *VAR_1)
{
 struct ttm_operation_ctx VAR_2 = { 0, 0 };
 uint32_t VAR_3;
 int VAR_4;

 if (VAR_1->pin_count)
  return 0;

 VAR_3 = VAR_1->preferred_domains;

retry:
 FUNC_0(VAR_1, VAR_3);
 VAR_4 = FUNC_1(&VAR_1->tbo, &VAR_1->placement, &VAR_2);
 if (FUNC_2(VAR_4 == -VAR_0) && VAR_3 != VAR_1->allowed_domains) {
  VAR_3 = VAR_1->allowed_domains;
  goto retry;
 }

 return VAR_4;
}
