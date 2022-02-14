
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int hide_cb_payload; scalar_t__ (* hide_cb ) (int *,int ) ;} ;
typedef TYPE_1__ git_revwalk ;
struct TYPE_11__ {int time; int oid; scalar_t__ uninteresting; } ;
typedef TYPE_2__ git_commit_list_node ;
typedef int git_commit_list ;
struct TYPE_12__ {int * next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int **) ;
 int FUNC_1 (int **) ;
 TYPE_6__* FUNC_2 (TYPE_2__*,int **) ;
 TYPE_2__* FUNC_3 (int **) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(git_commit_list **VAR_2, git_revwalk *VAR_3, git_commit_list *VAR_4)
{
 int VAR_5, VAR_6 = VAR_1;
 int64_t VAR_7 = VAR_0;
 git_commit_list *VAR_8 = VAR_4;
 git_commit_list *VAR_9 = ((void*)0);
 git_commit_list **VAR_10 = &VAR_9;

 while (VAR_8) {
  git_commit_list_node *VAR_11 = FUNC_3(&VAR_8);

  if ((VAR_5 = FUNC_0(VAR_3, VAR_11, &VAR_8)) < 0)
   return VAR_5;

  if (VAR_11->uninteresting) {
   FUNC_4(VAR_11);

   VAR_6 = FUNC_5(VAR_8, VAR_7, VAR_6);
   if (VAR_6)
    continue;

   break;
  }

  if (VAR_3->hide_cb && VAR_3->hide_cb(&VAR_11->oid, VAR_3->hide_cb_payload))
   continue;

  VAR_7 = VAR_11->time;
  VAR_10 = &FUNC_2(VAR_11, VAR_10)->next;
 }

 FUNC_1(&VAR_8);
 *VAR_2 = VAR_9;
 return 0;
}
