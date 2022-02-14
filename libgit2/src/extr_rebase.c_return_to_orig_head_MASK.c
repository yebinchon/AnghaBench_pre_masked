
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_7__ {int orig_head_name; int repo; int orig_head_id; int onto_id; } ;
typedef TYPE_1__ git_rebase ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int **,int ,int ,int ,int,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int ) ;
 int FUNC_8 (int **,int ,int ,int ,int,int ) ;
 int FUNC_9 (int **,int ) ;

__attribute__((used)) static int FUNC_10(git_rebase *VAR_4)
{
 git_reference *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 git_commit *VAR_8 = ((void*)0);
 git_buf VAR_9 = VAR_0, VAR_10 = VAR_0;
 char VAR_11[VAR_3];
 int VAR_12 = 0;

 FUNC_4(VAR_11, &VAR_4->onto_id);

 if ((VAR_12 = FUNC_1(&VAR_9,
   "rebase finished: %s onto %.*s",
   VAR_4->orig_head_name, VAR_3, VAR_11)) == 0 &&
  (VAR_12 = FUNC_1(&VAR_10,
   "rebase finished: returning to %s",
   VAR_4->orig_head_name)) == 0 &&
  (VAR_12 = FUNC_9(&VAR_5, VAR_4->repo)) == 0 &&
  (VAR_12 = FUNC_7((git_object **)&VAR_8,
   VAR_5, VAR_2)) == 0 &&
  (VAR_12 = FUNC_5(&VAR_6,
   VAR_4->repo, VAR_4->orig_head_name,
   FUNC_3(VAR_8), 1,
   &VAR_4->orig_head_id, VAR_9.ptr)) == 0)
  VAR_12 = FUNC_8(&VAR_7,
   VAR_4->repo, VAR_1, VAR_4->orig_head_name, 1,
   VAR_10.ptr);

 FUNC_0(&VAR_10);
 FUNC_0(&VAR_9);
 FUNC_2(VAR_8);
 FUNC_6(VAR_7);
 FUNC_6(VAR_6);
 FUNC_6(VAR_5);

 return VAR_12;
}
