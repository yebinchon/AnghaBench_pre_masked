
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
 git_repository *VAR_2;
 git_strarray VAR_3;
 git_remote *VAR_4;

 FUNC_1(FUNC_6(&VAR_2, FUNC_7(VAR_1)));

 FUNC_1(FUNC_4(&VAR_3, VAR_1));
 FUNC_0(VAR_3.count, 1);
 FUNC_8(&VAR_3);

 FUNC_1(FUNC_2(&VAR_4, VAR_1, "valid-name", VAR_0));

 FUNC_1(FUNC_4(&VAR_3, VAR_1));
 FUNC_0(VAR_3.count, 2);
 FUNC_8(&VAR_3);

 FUNC_1(FUNC_4(&VAR_3, VAR_2));
 FUNC_0(VAR_3.count, 2);
 FUNC_8(&VAR_3);

 FUNC_5(VAR_2);
 FUNC_3(VAR_4);
}
