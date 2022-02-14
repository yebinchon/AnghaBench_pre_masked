
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_repository_init_options ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (char*,int) ;

void FUNC_7(void)
{
 git_repository_init_options VAR_4 = VAR_3;
 git_buf VAR_5 = VAR_0;

 VAR_4.flags = VAR_2 | VAR_1;

 FUNC_6("template", 1);
 FUNC_1("template/HEAD", "foobar\n");
 FUNC_5("repo", &VAR_4);

 FUNC_2(FUNC_4(&VAR_5, "repo/.git/HEAD"));
 FUNC_0("foobar\n", VAR_5.ptr);

 FUNC_3(&VAR_5);
}
