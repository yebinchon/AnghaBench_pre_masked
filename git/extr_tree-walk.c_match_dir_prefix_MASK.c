
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int dummy; } ;


 scalar_t__ FUNC_0 (struct pathspec_item const*,char const*,char const*,int) ;

__attribute__((used)) static int FUNC_1(const struct pathspec_item *VAR_0,
       const char *VAR_1,
       const char *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
  return 0;





 if (!VAR_3 ||
     VAR_1[VAR_3] == '/' ||
     VAR_2[VAR_3 - 1] == '/')
  return 1;


 return 0;
}
