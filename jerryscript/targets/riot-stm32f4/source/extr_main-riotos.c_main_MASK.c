
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (unsigned int) ;

int FUNC_4 (void)
{
  FUNC_3 ((unsigned) FUNC_0 ());
  FUNC_1 ("You are running RIOT on a(n) %s board.\n", VAR_0);
  FUNC_1 ("This board features a(n) %s MCU.\n", VAR_1);


  char VAR_4[VAR_2];
  FUNC_2 (VAR_3, VAR_4, VAR_2);

  return 0;
}
