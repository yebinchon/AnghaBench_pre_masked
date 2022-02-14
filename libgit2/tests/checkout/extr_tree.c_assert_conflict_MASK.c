
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_buf ;
struct TYPE_3__ {int checkout_strategy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int * VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int **,int ,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int ,char*,int ,int,int *) ;
 int FUNC_17 (int **,int ) ;
 int FUNC_18 (int **,int ,char const*) ;

void FUNC_19(
 const char *VAR_8,
 const char *VAR_9,
 const char *VAR_10,
 const char *VAR_11)
{
 git_index *VAR_12;
 git_object *VAR_13;
 git_reference *VAR_14, *VAR_15;
 git_buf VAR_16 = VAR_0;

 FUNC_2(FUNC_17(&VAR_12, VAR_7));


 FUNC_2(FUNC_18(&VAR_5, VAR_7, VAR_10));
 FUNC_2(FUNC_3(&VAR_14, VAR_7,
  "potential_conflict", (git_commit *)VAR_5, 0));


 FUNC_2(FUNC_16(
  &VAR_15, VAR_7, "HEAD", FUNC_15(VAR_14), 1, ((void*)0)));
 FUNC_14(VAR_15);
 FUNC_14(VAR_14);


 VAR_6.checkout_strategy = VAR_1;
 FUNC_2(FUNC_7(VAR_7, VAR_5, &VAR_6));




 FUNC_2(FUNC_13(&VAR_13, VAR_5, VAR_4));
 FUNC_2(FUNC_10(VAR_12, (git_tree *)VAR_13));
 FUNC_2(FUNC_11(VAR_12));
 FUNC_12(VAR_13);
 FUNC_12(VAR_5);
 VAR_5 = ((void*)0);


 FUNC_2(FUNC_6(&VAR_16, "./testrepo", VAR_8));
 FUNC_1(FUNC_4(&VAR_16), VAR_9);
 FUNC_5(&VAR_16);


 FUNC_2(FUNC_18(&VAR_5, VAR_7, VAR_11));

 VAR_6.checkout_strategy = VAR_2;
 FUNC_0(
  VAR_3, FUNC_7(VAR_7, VAR_5, &VAR_6));


 FUNC_2(FUNC_8(VAR_12, VAR_8));
 FUNC_2(FUNC_11(VAR_12));
 FUNC_9(VAR_12);

 FUNC_0(
  VAR_3, FUNC_7(VAR_7, VAR_5, &VAR_6));
}
