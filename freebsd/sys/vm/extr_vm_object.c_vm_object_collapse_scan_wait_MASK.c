
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_13__ {int memq; struct TYPE_13__* backing_object; } ;
struct TYPE_12__ {TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static vm_page_t
FUNC_7(vm_object_t VAR_1, vm_page_t VAR_2, vm_page_t VAR_3,
    int VAR_4)
{
 vm_object_t VAR_5;

 FUNC_2(VAR_1);
 VAR_5 = VAR_1->backing_object;
 FUNC_2(VAR_5);

 FUNC_0(VAR_2 == ((void*)0) || VAR_2->object == VAR_1 || VAR_2->object == VAR_5,
     ("invalid ownership %p %p %p", VAR_2, VAR_1, VAR_5));
 if ((VAR_4 & VAR_0) != 0)
  return (VAR_3);

 if (VAR_2 == ((void*)0)) {
  FUNC_6();
 } else {
  if (VAR_2->object == VAR_1)
   FUNC_4(VAR_5);
  else
   FUNC_4(VAR_1);
  FUNC_5(VAR_2, "vmocol", 0);
 }
 FUNC_3(VAR_1);
 FUNC_3(VAR_5);
 return (FUNC_1(&VAR_5->memq));
}
