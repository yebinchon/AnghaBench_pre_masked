
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int u_char ;


 size_t VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_2(uint32_t VAR_1, char *VAR_2, char *VAR_3)
{
 uint8_t VAR_4 = 0;
 uint32_t VAR_5;
 char *VAR_6;

 if (VAR_1 > VAR_0 || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (((void*)0));

 for (VAR_6 = VAR_3, VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!FUNC_0(VAR_2[VAR_5])) {
   VAR_4 = 1;
   VAR_3 += FUNC_1(VAR_3, "0x");
   break;
  }

 for (VAR_6 = VAR_3, VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!VAR_4)
   VAR_6 += FUNC_1(VAR_6, "%c", VAR_2[VAR_5]);
  else
   VAR_6 += FUNC_1(VAR_6, "%2.2x", (u_char)VAR_2[VAR_5]);

 return (VAR_3);
}
