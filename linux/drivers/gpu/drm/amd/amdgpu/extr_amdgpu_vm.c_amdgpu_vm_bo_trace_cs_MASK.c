
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct amdgpu_vm {int va; } ;
struct amdgpu_bo_va_mapping {TYPE_4__* bo_va; } ;
struct TYPE_5__ {int resv; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;
struct TYPE_7__ {struct amdgpu_bo* bo; } ;
struct TYPE_8__ {TYPE_3__ base; } ;


 int VAR_0 ;
 struct amdgpu_bo_va_mapping* FUNC_0 (int *,int ,int ) ;
 struct amdgpu_bo_va_mapping* FUNC_1 (struct amdgpu_bo_va_mapping*,int ,int ) ;
 struct ww_acquire_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_bo_va_mapping*) ;
 int FUNC_4 () ;

void FUNC_5(struct amdgpu_vm *VAR_1, struct ww_acquire_ctx *VAR_2)
{
 struct amdgpu_bo_va_mapping *VAR_3;

 if (!FUNC_4())
  return;

 for (VAR_3 = FUNC_0(&VAR_1->va, 0, VAR_0); VAR_3;
      VAR_3 = FUNC_1(VAR_3, 0, VAR_0)) {
  if (VAR_3->bo_va && VAR_3->bo_va->base.bo) {
   struct amdgpu_bo *VAR_4;

   VAR_4 = VAR_3->bo_va->base.bo;
   if (FUNC_2(VAR_4->tbo.base.resv) !=
       VAR_2)
    continue;
  }

  FUNC_3(VAR_3);
 }
}
