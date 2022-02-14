
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commondir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(git_buf *VAR_0, git_repository *VAR_1, const char *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_0);
 return FUNC_1(VAR_0, "%s/worktrees/%s/%s", VAR_1->commondir, VAR_2, VAR_3);
}
