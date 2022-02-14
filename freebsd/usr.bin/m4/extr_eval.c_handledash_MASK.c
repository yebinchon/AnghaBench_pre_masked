
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(char *VAR_0, char *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = VAR_0;
 while(*VAR_2) {
  if (VAR_2[1] == '-' && VAR_2[2]) {
   unsigned char VAR_4;
   if ((unsigned char)VAR_2[0] <= (unsigned char)VAR_2[2]) {
    for (VAR_4 = (unsigned char)VAR_2[0];
        VAR_4 <= (unsigned char)VAR_2[2]; VAR_4++) {
     *VAR_3++ = VAR_4;
     if (VAR_3 == VAR_1) {
      *VAR_3 = '\0';
      return VAR_0;
     }
    }
   } else {
    for (VAR_4 = (unsigned char)VAR_2[0];
        VAR_4 >= (unsigned char)VAR_2[2]; VAR_4--) {
     *VAR_3++ = VAR_4;
     if (VAR_3 == VAR_1) {
      *VAR_3 = '\0';
      return VAR_0;
     }
    }
   }
   VAR_2 += 3;
  } else
   *VAR_3++ = *VAR_2++;
  if (VAR_3 == VAR_1)
   break;
 }
 *VAR_3 = '\0';
 return VAR_0;
}
