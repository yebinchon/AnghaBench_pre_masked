
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_diff_driver ;
struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(
 git_diff_driver *VAR_0, git_buf *VAR_1)
{
 char VAR_2 = VAR_1->ptr[0];
 FUNC_0(VAR_0);
 return (FUNC_1(VAR_2) || VAR_2 == '_' || VAR_2 == '$');
}
