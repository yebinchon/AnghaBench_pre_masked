
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int level; int value; int name; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__**,int *,char*) ;
 int FUNC_8 (int **) ;

void FUNC_9(void)
{
 git_config *VAR_1;
 git_config_entry *VAR_2;

 FUNC_3(FUNC_8(&VAR_1));
 FUNC_3(FUNC_4(VAR_1, FUNC_2("config/config9"),
  VAR_0, ((void*)0), 0));

 FUNC_3(FUNC_7(&VAR_2, VAR_1, "core.dummy2"));
 FUNC_1("core.dummy2", VAR_2->name);
 FUNC_1("42", VAR_2->value);
 FUNC_0(VAR_0, VAR_2->level);

 FUNC_5(VAR_2);
 FUNC_6(VAR_1);
}
