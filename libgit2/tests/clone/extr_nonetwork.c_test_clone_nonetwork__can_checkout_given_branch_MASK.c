
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* checkout_branch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,char*,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 VAR_0.checkout_branch = "test";
 FUNC_4(FUNC_5(&VAR_2, FUNC_3("testrepo.git"), "./foo", &VAR_0));

 FUNC_1(0, FUNC_9(VAR_2));

 FUNC_4(FUNC_8(&VAR_1, VAR_2));
 FUNC_2(FUNC_7(VAR_1), "refs/heads/test");

 FUNC_0(FUNC_6("foo/readme.txt"));
}
