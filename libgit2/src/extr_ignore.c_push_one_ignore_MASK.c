
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ign_path; int depth; } ;
typedef TYPE_1__ git_ignores ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, const char *VAR_2)
{
 git_ignores *VAR_3 = VAR_1;
 VAR_3->depth++;
 return FUNC_0(VAR_3, &VAR_3->ign_path, VAR_2, VAR_0);
}
