
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int ,char const**) ;

int
FUNC_3(char *VAR_2)
{
 const char *VAR_3;
 int VAR_4 = -1;

 if (FUNC_1(VAR_2, "-") == 0)
  return '-';
 VAR_4 = FUNC_2(VAR_2, 0, VAR_1, &VAR_3);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_0, "Bad file descriptor '%s': %s",
      VAR_2, VAR_3);
 return (VAR_4);
}
