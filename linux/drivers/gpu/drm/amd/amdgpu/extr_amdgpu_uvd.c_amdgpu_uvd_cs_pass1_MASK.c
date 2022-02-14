
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct amdgpu_uvd_cs_ctx {int idx; int ib_idx; TYPE_3__* parser; } ;
struct amdgpu_bo_va_mapping {int dummy; } ;
struct amdgpu_bo {int placement; int tbo; } ;
struct TYPE_7__ {TYPE_2__* adev; } ;
struct TYPE_5__ {int address_64_bit; } ;
struct TYPE_6__ {TYPE_1__ uvd; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (TYPE_3__*,int ,struct amdgpu_bo**,struct amdgpu_bo_va_mapping**) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_uvd_cs_ctx*) ;
 int FUNC_6 (int *,int *,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_uvd_cs_ctx *VAR_1)
{
 struct ttm_operation_ctx VAR_2 = { 0, 0 };
 struct amdgpu_bo_va_mapping *VAR_3;
 struct amdgpu_bo *VAR_4;
 uint32_t VAR_5;
 uint64_t VAR_6 = FUNC_5(VAR_1);
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_1->parser, VAR_6, &VAR_4, &VAR_3);
 if (VAR_7) {
  FUNC_0("Can't find BO for addr 0x%08Lx\n", VAR_6);
  return VAR_7;
 }

 if (!VAR_1->parser->adev->uvd.address_64_bit) {

  VAR_5 = FUNC_3(VAR_1->parser, VAR_1->ib_idx, VAR_1->idx) >> 1;
  if (VAR_5 == 0x0 || VAR_5 == 0x3) {

   uint32_t VAR_8 = VAR_0;
   FUNC_1(VAR_4, VAR_8);
  }
  FUNC_4(VAR_4);

  VAR_7 = FUNC_6(&VAR_4->tbo, &VAR_4->placement, &VAR_2);
 }

 return VAR_7;
}
