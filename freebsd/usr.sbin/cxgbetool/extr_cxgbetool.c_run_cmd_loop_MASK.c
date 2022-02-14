
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(void)
{
 int VAR_4, VAR_5 = 0;
 char VAR_6[128], *VAR_7;
 const char *VAR_8[VAR_0 + 1];






 for (;;) {
  FUNC_3(VAR_3, "> ");
  FUNC_1(VAR_3);
  VAR_7 = FUNC_2(VAR_6, sizeof(VAR_6), VAR_2);
  if (VAR_7 == ((void*)0)) {
   if (FUNC_0(VAR_2)) {
    FUNC_7("stdin error");
    VAR_5 = VAR_1;
   }
   break;
  }

  VAR_4 = 0;
  while ((VAR_8[VAR_4] = FUNC_6(&VAR_7, " \t\n")) != ((void*)0)) {
   if (VAR_8[VAR_4][0] != 0 && ++VAR_4 == VAR_0)
    break;
  }
  VAR_8[VAR_4] = 0;

  if (VAR_4 == 0)
   continue;

  if (!FUNC_5(VAR_8[0], "quit") || !FUNC_5(VAR_8[0], "exit"))
   break;

  VAR_5 = FUNC_4(VAR_4, VAR_8);
 }


 return (VAR_5);
}
