
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; char** strings; } ;
struct TYPE_6__ {int flags; TYPE_1__ pathspec; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int ,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_5;
 git_status_options VAR_6 = VAR_0;
 char *VAR_7 = "LICENSE[1].md",
  *VAR_8 = "LICENSE[1-2].md";

 FUNC_2(&VAR_4, "pathspec");
 FUNC_1(FUNC_4(&VAR_5, "pathspec", 0));
 FUNC_0("pathspec/LICENSE[1].md", "screaming bracket\n");
 FUNC_0("pathspec/LICENSE1.md", "no bracket\n");

 VAR_6.flags = VAR_2 |
  VAR_1;
 VAR_6.pathspec.count = 1;
 VAR_6.pathspec.strings = &VAR_7;

 FUNC_1(
  FUNC_5(VAR_5, &VAR_6, VAR_3,
  VAR_7)
 );



 VAR_6.pathspec.strings = &VAR_8;
 FUNC_1(
  FUNC_5(VAR_5, &VAR_6, VAR_3, ((void*)0))
 );

 FUNC_3(VAR_5);
}
