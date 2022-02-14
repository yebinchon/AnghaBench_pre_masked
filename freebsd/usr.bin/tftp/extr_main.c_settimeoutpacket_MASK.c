
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(int VAR_6, char *VAR_7[])
{
 int VAR_8;
 char VAR_9[VAR_0];

 if (VAR_6 < 2) {
  FUNC_5(VAR_9, "Packet timeout ");
  FUNC_3("(value) ");
  FUNC_1(&VAR_9[FUNC_6(VAR_9)], sizeof VAR_9 - FUNC_6(VAR_9), VAR_4);
  FUNC_2(VAR_9);
  VAR_6 = VAR_1;
  VAR_7 = VAR_2;
 }
 if (VAR_6 != 2) {
  FUNC_3("usage: %s value\n", VAR_7[0]);
  return;
 }
 VAR_8 = FUNC_0(VAR_7[1]);
 if (VAR_8 < 0) {
  FUNC_3("%s: bad value\n", VAR_7[1]);
  return;
 }

 FUNC_4(VAR_8, VAR_5, VAR_3);
}
