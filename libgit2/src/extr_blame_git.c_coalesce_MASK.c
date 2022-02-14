
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ guilty; scalar_t__ s_lno; scalar_t__ num_lines; scalar_t__ score; int suspect; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ git_blame__entry ;
struct TYPE_6__ {TYPE_1__* ent; } ;
typedef TYPE_2__ git_blame ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(git_blame *VAR_0)
{
 git_blame__entry *VAR_1, *VAR_2;

 for (VAR_1=VAR_0->ent; VAR_1 && (VAR_2 = VAR_1->next); VAR_1 = VAR_2) {
  if (FUNC_2(VAR_1->suspect, VAR_2->suspect) &&
      VAR_1->guilty == VAR_2->guilty &&
      VAR_1->s_lno + VAR_1->num_lines == VAR_2->s_lno)
  {
   VAR_1->num_lines += VAR_2->num_lines;
   VAR_1->next = VAR_2->next;
   if (VAR_1->next)
    VAR_1->next->prev = VAR_1;
   FUNC_1(VAR_2->suspect);
   FUNC_0(VAR_2);
   VAR_1->score = 0;
   VAR_2 = VAR_1;
  }
 }
}
