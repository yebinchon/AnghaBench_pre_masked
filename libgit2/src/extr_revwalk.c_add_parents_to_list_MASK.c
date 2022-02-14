
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ first_parent; int hide_cb_payload; scalar_t__ (* hide_cb ) (int *,int ) ;} ;
typedef TYPE_1__ git_revwalk ;
struct TYPE_10__ {int added; int uninteresting; unsigned short out_degree; int seen; int oid; struct TYPE_10__** parents; } ;
typedef TYPE_2__ git_commit_list_node ;
typedef int git_commit_list ;


 int FUNC_0 (TYPE_2__*,int **) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(git_revwalk *VAR_0, git_commit_list_node *VAR_1, git_commit_list **VAR_2)
{
 unsigned short VAR_3;
 int VAR_4;

 if (VAR_1->added)
  return 0;

 VAR_1->added = 1;
 if (VAR_1->uninteresting) {
  for (VAR_3 = 0; VAR_3 < VAR_1->out_degree; VAR_3++) {
   git_commit_list_node *VAR_5 = VAR_1->parents[VAR_3];
   VAR_5->uninteresting = 1;


   if ((VAR_4 = FUNC_1(VAR_0, VAR_5)) < 0)
    return VAR_4;

   if (VAR_5->parents)
    FUNC_2(VAR_5);

   VAR_5->seen = 1;
   FUNC_0(VAR_5, VAR_2);
  }

  return 0;
 }






 for (VAR_3 = 0; VAR_3 < VAR_1->out_degree; VAR_3++) {
  git_commit_list_node *VAR_6 = VAR_1->parents[VAR_3];

  if ((VAR_4 = FUNC_1(VAR_0, VAR_6)) < 0)
   return VAR_4;

  if (VAR_0->hide_cb && VAR_0->hide_cb(&VAR_6->oid, VAR_0->hide_cb_payload))
   continue;

  if (!VAR_6->seen) {
   VAR_6->seen = 1;
   FUNC_0(VAR_6, VAR_2);
  }

  if (VAR_0->first_parent)
   break;
 }
 return 0;
}
