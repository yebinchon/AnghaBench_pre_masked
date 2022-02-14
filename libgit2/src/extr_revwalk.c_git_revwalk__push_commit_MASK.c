
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ insert_by_date; scalar_t__ uninteresting; scalar_t__ from_glob; } ;
typedef TYPE_1__ git_revwalk__push_options ;
struct TYPE_11__ {int limited; int did_hide; int did_push; int * user_input; int repo; } ;
typedef TYPE_2__ git_revwalk ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_12__ {scalar_t__ uninteresting; } ;
typedef TYPE_3__ git_commit_list_node ;
typedef int git_commit_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (TYPE_3__*,int **) ;
 int * FUNC_1 (TYPE_3__*,int **) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int const*,int ) ;
 int FUNC_7 (int **,int *,int ) ;
 int FUNC_8 (int *,int ) ;
 TYPE_3__* FUNC_9 (TYPE_2__*,int *) ;

int FUNC_10(git_revwalk *VAR_6, const git_oid *VAR_7, const git_revwalk__push_options *VAR_8)
{
 git_oid VAR_9;
 int VAR_10;
 git_object *VAR_11, *VAR_12;
 git_commit_list_node *VAR_13;
 git_commit_list *VAR_14;

 if ((VAR_10 = FUNC_6(&VAR_12, VAR_6->repo, VAR_7, VAR_4)) < 0)
  return VAR_10;

 VAR_10 = FUNC_7(&VAR_11, VAR_12, VAR_5);
 FUNC_4(VAR_12);

 if (VAR_10 == VAR_1 || VAR_10 == VAR_0 || VAR_10 == VAR_2) {

  if (VAR_8->from_glob)
   return 0;

  FUNC_2(VAR_3, "object is not a committish");
  return -1;
 }
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_8(&VAR_9, FUNC_5(VAR_11));
 FUNC_4(VAR_11);

 VAR_13 = FUNC_9(VAR_6, &VAR_9);
 if (VAR_13 == ((void*)0))
  return -1;


 if (VAR_13->uninteresting)
  return 0;

 if (VAR_8->uninteresting) {
  VAR_6->limited = 1;
  VAR_6->did_hide = 1;
 } else {
  VAR_6->did_push = 1;
 }

 VAR_13->uninteresting = VAR_8->uninteresting;
 VAR_14 = VAR_6->user_input;
 if ((VAR_8->insert_by_date &&
     FUNC_1(VAR_13, &VAR_14) == ((void*)0)) ||
     FUNC_0(VAR_13, &VAR_14) == ((void*)0)) {
  FUNC_3();
  return -1;
 }

 VAR_6->user_input = VAR_14;

 return 0;
}
