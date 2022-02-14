
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int * ids; int count; int member_1; int * member_0; } ;
typedef TYPE_1__ git_oidarray ;
typedef int git_oid ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;

void FUNC_9(void)
{
 git_repository *VAR_0;
 git_oid VAR_1, VAR_2, VAR_3;
 git_oidarray VAR_4 = {((void*)0), 0};

 FUNC_3(FUNC_8(&VAR_0, FUNC_2("redundant.git")));

 FUNC_3(FUNC_5(&VAR_1, "d89137c93ba1ee749214ff4ce52ae9137bc833f9"));
 FUNC_3(FUNC_5(&VAR_2, "91f4b95df4a59504a9813ba66912562931d990e3"));
 FUNC_3(FUNC_5(&VAR_3, "6cb1f2352d974e1c5a776093017e8772416ac97a"));

 FUNC_3(FUNC_4(&VAR_4, VAR_0, &VAR_1, &VAR_2));
 FUNC_0(1, VAR_4.count);
 FUNC_1(&VAR_3, &VAR_4.ids[0]);

 FUNC_6(&VAR_4);
 FUNC_7(VAR_0);
}
