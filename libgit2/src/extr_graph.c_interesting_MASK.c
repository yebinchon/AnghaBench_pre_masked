
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_pqueue ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ git_commit_list_node ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* item; } ;
typedef TYPE_3__ git_commit_list ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(git_pqueue *VAR_1, git_commit_list *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
  git_commit_list_node *VAR_4 = FUNC_0(VAR_1, VAR_3);
  if ((VAR_4->flags & VAR_0) == 0)
   return 1;
 }

 while(VAR_2) {
  if ((VAR_2->item->flags & VAR_0) == 0)
   return 1;
  VAR_2 = VAR_2->next;
 }

 return 0;
}
