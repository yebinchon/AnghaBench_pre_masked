
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int * vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_int8_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(void *VAR_4, vm_size_t VAR_5, u_int8_t VAR_6)
{
 vm_page_t VAR_7;

 if (!VAR_1)
  FUNC_6(VAR_3,(vm_offset_t)VAR_4,
      (vm_offset_t)VAR_4 + VAR_0);

 if (VAR_1)
  VAR_7 = FUNC_2(FUNC_0((vm_offset_t)VAR_4));
 else
  VAR_7 = FUNC_2((vm_offset_t)VAR_4);
 FUNC_1(VAR_7 != ((void*)0),
     ("Freeing UMA block at %p with no associated page", VAR_4));



 FUNC_8(VAR_7);
 FUNC_7(VAR_7);
 FUNC_4(&VAR_2, 1);
}
