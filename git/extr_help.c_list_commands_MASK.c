
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdnames {scalar_t__ cnt; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (struct cmdnames*,unsigned int) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (char) ;

void FUNC_5(unsigned int VAR_0,
     struct cmdnames *VAR_1, struct cmdnames *VAR_2)
{
 if (VAR_1->cnt) {
  const char *VAR_3 = FUNC_1();
  FUNC_3(FUNC_0("available git commands in '%s'"), VAR_3);
  FUNC_4('\n');
  FUNC_2(VAR_1, VAR_0);
  FUNC_4('\n');
 }

 if (VAR_2->cnt) {
  FUNC_3(FUNC_0("git commands available from elsewhere on your $PATH"));
  FUNC_4('\n');
  FUNC_2(VAR_2, VAR_0);
  FUNC_4('\n');
 }
}
