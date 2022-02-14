
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_pqueue ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ git_commit_list_node ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(git_pqueue *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++) {
  git_commit_list_node *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_3->flags & VAR_0) == 0)
   return 1;
 }

 return 0;
}
