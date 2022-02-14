
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_6 (char*,int) ;

void FUNC_7(void)
{
 git_diff_options VAR_4 = VAR_2;
 git_diff *VAR_5 = ((void*)0);

 VAR_3 = FUNC_3("renames");

 FUNC_1("renames/.gitignore", "*.ign\n");
 FUNC_2(FUNC_6("renames/zzz_untracked", 0777));
 FUNC_1("renames/zzz_untracked/an.ign", "ignore me please");
 FUNC_1("renames/zzz_untracked/skip.ign", "ignore me really");
 FUNC_1("renames/zzz_untracked/test.ign", "ignore me now");

 VAR_4.context_lines = 3;
 VAR_4.interhunk_lines = 1;
 VAR_4.flags |= VAR_0 | VAR_1;

 FUNC_2(FUNC_5(&VAR_5, VAR_3, ((void*)0), &VAR_4));

 FUNC_0(VAR_5 != ((void*)0));

 FUNC_4(VAR_5);
}
