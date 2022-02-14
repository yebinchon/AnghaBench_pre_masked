
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; char* template_path; } ;
typedef TYPE_1__ git_repository_init_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*) ;

void FUNC_1(void)
{
 git_repository_init_options VAR_3 = VAR_2;

 VAR_3.flags = VAR_1 | VAR_0;
 VAR_3.template_path = "";

 FUNC_0("foo", &VAR_3);
}
