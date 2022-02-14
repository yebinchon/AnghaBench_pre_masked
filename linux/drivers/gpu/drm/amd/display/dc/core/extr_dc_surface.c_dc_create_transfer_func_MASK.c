
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_transfer_func {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dc_transfer_func* FUNC_1 (int,int ) ;

struct dc_transfer_func *FUNC_2(void)
{
 struct dc_transfer_func *VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);

 if (VAR_1 == ((void*)0))
  goto alloc_fail;

 FUNC_0(&VAR_1->refcount);

 return VAR_1;

alloc_fail:
 return ((void*)0);
}
