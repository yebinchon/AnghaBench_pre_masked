
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_1(git_diff *VAR_1, const char *VAR_2)
{
 if (VAR_1)
  return 0;
 FUNC_0(VAR_0, "must provide valid diff to %s", VAR_2);
 return -1;
}
