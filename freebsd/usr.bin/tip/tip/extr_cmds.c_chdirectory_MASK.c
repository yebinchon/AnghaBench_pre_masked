
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dirname ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (int ) ;

void
FUNC_4(int VAR_3)
{
 char VAR_4[VAR_1];
 char *VAR_5 = VAR_4;

 if (FUNC_2("[cd] ", VAR_4, sizeof(VAR_4))) {
  if (VAR_2)
   return;
  VAR_5 = FUNC_3(VAR_0);
 }
 if (FUNC_0(VAR_5) < 0)
  FUNC_1("%s: bad directory\r\n", VAR_5);
 FUNC_1("!\r\n");
}
