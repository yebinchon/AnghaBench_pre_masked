
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_repository_init_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void)
{
 git_repository_init_options VAR_5 = VAR_3;

 VAR_5.flags = VAR_2 | VAR_0 |
  VAR_1;

 FUNC_1("template", 1);
 FUNC_0("templated.git", &VAR_5);

 FUNC_2(VAR_4, "template");
}
