
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_strmap ;
typedef int git_repository ;
typedef int git_attr_rule ;
struct TYPE_2__ {int * macros; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*) ;

git_attr_rule *FUNC_2(
 git_repository *VAR_0, const char *VAR_1)
{
 git_strmap *VAR_2 = FUNC_0(VAR_0)->macros;

 return FUNC_1(VAR_2, VAR_1);
}
