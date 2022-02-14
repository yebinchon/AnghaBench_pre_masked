
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_config ;
struct TYPE_3__ {int checkout_strategy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int *,char*) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int **,int ) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_9(void)
{
 git_oid VAR_6;
 git_config *VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_1("testrepo");

 FUNC_0(FUNC_8(&VAR_7, VAR_5));
 FUNC_5(&VAR_8, VAR_7, "core.ignorecase");
 FUNC_4(VAR_7);

 if (!VAR_8)
  FUNC_2();

 FUNC_0(FUNC_7(&VAR_6, VAR_5, "refs/heads/dir"));
 FUNC_0(FUNC_6(&VAR_4, VAR_5, &VAR_6, VAR_2));

 FUNC_3(&VAR_3, VAR_1);
 VAR_3.checkout_strategy = VAR_0;
}
