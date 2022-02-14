
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_fpriv {int bo_list_handles; } ;
struct amdgpu_bo_list {int refcount; } ;


 int VAR_0 ;
 struct amdgpu_bo_list* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct amdgpu_fpriv *VAR_1, int VAR_2,
         struct amdgpu_bo_list **VAR_3)
{
 FUNC_2();
 *VAR_3 = FUNC_0(&VAR_1->bo_list_handles, VAR_2);

 if (*VAR_3 && FUNC_1(&(*VAR_3)->refcount)) {
  FUNC_3();
  return 0;
 }

 FUNC_3();
 return -VAR_0;
}
