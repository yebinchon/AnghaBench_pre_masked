
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_pool ;
struct TYPE_3__ {int length; int pattern; int flags; } ;
typedef TYPE_1__ git_attr_fnmatch ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;

__attribute__((used)) static bool FUNC_1(
 git_attr_fnmatch *VAR_1,
 git_pool *VAR_2,
 const char *VAR_3)
{
 if (!VAR_3[1] && (VAR_3[0] == '*' || VAR_3[0] == '.')) {
  VAR_1->flags = VAR_0;
  VAR_1->pattern = FUNC_0(VAR_2, VAR_3, 1);
  VAR_1->length = 1;

  return 1;
 }

 return 0;
}
