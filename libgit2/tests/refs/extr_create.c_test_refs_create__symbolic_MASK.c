
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_10__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,int *,char const*) ;
 int FUNC_7 (TYPE_1__**,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__**,int *,char const*,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

void FUNC_14(void)
{

 git_reference *VAR_5, *VAR_6, *VAR_7;
 git_repository *VAR_8;
 git_oid VAR_9;

 const char *VAR_10 = "ANOTHER_HEAD_TRACKER";

 FUNC_4(&VAR_9, VAR_3);


 FUNC_3(FUNC_8(&VAR_5, VAR_4, VAR_10, VAR_2, 0, ((void*)0)));


 FUNC_3(FUNC_6(&VAR_6, VAR_4, VAR_10));
 FUNC_0(FUNC_10(VAR_6) & VAR_1);
 FUNC_0(FUNC_13(VAR_6) == 0);
 FUNC_2(VAR_6->name, VAR_10);


 FUNC_3(FUNC_7(&VAR_7, VAR_6));
 FUNC_0(FUNC_10(VAR_7) == VAR_0);


 FUNC_1(&VAR_9, FUNC_9(VAR_7));
 FUNC_5(VAR_6);
 FUNC_5(VAR_7);


 FUNC_3(FUNC_12(&VAR_8, "testrepo"));

 FUNC_3(FUNC_6(&VAR_6, VAR_8, VAR_10));
 FUNC_3(FUNC_7(&VAR_7, VAR_6));
 FUNC_1(&VAR_9, FUNC_9(VAR_7));

 FUNC_11(VAR_8);

 FUNC_5(VAR_5);
 FUNC_5(VAR_6);
 FUNC_5(VAR_7);
}
