
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_4__ {int oldest_commit; } ;
typedef TYPE_1__ git_blame_options ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int,int,char*,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,char*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int **,int ,char*) ;

void FUNC_11(void)
{
 git_blame_options VAR_3 = VAR_0;

 FUNC_3(FUNC_9(&VAR_2, FUNC_2("testrepo.git")));

 {
  git_object *VAR_4;
  FUNC_3(FUNC_10(&VAR_4, VAR_2, "be3563a"));
  FUNC_8(&VAR_3.oldest_commit, FUNC_7(VAR_4));
  FUNC_6(VAR_4);
 }

 FUNC_3(FUNC_4(&VAR_1, VAR_2, "branch_file.txt", &VAR_3));

 FUNC_1(2, FUNC_5(VAR_1));
 FUNC_0(VAR_2, VAR_1, 0, 1, 1, 1, "be3563a", "branch_file.txt");
 FUNC_0(VAR_2, VAR_1, 1, 2, 1, 0, "a65fedf", "branch_file.txt");
}
