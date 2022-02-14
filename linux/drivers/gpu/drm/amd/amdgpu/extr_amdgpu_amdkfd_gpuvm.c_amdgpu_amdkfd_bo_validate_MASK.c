
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_2__ {int ttm; } ;
struct amdgpu_bo {int placement; TYPE_1__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (struct amdgpu_bo*,int ) ;
 int FUNC_2 (struct amdgpu_bo*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_bo *VAR_2, uint32_t VAR_3,
         bool VAR_4)
{
 struct ttm_operation_ctx VAR_5 = { 0, 0 };
 int VAR_6;

 if (FUNC_0(FUNC_3(VAR_2->tbo.ttm),
   "Called with userptr BO"))
  return -VAR_1;

 FUNC_1(VAR_2, VAR_3);

 VAR_6 = FUNC_4(&VAR_2->tbo, &VAR_2->placement, &VAR_5);
 if (VAR_6)
  goto validate_fail;
 if (VAR_4)
  FUNC_2(VAR_2, VAR_0, 0);

validate_fail:
 return VAR_6;
}
