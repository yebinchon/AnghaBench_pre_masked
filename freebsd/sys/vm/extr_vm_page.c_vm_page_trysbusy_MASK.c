
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int * vm_object_t ;
typedef int u_int ;
struct TYPE_4__ {int busy_lock; int * object; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(vm_page_t VAR_2)
{
 vm_object_t VAR_3;
 u_int VAR_4;

 VAR_3 = VAR_2->object;
 VAR_4 = VAR_2->busy_lock;
 for (;;) {
  if ((VAR_4 & VAR_0) == 0)
   return (0);




  if (VAR_3 != ((void*)0) && FUNC_1(VAR_3))
   return (0);
  if (FUNC_0(&VAR_2->busy_lock, &VAR_4,
      VAR_4 + VAR_1))
   break;
 }


 VAR_3 = VAR_2->object;
 if (VAR_3 != ((void*)0) && FUNC_1(VAR_3)) {
  FUNC_2(VAR_2);
  return (0);
 }
 return (1);
}
