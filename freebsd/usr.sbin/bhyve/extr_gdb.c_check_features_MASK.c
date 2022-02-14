
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,int const*,size_t) ;
 int FUNC_5 () ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static void
FUNC_10(const uint8_t *VAR_0, size_t VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4, *VAR_5;
 bool VAR_6;

 VAR_4 = FUNC_3(VAR_1 + 1);
 FUNC_4(VAR_4, VAR_0, VAR_1);
 VAR_4[VAR_1] = '\0';
 VAR_3 = VAR_4;

 while ((VAR_2 = FUNC_9(&VAR_3, ";")) != ((void*)0)) {




  if (FUNC_7(VAR_2, "") == 0)
   continue;





  VAR_5 = FUNC_6(VAR_2, '=');
  if (VAR_5 != ((void*)0)) {
   *VAR_5 = '\0';
   VAR_5++;
   VAR_6 = 1;
  } else {
   VAR_5 = VAR_2 + FUNC_8(VAR_2) - 1;
   switch (*VAR_5) {
   case '+':
    VAR_6 = 1;
    break;
   case '-':
    VAR_6 = 0;
    break;
   default:






    continue;
   }
   VAR_5 = ((void*)0);
  }


 }
 FUNC_2(VAR_4);

 FUNC_5();


 FUNC_0("PacketSize=4096");
 FUNC_1();
}
