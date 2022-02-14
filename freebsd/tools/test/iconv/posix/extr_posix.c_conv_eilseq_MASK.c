
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int iconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const**,size_t*,char**,size_t*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(void)
{
 iconv_t VAR_2;
 size_t VAR_3, VAR_4;
 const char *VAR_5;
 char *VAR_6;
 uint32_t VAR_7[4];
 uint16_t VAR_8[1] = { 0x8AC0 };
 int VAR_9;

 if ((VAR_2 = FUNC_1("Latin2", "UTF-16LE")) == (iconv_t)-1)
  return (1);

 VAR_5 = (const char *)VAR_8;
 VAR_6 = (char *)VAR_7;
 VAR_3 = 4;
 VAR_4 = 16;

 VAR_1 = 0;
 VAR_9 = FUNC_0(VAR_2, &VAR_5, &VAR_3, &VAR_6, &VAR_4);
 if (((const uint8_t *)VAR_5 - (uint8_t *)VAR_8 == 0) && (VAR_3 == 4) &&
     (VAR_4 == 16) && ((uint8_t *)VAR_6 - (uint8_t *)VAR_7 == 0) &&
     (VAR_1 == VAR_0) && ((size_t)VAR_9 == (size_t)-1))
  return (0);
 else
  return (1);
}
