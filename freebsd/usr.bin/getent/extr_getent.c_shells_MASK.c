
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, char *VAR_4[])
{
 const char *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_3 > 1);
 FUNC_0(VAR_4 != ((void*)0));



 FUNC_3();
 VAR_7 = VAR_1;
 if (VAR_3 == 2) {
  while ((VAR_5 = FUNC_2()) != ((void*)0))
   printf("%s\n", VAR_5);
 } else {
  for (VAR_6 = 2; VAR_6 < VAR_3; VAR_6++) {
   FUNC_3();
   while ((VAR_5 = FUNC_2()) != ((void*)0)) {
    if (FUNC_4(VAR_5, VAR_4[VAR_6]) == 0) {
     FUNC_0("%s\n", VAR_5);
     break;
    }
   }
   if (VAR_5 == ((void*)0)) {
    VAR_7 = VAR_0;
    break;
   }
  }
 }
 FUNC_1();
 return VAR_7;
}
