
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_status_list ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
struct TYPE_5__ {int * ref_name; } ;
typedef TYPE_1__ git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 char* FUNC_13 (int const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_20(
 git_annotated_commit *VAR_2,
 git_annotated_commit *VAR_3)
{
 git_reference *VAR_4, *VAR_5 = ((void*)0);
 git_status_list *VAR_6;
 git_reflog *VAR_7;
 const git_reflog_entry *VAR_8;

 FUNC_1(VAR_0, FUNC_16(VAR_1));


 FUNC_4(FUNC_7(&VAR_4, VAR_1, "HEAD"));

 if (VAR_2->ref_name == ((void*)0))
  FUNC_2(FUNC_5(VAR_2), FUNC_9(VAR_4));
 else {
  FUNC_3("refs/heads/beef", FUNC_8(VAR_4));
  FUNC_4(FUNC_7(&VAR_5, VAR_1, FUNC_8(VAR_4)));
  FUNC_2(FUNC_5(VAR_2), FUNC_9(VAR_5));
 }

 FUNC_19(&VAR_6, VAR_1, ((void*)0));
 FUNC_1(0, FUNC_17(VAR_6));
 FUNC_18(VAR_6);


 FUNC_4(FUNC_15(&VAR_7, VAR_1, "HEAD"));

 FUNC_0(VAR_8 = FUNC_10(VAR_7, 0));
 FUNC_2(FUNC_5(VAR_3), FUNC_12(VAR_8));
 FUNC_2(FUNC_5(VAR_2), FUNC_11(VAR_8));
 FUNC_3("rebase: aborting", FUNC_13(VAR_8));

 FUNC_14(VAR_7);
 FUNC_6(VAR_4);
 FUNC_6(VAR_5);
}
