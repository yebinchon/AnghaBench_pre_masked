
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

void
FUNC_7(char *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_0();
 FUNC_6();

 if (VAR_3)
  FUNC_2("%s\n", VAR_3);
 if (VAR_2)
  FUNC_2("Enter device name [%s]:", VAR_2);
 else
  FUNC_2("Enter device name:");

 if (FUNC_1(VAR_4, VAR_0 - 1, VAR_1)) {
  VAR_5 = FUNC_5(VAR_4);
  if (VAR_4[VAR_5 - 1] == '\n')
   VAR_4[VAR_5 - 1] = '\0';
  if (VAR_4[0] != '\0' && VAR_4[0] != ' ')
   FUNC_4(VAR_2, VAR_4);
 }
 FUNC_3();
}
