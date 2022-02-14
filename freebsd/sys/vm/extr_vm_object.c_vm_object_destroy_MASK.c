
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_4__ {int * cred; scalar_t__ charge; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(vm_object_t VAR_1)
{




 if (VAR_1->cred != ((void*)0)) {
  FUNC_1(VAR_1->charge, VAR_1->cred);
  VAR_1->charge = 0;
  FUNC_0(VAR_1->cred);
  VAR_1->cred = ((void*)0);
 }




 FUNC_2(VAR_0, VAR_1);
}
