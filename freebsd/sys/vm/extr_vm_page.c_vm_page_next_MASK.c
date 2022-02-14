
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_6__ {scalar_t__ object; scalar_t__ pindex; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;

vm_page_t
FUNC_3(vm_page_t VAR_1)
{
 vm_page_t VAR_2;

 FUNC_2(VAR_1->object);
 if ((VAR_2 = FUNC_1(VAR_1, VAR_0)) != ((void*)0)) {
  FUNC_0(VAR_2->object == VAR_1->object);
  if (VAR_2->pindex != VAR_1->pindex + 1)
   VAR_2 = ((void*)0);
 }
 return (VAR_2);
}
