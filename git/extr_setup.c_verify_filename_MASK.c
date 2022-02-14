
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*,char const*,int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_0 ;

void FUNC_5(const char *VAR_1,
       const char *VAR_2,
       int VAR_3)
{
 if (*VAR_2 == '-')
  FUNC_2(FUNC_0("option '%s' must come before non-option arguments"), VAR_2);
 if (FUNC_4(VAR_2) || FUNC_1(VAR_1, VAR_2))
  return;
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
