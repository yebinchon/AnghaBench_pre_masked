
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int iconv_t ;


 int FUNC_0 (int ,char const**,size_t*,char**,size_t*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 iconv_t VAR_0;
 size_t VAR_1, VAR_2;
 const char *VAR_3;
 char *VAR_4;
 uint32_t VAR_5[4];
 uint32_t VAR_6[2] = { 0x00000151, 0x00000171 };

 if ((VAR_0 = FUNC_1("ASCII", "UTF-32LE")) == (iconv_t)-1)
  return (1);

 VAR_3 = (const char *)VAR_6;
 VAR_4 = (char *)VAR_5;
 VAR_1 = 8;
 VAR_2 = 16;

 return (FUNC_0(VAR_0, &VAR_3, &VAR_1, &VAR_4, &VAR_2) == 2 ? 0 : 1);
}
