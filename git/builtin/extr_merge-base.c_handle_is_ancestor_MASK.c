
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 struct commit* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (struct commit*,struct commit*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, const char **VAR_1)
{
 struct commit *VAR_2, *VAR_3;

 if (VAR_0 != 2)
  FUNC_0("--is-ancestor takes exactly two commits");
 VAR_2 = FUNC_1(VAR_1[0]);
 VAR_3 = FUNC_1(VAR_1[1]);
 if (FUNC_2(VAR_2, VAR_3))
  return 0;
 else
  return 1;
}
