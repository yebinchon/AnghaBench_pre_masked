
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_8__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int *,char const*) ;
 int FUNC_8 (TYPE_1__**,int *,char const*,char const*,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

void FUNC_14(void)
{
 git_reference *VAR_4, *VAR_5;
 git_repository *VAR_6;
 git_oid VAR_7;

 const char *VAR_8 = "ANOTHER_HEAD_TRACKER";
 const char *VAR_9 = "ARBITRARY DATA";

 FUNC_5(&VAR_7, VAR_2);




 FUNC_2(FUNC_8(&VAR_4, VAR_3, VAR_8, VAR_9, 0, ((void*)0)));

 FUNC_4(VAR_0, 0);


 FUNC_3(FUNC_8(&VAR_4, VAR_3, VAR_8, VAR_9, 0, ((void*)0)));


 FUNC_3(FUNC_7(&VAR_5, VAR_3, VAR_8));
 FUNC_0(FUNC_10(VAR_5) & VAR_1);
 FUNC_0(FUNC_13(VAR_5) == 0);
 FUNC_1(VAR_5->name, VAR_8);
 FUNC_6(VAR_5);


 FUNC_1(FUNC_9(VAR_4), VAR_9);


 FUNC_3(FUNC_12(&VAR_6, "testrepo"));


 FUNC_3(FUNC_7(&VAR_5, VAR_6, VAR_8));
 FUNC_0(FUNC_10(VAR_5) & VAR_1);
 FUNC_0(FUNC_13(VAR_5) == 0);
 FUNC_1(VAR_5->name, VAR_8);


 FUNC_1(FUNC_9(VAR_4), VAR_9);

 FUNC_11(VAR_6);
 FUNC_6(VAR_4);
 FUNC_6(VAR_5);
}
