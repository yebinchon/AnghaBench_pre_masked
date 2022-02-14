
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_object_t ;
struct TYPE_5__ {scalar_t__ object; size_t psind; scalar_t__ dirty; scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int * VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

bool
FUNC_3(vm_page_t VAR_5, int VAR_6, vm_page_t VAR_7)
{
 vm_object_t VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_5->object;
 if (VAR_7 != ((void*)0) && VAR_7->object != VAR_8)
  return (0);
 FUNC_0(VAR_8);
 VAR_10 = FUNC_1(VAR_4[VAR_5->psind]);






 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {

  if (VAR_5[VAR_9].object != VAR_8)
   return (0);
  if (&VAR_5[VAR_9] == VAR_7)
   continue;
  if ((VAR_6 & VAR_2) != 0 && FUNC_2(&VAR_5[VAR_9]))
   return (0);
  if ((VAR_6 & VAR_0) != 0) {






   if (VAR_5[VAR_9].dirty != VAR_3)
    return (0);
  }
  if ((VAR_6 & VAR_1) != 0 &&
      VAR_5[VAR_9].valid != VAR_3)
   return (0);
 }
 return (1);
}
