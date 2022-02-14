
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rewrite_notes_ref; } ;
typedef TYPE_1__ git_rebase_options ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(void)
{
 git_rebase_options VAR_1 = VAR_0;
 VAR_1.rewrite_notes_ref = "refs/notes/test";

 FUNC_0(&VAR_1, 1);
}
