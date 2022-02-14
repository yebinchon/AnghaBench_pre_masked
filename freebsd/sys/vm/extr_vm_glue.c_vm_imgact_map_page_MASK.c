
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_ooffset_t ;
typedef int vm_object_t ;
struct sf_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct sf_buf* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ) ;

struct sf_buf *
FUNC_3(vm_object_t VAR_1, vm_ooffset_t VAR_2)
{
 vm_page_t VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_0();
 return (FUNC_1(VAR_3, VAR_0));
}
