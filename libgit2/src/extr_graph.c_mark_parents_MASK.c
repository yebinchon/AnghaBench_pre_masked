
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_revwalk ;
typedef int git_pqueue ;
struct TYPE_8__ {unsigned int flags; unsigned int out_degree; struct TYPE_8__** parents; } ;
typedef TYPE_1__ git_commit_list_node ;
typedef int git_commit_list ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int **) ;
 int * FUNC_1 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(git_revwalk *VAR_5, git_commit_list_node *VAR_6,
 git_commit_list_node *VAR_7)
{
 unsigned int VAR_8;
 git_commit_list *VAR_9 = ((void*)0);
 git_pqueue VAR_10;


 if (VAR_6 == VAR_7) {
  VAR_6->flags |= VAR_0 | VAR_1 | VAR_2;
  return 0;
 }

 if (FUNC_4(&VAR_10, 0, 2, VAR_4) < 0)
  return -1;

 if (FUNC_2(VAR_5, VAR_6) < 0)
  goto on_error;
 VAR_6->flags |= VAR_0;
 if (FUNC_5(&VAR_10, VAR_6) < 0)
  goto on_error;

 if (FUNC_2(VAR_5, VAR_7) < 0)
  goto on_error;
 VAR_7->flags |= VAR_1;
 if (FUNC_5(&VAR_10, VAR_7) < 0)
  goto on_error;


 while (FUNC_7(&VAR_10, VAR_9)) {
  git_commit_list_node *VAR_11 = FUNC_6(&VAR_10);
  unsigned int VAR_12;

  if (VAR_11 == ((void*)0))
   break;

  VAR_12 = VAR_11->flags & (VAR_0 | VAR_1 | VAR_3);
  if (VAR_12 == (VAR_0 | VAR_1)) {
   if (!(VAR_11->flags & VAR_2))
    VAR_11->flags |= VAR_2;

   VAR_12 |= VAR_3;
  }

  for (VAR_8 = 0; VAR_8 < VAR_11->out_degree; VAR_8++) {
   git_commit_list_node *VAR_13 = VAR_11->parents[VAR_8];
   if ((VAR_13->flags & VAR_12) == VAR_12)
    continue;

   if (FUNC_2(VAR_5, VAR_13) < 0)
    goto on_error;

   VAR_13->flags |= VAR_12;
   if (FUNC_5(&VAR_10, VAR_13) < 0)
    goto on_error;
  }


  if (VAR_11->out_degree == 0) {
   if (FUNC_1(VAR_11, &VAR_9) == ((void*)0))
    goto on_error;
  }
 }

 FUNC_0(&VAR_9);
 FUNC_3(&VAR_10);
 return 0;

on_error:
 FUNC_0(&VAR_9);
 FUNC_3(&VAR_10);
 return -1;
}
