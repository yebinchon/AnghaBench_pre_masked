
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ctx_mgr {int lock; int ctx_handles; } ;
struct amdgpu_fpriv {struct amdgpu_ctx_mgr ctx_mgr; } ;
struct amdgpu_ctx {int refcount; } ;


 struct amdgpu_ctx* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct amdgpu_ctx *FUNC_4(struct amdgpu_fpriv *VAR_0, uint32_t VAR_1)
{
 struct amdgpu_ctx *VAR_2;
 struct amdgpu_ctx_mgr *VAR_3;

 if (!VAR_0)
  return ((void*)0);

 VAR_3 = &VAR_0->ctx_mgr;

 FUNC_2(&VAR_3->lock);
 VAR_2 = FUNC_0(&VAR_3->ctx_handles, VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->refcount);
 FUNC_3(&VAR_3->lock);
 return VAR_2;
}
