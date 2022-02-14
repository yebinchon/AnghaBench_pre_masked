
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int FILE ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*,char*,unsigned int*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6(FILE *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5;
 char *VAR_6, *VAR_7;
 char VAR_8[3];
 char VAR_9[128];



 do {
  if (!FUNC_2(VAR_9, sizeof(VAR_9), VAR_0))
   return(0);
 } while (FUNC_5(VAR_9, "begin ", 6));
 FUNC_3(VAR_9, "begin %o %s", (unsigned *)&VAR_3, VAR_9);
 VAR_6 = VAR_1;
 for (;;) {
  if (!FUNC_2(VAR_7 = VAR_9, sizeof(VAR_9), VAR_0))
   return(0);
  if ((VAR_3 = (((*VAR_7) - ' ') & 0x3f)) <= 0)
   break;
  for (++VAR_7; VAR_3 > 0; VAR_7 += 4, VAR_3 -= 3) {
   VAR_5 = 0;
   if (VAR_3 >= 3) {
    VAR_8[VAR_5++] = (((VAR_7[0]) - ' ') & 0x3f)<<2 | (((VAR_7[1]) - ' ') & 0x3f)>>4;
    VAR_8[VAR_5++] = (((VAR_7[1]) - ' ') & 0x3f)<<4 | (((VAR_7[2]) - ' ') & 0x3f)>>2;
    VAR_8[VAR_5++] = (((VAR_7[2]) - ' ') & 0x3f)<<6 | (((VAR_7[3]) - ' ') & 0x3f);
   }
   else {
    if (VAR_3 >= 1) {
     VAR_8[VAR_5++] =
      (((VAR_7[0]) - ' ') & 0x3f)<<2 | (((VAR_7[1]) - ' ') & 0x3f)>>4;
    }
    if (VAR_3 >= 2) {
     VAR_8[VAR_5++] =
      (((VAR_7[1]) - ' ') & 0x3f)<<4 | (((VAR_7[2]) - ' ') & 0x3f)>>2;
    }
    if (VAR_3 >= 3) {
     VAR_8[VAR_5++] =
      (((VAR_7[2]) - ' ') & 0x3f)<<6 | (((VAR_7[3]) - ' ') & 0x3f);
    }
   }
   if (VAR_5 == 0)
    continue;
   if (VAR_5 + VAR_4 > VAR_2) {
    VAR_5 = VAR_2 - VAR_4;




    VAR_4++;
   }
   FUNC_1(VAR_8, VAR_6, VAR_5);
   VAR_4 += VAR_5;
   VAR_6 += VAR_5;
   if (VAR_4 > VAR_2)
    return(VAR_4);
  }
 }
 if (!FUNC_2(VAR_9, sizeof(VAR_9), VAR_0) || FUNC_4(VAR_9, "end\n"))
  return(0);
 return(VAR_4);
}
