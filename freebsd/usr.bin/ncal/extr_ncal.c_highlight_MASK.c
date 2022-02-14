
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int *) ;
 char* FUNC_4 (char*,char**) ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, char *VAR_3, int VAR_4, int *VAR_5)
{
 static int VAR_6 = 1;
 static const char *VAR_7, *VAR_8;

 if (VAR_6) {
  static char VAR_9[512];
  char VAR_10[1024], *VAR_11;

  VAR_8 = VAR_7 = ((void*)0);


  if (FUNC_0(VAR_0) && FUNC_3(VAR_10, ((void*)0)) == 1) {
   VAR_11 = VAR_9;
   VAR_7 = FUNC_4("so", &VAR_11);
   VAR_8 = FUNC_4("se", &VAR_11);
  }

  VAR_6 = 0;
 }





 if (VAR_1) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  return;
 }




 if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0)) {

  VAR_2[0] = ' ';
  VAR_2++;

  FUNC_1(VAR_2, VAR_7, FUNC_2(VAR_7));
  VAR_2 += FUNC_2(VAR_7);

  VAR_4--;
  VAR_3++;
  FUNC_1(VAR_2, VAR_3, VAR_4);
  VAR_2 += VAR_4;

  FUNC_1(VAR_2, VAR_8, FUNC_2(VAR_8));
  *VAR_5 = FUNC_2(VAR_7) + FUNC_2(VAR_8);
  return;
 }




 *VAR_5 = 0;

 VAR_3++;
 VAR_4--;

 VAR_2[0] = ' ';
 VAR_2++;
 while (VAR_4 > 0) {

  FUNC_1(VAR_2, "_\010", 2);
  VAR_2 += 2;
  *VAR_5 += 2;

  *VAR_2++ = *VAR_3++;
  VAR_4--;
 }
 return;
}
