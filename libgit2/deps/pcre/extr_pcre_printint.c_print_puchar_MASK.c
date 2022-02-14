
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uint32 ;
typedef char* PCRE_PUCHAR ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, PCRE_PUCHAR VAR_1)
{
while (*VAR_1 != '\0')
  {
  register pcre_uint32 VAR_2 = *VAR_1++;
  if (FUNC_0(VAR_2)) FUNC_1(VAR_0, "%c", VAR_2); else FUNC_1(VAR_0, "\\x{%x}", VAR_2);
  }
}
