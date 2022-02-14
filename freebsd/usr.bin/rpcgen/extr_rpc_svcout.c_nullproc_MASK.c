
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int proc_num; struct TYPE_3__* next; } ;
typedef TYPE_1__ proc_list ;


 scalar_t__ FUNC_0 (int ,char*) ;

int
FUNC_1(proc_list *VAR_0)
{
 for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next) {
  if (FUNC_0(VAR_0->proc_num, "0")) {
   return (1);
  }
 }
 return (0);
}
