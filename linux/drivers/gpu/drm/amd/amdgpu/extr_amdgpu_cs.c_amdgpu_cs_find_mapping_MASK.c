
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_fpriv {struct amdgpu_vm vm; } ;
struct amdgpu_cs_parser {int ticket; TYPE_1__* filp; } ;
struct amdgpu_bo_va_mapping {TYPE_3__* bo_va; } ;
struct TYPE_10__ {int resv; } ;
struct TYPE_11__ {TYPE_4__ base; } ;
struct amdgpu_bo {int flags; TYPE_5__ tbo; int placement; int allowed_domains; } ;
struct TYPE_8__ {struct amdgpu_bo* bo; } ;
struct TYPE_9__ {TYPE_2__ base; } ;
struct TYPE_7__ {struct amdgpu_fpriv* driver_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_bo*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 struct amdgpu_bo_va_mapping* FUNC_2 (struct amdgpu_vm*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int *,struct ttm_operation_ctx*) ;

int FUNC_5(struct amdgpu_cs_parser *VAR_3,
      uint64_t VAR_4, struct amdgpu_bo **VAR_5,
      struct amdgpu_bo_va_mapping **VAR_6)
{
 struct amdgpu_fpriv *VAR_7 = VAR_3->filp->driver_priv;
 struct ttm_operation_ctx VAR_8 = { 0, 0 };
 struct amdgpu_vm *VAR_9 = &VAR_7->vm;
 struct amdgpu_bo_va_mapping *VAR_10;
 int VAR_11;

 VAR_4 /= VAR_1;

 VAR_10 = FUNC_2(VAR_9, VAR_4);
 if (!VAR_10 || !VAR_10->bo_va || !VAR_10->bo_va->base.bo)
  return -VAR_2;

 *VAR_5 = VAR_10->bo_va->base.bo;
 *VAR_6 = VAR_10;


 if (FUNC_3((*VAR_5)->tbo.base.resv) != &VAR_3->ticket)
  return -VAR_2;

 if (!((*VAR_5)->flags & VAR_0)) {
  (*VAR_5)->flags |= VAR_0;
  FUNC_0(*VAR_5, (*VAR_5)->allowed_domains);
  VAR_11 = FUNC_4(&(*VAR_5)->tbo, &(*VAR_5)->placement, &VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_1(&(*VAR_5)->tbo);
}
