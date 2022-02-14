
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char** VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_5, char *VAR_6[])
{
 char VAR_7[VAR_0];

 if (VAR_5 < 2) {
  FUNC_4(VAR_7, "Connect ");
  FUNC_2("(to) ");
  FUNC_0(&VAR_7[FUNC_5(VAR_7)], sizeof VAR_7 - FUNC_5(VAR_7), VAR_4);
  FUNC_1(VAR_7);
  VAR_5 = VAR_1;
  VAR_6 = VAR_2;
 }
 if ((VAR_5 < 2) || (VAR_5 > 3)) {
  FUNC_2("usage: %s [host [port]]\n", VAR_6[0]);
  return;
 }
 if (VAR_5 == 3) {
  VAR_3 = VAR_6[2];
  FUNC_3(VAR_6[1], VAR_6[2]);
 } else
  FUNC_3(VAR_6[1], ((void*)0));
}
