
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_long ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(char *VAR_0, uint32_t VAR_1, off_t VAR_2)
{
 (void)FUNC_0("%lu %jd", (u_long)VAR_1, (intmax_t)(VAR_2 + 1023) / 1024);
 if (VAR_0 != ((void*)0))
  (void)FUNC_0(" %s", VAR_0);
 (void)FUNC_0("\n");
}
