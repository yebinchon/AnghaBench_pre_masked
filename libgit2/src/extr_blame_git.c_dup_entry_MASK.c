
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ score; struct TYPE_6__* next; struct TYPE_6__* prev; int suspect; } ;
typedef TYPE_1__ git_blame__entry ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(git_blame__entry *VAR_0, git_blame__entry *VAR_1)
{
 git_blame__entry *VAR_2, *VAR_3;

 VAR_2 = VAR_0->prev;
 VAR_3 = VAR_0->next;
 FUNC_2(VAR_1->suspect);
 FUNC_1(VAR_0->suspect);
 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_1));
 VAR_0->prev = VAR_2;
 VAR_0->next = VAR_3;
 VAR_0->score = 0;
}
