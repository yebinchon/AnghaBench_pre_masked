
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_config ;
struct TYPE_2__ {int msg; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int **,int ,char*,int *,int,char*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,char*) ;
 int FUNC_12 (int **,int ) ;

void FUNC_13(void)
{
 git_config *VAR_1;
 git_reference *VAR_2;
 git_reflog *VAR_3;
 git_oid VAR_4;

 FUNC_2(FUNC_12(&VAR_1, VAR_0));
 FUNC_2(FUNC_4(VAR_1, "core.logallrefupdates", "always"));
 FUNC_3(VAR_1);

 FUNC_5(&VAR_4, "be3563ae3f795b2b4353bcce3a527ad0a4f7f644");
 FUNC_2(FUNC_6(&VAR_2, VAR_0, "refs/bork", &VAR_4, 1, "message"));

 FUNC_2(FUNC_11(&VAR_3, VAR_0, "refs/bork"));
 FUNC_0(1, FUNC_9(VAR_3));
 FUNC_1("message", FUNC_8(VAR_3, 0)->msg);

 FUNC_10(VAR_3);
 FUNC_7(VAR_2);
}
