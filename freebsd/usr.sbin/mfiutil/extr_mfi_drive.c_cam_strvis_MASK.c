
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{


 while (VAR_2 > 0 && VAR_1[0] == ' ')
  VAR_1++, VAR_2--;
 while (VAR_2 > 0
     && (VAR_1[VAR_2-1] == ' ' || VAR_1[VAR_2-1] == '\0'))
  VAR_2--;

 while (VAR_2 > 0 && VAR_3 > 1) {
  char *VAR_4 = VAR_0;

  if (*VAR_1 < 0x20) {


   if (VAR_3 > 4) {
    *VAR_4++ = '\\';
    *VAR_4++ = ((*VAR_1 & 0300) >> 6) + '0';
    *VAR_4++ = ((*VAR_1 & 0070) >> 3) + '0';
    *VAR_4++ = ((*VAR_1 & 0007) >> 0) + '0';
   } else {
    *VAR_4++ = '?';
   }
  } else {

   *VAR_4++ = *VAR_1;
  }
  VAR_1++;
  VAR_2--;
  VAR_3 -= VAR_4 - VAR_0;
  VAR_0 = VAR_4;
 }
 *VAR_0 = '\0';
}
