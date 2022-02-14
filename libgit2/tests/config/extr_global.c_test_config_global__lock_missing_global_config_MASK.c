
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_transaction ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__**,int *,char*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

void FUNC_11(void)
{
 git_config *VAR_0;
 git_config_entry *VAR_1;
 git_transaction *VAR_2;

 FUNC_10("home/.gitconfig");

 FUNC_1(FUNC_6(&VAR_0));
 FUNC_1(FUNC_5(&VAR_2, VAR_0));
 FUNC_1(FUNC_7(VAR_0, "assertion.fail", "boom"));
 FUNC_1(FUNC_8(VAR_2));
 FUNC_9(VAR_2);


 FUNC_1(FUNC_4(&VAR_1, VAR_0, "assertion.fail"));
 FUNC_0("boom", VAR_1->value);

 FUNC_2(VAR_1);
 FUNC_3(VAR_0);


 FUNC_1(FUNC_6(&VAR_0));
 FUNC_1(FUNC_4(&VAR_1, VAR_0, "assertion.fail"));
 FUNC_0("boom", VAR_1->value);

 FUNC_2(VAR_1);
 FUNC_3(VAR_0);
}
