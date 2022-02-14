
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sub ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,char const*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 char VAR_6[64], VAR_7[80];

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  if (VAR_4 % 2 == 0) {
   FUNC_4(VAR_6, sizeof(VAR_6), "%s/dir%02d", VAR_1, VAR_4);
   FUNC_1(FUNC_2(VAR_6, 0775, VAR_0));

   FUNC_4(VAR_6, sizeof(VAR_6), "%s/dir%02d/file", VAR_1, VAR_4);
   FUNC_0(VAR_6, VAR_6);
   VAR_6[FUNC_5(VAR_6) - 5] = '\0';
  } else {
   FUNC_4(VAR_6, sizeof(VAR_6), "%s/DIR%02d", VAR_1, VAR_4);
   FUNC_1(FUNC_2(VAR_6, 0775, VAR_0));
  }

  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
   switch (VAR_5 % 4) {
   case 0: FUNC_4(VAR_7, sizeof(VAR_7), "%s/sub%02d", VAR_6, VAR_5); break;
   case 1: FUNC_4(VAR_7, sizeof(VAR_7), "%s/sUB%02d", VAR_6, VAR_5); break;
   case 2: FUNC_4(VAR_7, sizeof(VAR_7), "%s/Sub%02d", VAR_6, VAR_5); break;
   case 3: FUNC_4(VAR_7, sizeof(VAR_7), "%s/SUB%02d", VAR_6, VAR_5); break;
   }
   FUNC_1(FUNC_2(VAR_7, 0775, VAR_0));

   if (VAR_5 % 2 == 0) {
    size_t VAR_8 = FUNC_5(VAR_7);
    FUNC_3(&VAR_7[VAR_8], "/file", sizeof("/file"));
    FUNC_0(VAR_7, VAR_7);
    VAR_7[VAR_8] = '\0';
   }
  }
 }
}
