
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ,char*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

void FUNC_12(void)
{
 git_remote *VAR_2;
 git_strarray VAR_3;

 size_t VAR_4 = FUNC_4(VAR_1, "remote\\.");

 FUNC_3(FUNC_5(&VAR_2, VAR_0));
 FUNC_2(FUNC_8(VAR_2), ((void*)0));
 FUNC_2(FUNC_10(VAR_2), VAR_0);
 FUNC_1(FUNC_9(VAR_2), ((void*)0));

 FUNC_3(FUNC_7(&VAR_3, VAR_2));
 FUNC_0(0, VAR_3.count);
 FUNC_0(VAR_4, FUNC_4(VAR_1, "remote\\."));

 FUNC_11(&VAR_3);
 FUNC_6(VAR_2);
}
