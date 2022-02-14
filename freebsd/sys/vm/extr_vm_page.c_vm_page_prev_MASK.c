
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_6__ {scalar_t__ object; int pindex; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

vm_page_t
FUNC_3(vm_page_t VAR_2)
{
 vm_page_t VAR_3;

 FUNC_2(VAR_2->object);
 if ((VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0)) != ((void*)0)) {
  FUNC_0(VAR_3->object == VAR_2->object);
  if (VAR_3->pindex != VAR_2->pindex - 1)
   VAR_3 = ((void*)0);
 }
 return (VAR_3);
}
