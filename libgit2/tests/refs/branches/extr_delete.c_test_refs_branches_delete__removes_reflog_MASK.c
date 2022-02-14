
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_reflog ;
typedef int git_reference ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,TYPE_2__*,int *,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*,char*) ;
 int VAR_1 ;

void FUNC_13(void)
{
 git_reference *VAR_2;
 git_reflog *VAR_3;
 git_oid VAR_4 = {{0}};
 git_signature *VAR_5;


 FUNC_2(FUNC_12(&VAR_5, "Me", "user@example.com"));
 FUNC_2(FUNC_10(&VAR_3, VAR_1, "refs/heads/track-local"));
 FUNC_2(FUNC_7(VAR_3, &VAR_4, VAR_5, "message"));
 FUNC_0(FUNC_8(VAR_3) > 0);
 FUNC_11(VAR_5);
 FUNC_9(VAR_3);

 FUNC_2(FUNC_4(&VAR_2, VAR_1, "track-local", VAR_0));
 FUNC_2(FUNC_3(VAR_2));
 FUNC_5(VAR_2);

 FUNC_1(0, FUNC_6(VAR_1, "refs/heads/track-local"));


 FUNC_2(FUNC_10(&VAR_3, VAR_1, "refs/heads/track-local"));
 FUNC_1(0, FUNC_8(VAR_3));
 FUNC_9(VAR_3);
}
