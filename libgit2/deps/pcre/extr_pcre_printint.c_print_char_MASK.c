
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uint32 ;
typedef int pcre_uchar ;
typedef int FILE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_3(FILE *VAR_2, pcre_uchar *VAR_3, BOOL VAR_4)
{
pcre_uint32 VAR_5 = *VAR_3;



(void)VAR_4;
if (FUNC_0(VAR_5)) FUNC_2(VAR_2, "%c", (char)VAR_5);
else if (VAR_5 <= 0x80) FUNC_2(VAR_2, "\\x%02x", VAR_5);
else FUNC_2(VAR_2, "\\x{%x}", VAR_5);
return 0;
}
