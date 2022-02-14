
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 char const* FUNC_1 (unsigned int*,int*,struct pathspec_item*,char const*) ;
 char const* FUNC_2 (unsigned int*,char const*) ;

__attribute__((used)) static const char *FUNC_3(unsigned *VAR_0, int *VAR_1,
           struct pathspec_item *VAR_2,
           const char *VAR_3)
{
 if (VAR_3[0] != ':' || FUNC_0())
  return VAR_3;
 else if (VAR_3[1] == '(')

  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else

  return FUNC_2(VAR_0, VAR_3);
}
