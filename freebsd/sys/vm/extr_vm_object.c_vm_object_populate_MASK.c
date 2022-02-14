
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ pindex; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__**,int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

boolean_t
FUNC_5(vm_object_t VAR_3, vm_pindex_t VAR_4, vm_pindex_t VAR_5)
{
 vm_page_t VAR_6;
 vm_pindex_t VAR_7;
 int VAR_8;

 FUNC_1(VAR_3);
 for (VAR_7 = VAR_4; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_2(&VAR_6, VAR_3, VAR_7, VAR_0);
  if (VAR_8 != VAR_1)
   break;





 }
 if (VAR_7 > VAR_4) {
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  while (VAR_6 != ((void*)0) && VAR_6->pindex < VAR_7) {
   FUNC_4(VAR_6);
   VAR_6 = FUNC_0(VAR_6, VAR_2);
  }
 }
 return (VAR_7 == VAR_5);
}
