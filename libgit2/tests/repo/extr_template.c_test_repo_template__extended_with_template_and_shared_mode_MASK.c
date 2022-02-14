
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; char* template_path; int mode; } ;
typedef TYPE_1__ git_repository_init_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,char*,int,int,int) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*) ;

void FUNC_6(void)
{
 git_repository_init_options VAR_7 = VAR_4;
 const char *VAR_8;
 int VAR_9;

 VAR_7.flags = VAR_3 |
  VAR_2;
 VAR_7.template_path = "template";
 VAR_7.mode = VAR_5;

 FUNC_4("template", 0);
 FUNC_3("init_shared_from_tpl", &VAR_7);

 VAR_9 = FUNC_1(VAR_6, "core.filemode");

 VAR_8 = FUNC_2(VAR_6);
 FUNC_0(VAR_8, "hooks",
  VAR_1 | VAR_5, 1, VAR_9);
 FUNC_0(VAR_8, "info",
  VAR_1 | VAR_5, 1, VAR_9);
 FUNC_0(VAR_8, "description",
  VAR_0, 0, VAR_9);

 FUNC_5(VAR_6, "template");
}
