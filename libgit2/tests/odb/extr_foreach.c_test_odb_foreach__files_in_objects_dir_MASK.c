
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_odb ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int **,char*) ;
 int FUNC_12 (int *) ;

void FUNC_13(void)
{
 git_repository *VAR_2;
 git_odb *VAR_3;
 git_buf VAR_4 = VAR_0;
 int VAR_5 = 0;

 FUNC_2("testrepo.git");
 FUNC_4(FUNC_11(&VAR_2, "testrepo.git"));

 FUNC_4(FUNC_6(&VAR_4, "%s/objects/somefile", FUNC_12(VAR_2)));
 FUNC_3(VAR_4.ptr, "");
 FUNC_5(&VAR_4);

 FUNC_4(FUNC_10(&VAR_3, VAR_2));
 FUNC_4(FUNC_7(VAR_3, VAR_1, &VAR_5));
 FUNC_0(60 + 1640, VAR_5);

 FUNC_8(VAR_3);
 FUNC_9(VAR_2);
 FUNC_1("testrepo.git");
}
