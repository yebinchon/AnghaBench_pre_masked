
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void FUNC_5(void)
{
 git_repository *VAR_0;
 git_strarray VAR_1;

 VAR_0 = FUNC_2("testrepo2");
 FUNC_1(FUNC_4(&VAR_1, VAR_0));
 FUNC_0(VAR_1.count, 0);

 FUNC_3(VAR_0);
}
