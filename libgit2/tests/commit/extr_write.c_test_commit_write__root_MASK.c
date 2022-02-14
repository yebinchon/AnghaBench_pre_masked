
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_7__ {int name; int email; } ;
typedef TYPE_1__ git_signature ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_8__ {int name; int email; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char*,TYPE_1__*,TYPE_1__*,int *,int ,int *,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,char const*) ;
 int FUNC_14 (int *,int ,char*,char const*,int,int *) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int * FUNC_18 (int *,int ) ;
 TYPE_4__* FUNC_19 (int const*) ;
 int FUNC_20 (int const*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int **,int ,char const*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__**,int ,int ,int,int) ;
 int FUNC_26 (int **,int ,int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_27(void)
{
 git_oid VAR_11, VAR_12;
 const git_oid *VAR_13;
 git_signature *VAR_14, *VAR_15;
 const char *VAR_16 = "refs/heads/root-commit-branch";
 git_tree *VAR_17;
 git_reflog *VAR_18;
 const git_reflog_entry *VAR_19;

 FUNC_11(&VAR_11, VAR_10);
 FUNC_4(FUNC_26(&VAR_17, VAR_5, &VAR_11));


 FUNC_4(FUNC_25(&VAR_15, VAR_4, VAR_3, 123456789, 60));
 FUNC_4(FUNC_25(&VAR_14, VAR_4, VAR_3, 987654321, 90));


 FUNC_4(FUNC_13(&VAR_6, VAR_5, "HEAD"));
 FUNC_0(FUNC_17(VAR_6) == VAR_0);
 VAR_7 = FUNC_5(FUNC_15(VAR_6));
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_12(VAR_6);

 FUNC_4(FUNC_14(&VAR_6, VAR_5, "HEAD", VAR_16, 1, ((void*)0)));

 FUNC_4(FUNC_6(
  &VAR_12,
  VAR_5,
  "HEAD",
  VAR_14,
  VAR_15,
  ((void*)0),
  VAR_8,
  VAR_17,
  0));

 FUNC_10((git_object *)VAR_17);
 FUNC_24(VAR_14);






 FUNC_4(FUNC_7(&VAR_2, VAR_5, &VAR_12));
 FUNC_0(FUNC_9(VAR_2) == 0);
 FUNC_4(FUNC_13(&VAR_1, VAR_5, VAR_16));
 VAR_13 = FUNC_16(VAR_1);
 FUNC_2(VAR_13, &VAR_12);
 FUNC_3(VAR_8, FUNC_8(VAR_2));

 FUNC_4(FUNC_23(&VAR_18, VAR_5, VAR_16));
 FUNC_1(1, FUNC_21(VAR_18));
 VAR_19 = FUNC_18(VAR_18, 0);
 FUNC_3(VAR_15->email, FUNC_19(VAR_19)->email);
 FUNC_3(VAR_15->name, FUNC_19(VAR_19)->name);
 FUNC_3(VAR_9, FUNC_20(VAR_19));

 FUNC_24(VAR_15);
 FUNC_22(VAR_18);
}
