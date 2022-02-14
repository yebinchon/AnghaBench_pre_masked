
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 const char *VAR_2 = VAR_0;
 for (;;) {
  while (*++VAR_2 != '$')
   if (*VAR_2 == '\0')
    FUNC_0(0);
  while (*++VAR_2 != '$')
   FUNC_1(*VAR_2, VAR_1);
  FUNC_1('\n', VAR_1);
 }
}
