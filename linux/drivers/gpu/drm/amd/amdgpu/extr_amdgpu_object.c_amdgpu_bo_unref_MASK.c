
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int dummy; } ;
struct amdgpu_bo {struct ttm_buffer_object tbo; } ;


 int FUNC_0 (struct ttm_buffer_object*) ;

void FUNC_1(struct amdgpu_bo **VAR_0)
{
 struct ttm_buffer_object *VAR_1;

 if ((*VAR_0) == ((void*)0))
  return;

 VAR_1 = &((*VAR_0)->tbo);
 FUNC_0(VAR_1);
 *VAR_0 = ((void*)0);
}
