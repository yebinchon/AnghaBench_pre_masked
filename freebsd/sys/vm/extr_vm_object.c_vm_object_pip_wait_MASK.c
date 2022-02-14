
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_6__ {int paging_in_progress; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*,int ) ;

void
FUNC_5(vm_object_t VAR_1, char *VAR_2)
{

 FUNC_1(VAR_1);

 while (FUNC_0(VAR_1->paging_in_progress) > 0) {
  FUNC_3(VAR_1);
  FUNC_4(&VAR_1->paging_in_progress, VAR_2, VAR_0);
  FUNC_2(VAR_1);
 }
}
