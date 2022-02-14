
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_oid ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,int ,char*) ;
 int FUNC_7 (TYPE_1__**,TYPE_1__*,char*,int,int *) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{

 git_reference *VAR_1, *VAR_2;
 git_oid VAR_3;


 FUNC_3(FUNC_6(&VAR_1, VAR_0, "refs/heads/br2"));
 FUNC_4(&VAR_3, FUNC_8(VAR_1));


 FUNC_3(FUNC_7(&VAR_2, VAR_1, "refs/heads/test", 1, ((void*)0)));
 FUNC_5(VAR_1);
 FUNC_5(VAR_2);


 FUNC_3(FUNC_6(&VAR_1, VAR_0, "refs/heads/test"));
 FUNC_1(VAR_1->name, "refs/heads/test");
 FUNC_0(&VAR_3, FUNC_8(VAR_1));
 FUNC_5(VAR_1);


 FUNC_2(FUNC_6(&VAR_1, VAR_0, "refs/heads/br2"));

 FUNC_5(VAR_1);
}
