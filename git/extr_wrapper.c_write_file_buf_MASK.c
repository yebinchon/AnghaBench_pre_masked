
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int,char const*,size_t) ;
 int FUNC_4 (char const*,int,int) ;

void FUNC_5(const char *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_4(VAR_3, VAR_2 | VAR_0 | VAR_1, 0666);
 if (FUNC_3(VAR_6, VAR_4, VAR_5) < 0)
  FUNC_2(FUNC_0("could not write to '%s'"), VAR_3);
 if (FUNC_1(VAR_6))
  FUNC_2(FUNC_0("could not close '%s'"), VAR_3);
}
