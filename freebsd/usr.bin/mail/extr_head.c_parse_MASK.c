
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct headline {int * l_date; int * l_tty; int * l_from; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,char**) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

void
FUNC_5(char VAR_1[], struct headline *VAR_2, char VAR_3[])
{
 char *VAR_4, *VAR_5;
 char VAR_6[VAR_0];

 VAR_2->l_from = ((void*)0);
 VAR_2->l_tty = ((void*)0);
 VAR_2->l_date = ((void*)0);
 VAR_4 = VAR_1;
 VAR_5 = VAR_3;



 VAR_4 = FUNC_2(VAR_4, VAR_6);



 if (FUNC_1(VAR_4)) {
  VAR_2->l_date = FUNC_0(VAR_4, &VAR_5);
  return;
 }
 VAR_4 = FUNC_2(VAR_4, VAR_6);
 if (FUNC_3(VAR_6) > 0)
  VAR_2->l_from = FUNC_0(VAR_6, &VAR_5);
 if (VAR_4 != ((void*)0) && FUNC_4(VAR_4, "tty", 3) == 0) {
  VAR_4 = FUNC_2(VAR_4, VAR_6);
  VAR_2->l_tty = FUNC_0(VAR_6, &VAR_5);
 }
 if (VAR_4 != ((void*)0))
  VAR_2->l_date = FUNC_0(VAR_4, &VAR_5);
}
