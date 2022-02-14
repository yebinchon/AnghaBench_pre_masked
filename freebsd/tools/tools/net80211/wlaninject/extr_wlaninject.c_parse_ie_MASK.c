
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,unsigned int*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 char VAR_4[3];
 int VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0)/2;
 if (VAR_6 < 1 || (FUNC_3(VAR_0) % 2)) {
  FUNC_1("Invalid IE %s\n", VAR_0);
  FUNC_0(1);
 }

 VAR_4[2] = 0;
 while (VAR_6) {
  VAR_4[VAR_3++] = *VAR_0;
  VAR_0++;
  if (VAR_3 == 2) {
   unsigned int VAR_7;

   FUNC_2(VAR_4, "%x", &VAR_7);

   if (VAR_2 <= 0) {
    FUNC_1("No space for IE\n");
    FUNC_0(1);
   }

   *VAR_1++ = (unsigned char) VAR_7;
   VAR_2--;
   VAR_6--;


   if (VAR_5 == 0) {
    if (VAR_2 == 0) {
     FUNC_1("No space for IE\n");
     FUNC_0(1);
    }
    *VAR_1++ = (unsigned char) VAR_6;
    VAR_2--;
    VAR_5++;
   }
   VAR_5++;
   VAR_3 = 0;
  }
 }

 return VAR_5;
}
