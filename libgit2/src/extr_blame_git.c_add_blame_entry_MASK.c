
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lno; struct TYPE_5__* prev; struct TYPE_5__* next; int suspect; } ;
typedef TYPE_1__ git_blame__entry ;
struct TYPE_6__ {TYPE_1__* ent; } ;
typedef TYPE_2__ git_blame ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(git_blame *VAR_0, git_blame__entry *VAR_1)
{
 git_blame__entry *VAR_2, *VAR_3 = ((void*)0);

 FUNC_0(VAR_1->suspect);

 for (VAR_2 = VAR_0->ent; VAR_2 && VAR_2->lno < VAR_1->lno; VAR_2 = VAR_2->next)
  VAR_3 = VAR_2;


 VAR_1->prev = VAR_3;
 if (VAR_3) {
  VAR_1->next = VAR_3->next;
  VAR_3->next = VAR_1;
 } else {
  VAR_1->next = VAR_0->ent;
  VAR_0->ent = VAR_1;
 }
 if (VAR_1->next)
  VAR_1->next->prev = VAR_1;
}
