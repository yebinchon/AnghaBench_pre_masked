
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static const char *FUNC_1(const git_commit *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 >= 2)
  return " (merge)";
 else if (VAR_1 == 0)
  return " (initial)";
 else
  return "";
}
