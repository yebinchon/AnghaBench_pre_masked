
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* procs; struct TYPE_5__* next; } ;
typedef TYPE_1__ version_list ;
struct TYPE_6__ {int proc_name; struct TYPE_6__* next; } ;
typedef TYPE_2__ proc_list ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(proc_list *VAR_0, version_list *VAR_1)
{
 version_list *VAR_2;
 proc_list *VAR_3;

 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  for (VAR_3 = VAR_2->procs; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
   if (VAR_3 == VAR_0) {
    return (0);
   } else if (FUNC_1(VAR_3->proc_name, VAR_0->proc_name)) {
    return (1);
   }
  }
 }
 FUNC_0();

}
