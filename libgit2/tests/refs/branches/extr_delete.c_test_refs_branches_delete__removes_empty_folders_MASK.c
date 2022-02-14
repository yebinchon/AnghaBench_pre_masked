
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_reflog ;
typedef int git_reference ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_7__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char,char const*,int ,char*) ;
 int FUNC_7 (int *,char const*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*,int *,char*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int ,char*) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,char*,char*) ;
 int VAR_2 ;

void FUNC_20(void)
{
 const char *VAR_3 = FUNC_17(VAR_2);
 git_oid VAR_4;
 git_commit *VAR_5;
 git_reference *VAR_6;

 git_reflog *VAR_7;
 git_oid VAR_8 = {{0}};
 git_signature *VAR_9;

 git_buf VAR_10 = VAR_0;
 git_buf VAR_11 = VAR_0;


 FUNC_1(FUNC_10(&VAR_4, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750"));
 FUNC_1(FUNC_9(&VAR_5, VAR_2, &VAR_4));
 FUNC_1(FUNC_2(&VAR_6, VAR_2, "some/deep/ref", VAR_5, 0));
 FUNC_8(VAR_5);


 FUNC_1(FUNC_19(&VAR_9, "Me", "user@example.com"));
 FUNC_1(FUNC_16(&VAR_7, VAR_2, "refs/heads/some/deep/ref"));
 FUNC_1(FUNC_13(VAR_7, &VAR_8, VAR_9, "message"));
 FUNC_0(FUNC_14(VAR_7) > 0);
 FUNC_18(VAR_9);
 FUNC_15(VAR_7);

 FUNC_1(FUNC_7(&VAR_10, VAR_3, "refs/heads/some/deep"));
 FUNC_1(FUNC_6(&VAR_11, '/', VAR_3, VAR_1, "refs/heads/some/deep"));

 FUNC_0(FUNC_11(FUNC_4(&VAR_10)) == 1);
 FUNC_0(FUNC_11(FUNC_4(&VAR_11)) == 1);

 FUNC_1(FUNC_3(VAR_6));

 FUNC_0(FUNC_11(FUNC_4(&VAR_10)) == 0);
 FUNC_0(FUNC_11(FUNC_4(&VAR_11)) == 0);

 FUNC_12(VAR_6);
 FUNC_5(&VAR_10);
 FUNC_5(&VAR_11);
}
