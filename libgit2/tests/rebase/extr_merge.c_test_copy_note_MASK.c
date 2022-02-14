
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase_options ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_note ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*,int ,int ,int ,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,char*,int *) ;
 int FUNC_14 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int ,int *,int *,int *,int const*) ;
 int FUNC_18 (int **,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int **,int ,char*) ;
 int FUNC_21 (int **,int *,int ) ;
 int FUNC_22 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_23(
 const git_rebase_options *VAR_5,
 bool VAR_6)
{
 git_rebase *VAR_7;
 git_reference *VAR_8, *VAR_9;
 git_annotated_commit *VAR_10, *VAR_11;
 git_commit *VAR_12;
 git_rebase_operation *VAR_13;
 git_oid VAR_14, VAR_15;
 git_note *VAR_16 = ((void*)0);
 int VAR_17;

 FUNC_3(FUNC_20(&VAR_8, VAR_3, "refs/heads/gravy"));
 FUNC_3(FUNC_20(&VAR_9, VAR_3, "refs/heads/veal"));

 FUNC_3(FUNC_5(&VAR_10, VAR_3, VAR_8));
 FUNC_3(FUNC_5(&VAR_11, VAR_3, VAR_9));

 FUNC_3(FUNC_21((git_object **)&VAR_12,
  VAR_8, VAR_1));


 FUNC_3(FUNC_10(&VAR_14, VAR_3, "refs/notes/test",
  FUNC_6(VAR_12), FUNC_7(VAR_12),
  FUNC_9(VAR_12),
  "This is a commit note.", 0));

 FUNC_3(FUNC_17(&VAR_7, VAR_3, VAR_10, VAR_11, ((void*)0), VAR_5));

 FUNC_3(FUNC_18(&VAR_13, VAR_7));
 FUNC_3(FUNC_14(&VAR_15, VAR_7, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));

 FUNC_3(FUNC_15(VAR_7, VAR_4));

 FUNC_0(VAR_2, FUNC_22(VAR_3));

 if (VAR_6) {
  FUNC_3(FUNC_13(&VAR_16, VAR_3, "refs/notes/test", &VAR_15));
  FUNC_1("This is a commit note.", FUNC_12(VAR_16));
 } else {
  FUNC_2(VAR_17 =
   FUNC_13(&VAR_16, VAR_3, "refs/notes/test", &VAR_15));
  FUNC_0(VAR_0, VAR_17);
 }

 FUNC_11(VAR_16);
 FUNC_8(VAR_12);
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_19(VAR_8);
 FUNC_19(VAR_9);
 FUNC_16(VAR_7);
}
