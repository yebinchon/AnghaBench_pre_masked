
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ctx_mgr {int lock; int ctx_handles; } ;
struct amdgpu_fpriv {struct amdgpu_ctx_mgr ctx_mgr; } ;
struct amdgpu_ctx {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct amdgpu_ctx* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_fpriv *VAR_2, uint32_t VAR_3)
{
 struct amdgpu_ctx_mgr *VAR_4 = &VAR_2->ctx_mgr;
 struct amdgpu_ctx *VAR_5;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_0(&VAR_4->ctx_handles, VAR_3);
 if (VAR_5)
  FUNC_1(&VAR_5->refcount, VAR_1);
 FUNC_3(&VAR_4->lock);
 return VAR_5 ? 0 : -VAR_0;
}
