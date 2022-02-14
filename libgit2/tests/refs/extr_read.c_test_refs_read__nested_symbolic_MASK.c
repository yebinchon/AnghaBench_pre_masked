
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__**,int ,int ) ;
 int FUNC_11 (TYPE_1__**,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;

void FUNC_15(void)
{

 git_reference *VAR_7, *VAR_8;
 git_object *VAR_9;
 git_oid VAR_10;

 FUNC_3(FUNC_10(&VAR_7, VAR_5, VAR_6));
 FUNC_0(FUNC_13(VAR_7) & VAR_3);
 FUNC_0(FUNC_14(VAR_7) == 0);
 FUNC_2(VAR_7->name, VAR_6);

 FUNC_3(FUNC_11(&VAR_8, VAR_7));
 FUNC_0(FUNC_13(VAR_8) == VAR_2);

 FUNC_3(FUNC_6(&VAR_9, VAR_5, FUNC_12(VAR_8), VAR_0));
 FUNC_0(VAR_9 != ((void*)0));
 FUNC_0(FUNC_7(VAR_9) == VAR_1);

 FUNC_8(&VAR_10, VAR_4);
 FUNC_1(&VAR_10, FUNC_5(VAR_9));

 FUNC_4(VAR_9);

 FUNC_9(VAR_7);
 FUNC_9(VAR_8);
}
