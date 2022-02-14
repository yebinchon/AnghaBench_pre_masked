
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_2 = VAR_0;
 char VAR_3[32];
 int VAR_4 = 0;
 int VAR_5 = 0;

 if (FUNC_0("earlyprintk", VAR_3, sizeof(VAR_3)) > 0) {
  char *VAR_6;

  if (!FUNC_3(VAR_3, "serial", 6)) {
   VAR_5 = VAR_1;
   VAR_4 += 6;
  }

  if (VAR_3[VAR_4] == ',')
   VAR_4++;







  if (VAR_4 == 7 && !FUNC_3(VAR_3 + VAR_4, "0x", 2)) {
   VAR_5 = FUNC_2(VAR_3 + VAR_4, &VAR_6, 16);
   if (VAR_5 == 0 || VAR_3 + VAR_4 == VAR_6)
    VAR_5 = VAR_1;
   else
    VAR_4 = VAR_6 - VAR_3;
  } else if (!FUNC_3(VAR_3 + VAR_4, "ttyS", 4)) {
   static const int VAR_7[] = { 0x3f8, 0x2f8 };
   int VAR_8 = 0;


   VAR_4 += 4;

   if (VAR_3[VAR_4++] == '1')
    VAR_8 = 1;

   VAR_5 = VAR_7[VAR_8];
  }

  if (VAR_3[VAR_4] == ',')
   VAR_4++;

  VAR_2 = FUNC_2(VAR_3 + VAR_4, &VAR_6, 0);
  if (VAR_2 == 0 || VAR_3 + VAR_4 == VAR_6)
   VAR_2 = VAR_0;
 }

 if (VAR_5)
  FUNC_1(VAR_5, VAR_2);
}
