
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdnames {int cnt; int names; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cmdnames*,struct cmdnames*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 () ;
 int FUNC_5 (struct cmdnames*,char const*,char const*) ;
 char* FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 int FUNC_8 (struct cmdnames*) ;
 char* FUNC_9 (char const*) ;

void FUNC_10(const char *VAR_2,
  struct cmdnames *VAR_3,
  struct cmdnames *VAR_4)
{
 const char *VAR_5 = FUNC_3("PATH");
 const char *VAR_6 = FUNC_4();

 if (VAR_6) {
  FUNC_5(VAR_3, VAR_6, VAR_2);
  FUNC_0(VAR_3->names, VAR_3->cnt, VAR_1);
  FUNC_8(VAR_3);
 }

 if (VAR_5) {
  char *VAR_7, *VAR_8, *VAR_9;
  VAR_8 = VAR_7 = FUNC_9(VAR_5);
  while (1) {
   if ((VAR_9 = FUNC_6(VAR_8, VAR_0)))
    *VAR_9 = 0;
   if (!VAR_6 || FUNC_7(VAR_8, VAR_6))
    FUNC_5(VAR_4, VAR_8, VAR_2);

   if (!VAR_9)
    break;
   VAR_8 = VAR_9 + 1;
  }
  FUNC_2(VAR_7);

  FUNC_0(VAR_4->names, VAR_4->cnt, VAR_1);
  FUNC_8(VAR_4);
 }
 FUNC_1(VAR_4, VAR_3);
}
