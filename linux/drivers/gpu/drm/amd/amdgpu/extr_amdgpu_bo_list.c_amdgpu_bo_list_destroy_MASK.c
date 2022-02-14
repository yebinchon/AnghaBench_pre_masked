
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_fpriv {int bo_list_lock; int bo_list_handles; } ;
struct amdgpu_bo_list {int refcount; } ;


 int VAR_0 ;
 struct amdgpu_bo_list* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_fpriv *VAR_1, int VAR_2)
{
 struct amdgpu_bo_list *VAR_3;

 FUNC_2(&VAR_1->bo_list_lock);
 VAR_3 = FUNC_0(&VAR_1->bo_list_handles, VAR_2);
 FUNC_3(&VAR_1->bo_list_lock);
 if (VAR_3)
  FUNC_1(&VAR_3->refcount, VAR_0);
}
