
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,unsigned long*) ;

unsigned long FUNC_4(const char *VAR_0, unsigned long VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 && !FUNC_3(VAR_2, &VAR_1))
  FUNC_1(FUNC_0("failed to parse %s"), VAR_0);
 return VAR_1;
}
