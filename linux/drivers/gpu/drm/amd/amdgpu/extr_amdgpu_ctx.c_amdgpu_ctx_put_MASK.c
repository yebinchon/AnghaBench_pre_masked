
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ctx {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct amdgpu_ctx *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_2->refcount, VAR_1);
 return 0;
}
