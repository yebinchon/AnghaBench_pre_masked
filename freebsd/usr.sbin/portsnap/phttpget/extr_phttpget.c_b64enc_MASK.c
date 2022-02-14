
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 char* FUNC_0 (size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_1)
{
 static const char VAR_2[] =
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
     "abcdefghijklmnopqrstuvwxyz"
     "0123456789+/";
 const char *VAR_3;
 char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;
 uint32_t VAR_8;
 unsigned int VAR_9;





 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 > ((VAR_0 - 1) / 4) * 3 - 2)
  return ((void*)0);
 VAR_7 = 4 * ((VAR_6 + 2) / 3) + 1;
 if ((VAR_4 = FUNC_0(VAR_7)) == ((void*)0))
  return ((void*)0);
 VAR_4[VAR_7 - 1] = 0;





 for (VAR_3 = VAR_1, VAR_5 = VAR_4; VAR_6; VAR_6 -= 3, VAR_5 += 4) {

  for (VAR_8 = VAR_9 = 0; VAR_9 < 3; VAR_9++) {
   VAR_8 <<= 8;
   if (VAR_9 < VAR_6)
    VAR_8 += *VAR_3++;
  }


  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   if (VAR_9 <= VAR_6 + 1)
    VAR_5[VAR_9] = VAR_2[(VAR_8 >> 18) & 0x3f];
   else
    VAR_5[VAR_9] = '=';
   VAR_8 <<= 6;
  }


  if (VAR_6 <= 3)
   break;
 }

 return (VAR_4);
}
