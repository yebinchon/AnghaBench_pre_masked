
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* write ) (TYPE_1__*,int ,int ) ;} ;
typedef TYPE_1__ git_writestream ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__**,int ,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;

void FUNC_10(void)
{
 git_oid VAR_5, VAR_6;
 git_object *VAR_7;
 git_writestream *VAR_8;
 int VAR_9, VAR_10 = 6;

 FUNC_2(FUNC_7(&VAR_5, "321cbdf08803c744082332332838df6bd160f8f9"));

 FUNC_1(VAR_0,
    FUNC_6(&VAR_7, VAR_3, &VAR_5, VAR_1));

 FUNC_2(FUNC_3(&VAR_8, VAR_3, ((void*)0)));

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_2(VAR_8->write(VAR_8, VAR_4, FUNC_8(VAR_4)));

 FUNC_2(FUNC_4(&VAR_6, VAR_8));
 FUNC_0(&VAR_5, &VAR_6);

 FUNC_2(FUNC_6(&VAR_7, VAR_3, &VAR_5, VAR_2));

 FUNC_5(VAR_7);
}
