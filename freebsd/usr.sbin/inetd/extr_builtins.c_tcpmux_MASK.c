
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {char* se_service; struct servtab* se_next; } ;


 int FUNC_0 (struct servtab*) ;
 scalar_t__ FUNC_1 (struct servtab*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,int ) ;
 struct servtab* VAR_2 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,int ) ;

struct servtab *
FUNC_8(int VAR_3)
{
 struct servtab *VAR_4;
 char VAR_5[VAR_0+1];
 int VAR_6;


 if ((VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_0)) < 0) {
  FUNC_5(VAR_3, "-Error reading service name\r\n");
  return (((void*)0));
 }
 VAR_5[VAR_6] = '\0';

 if (VAR_1)
  FUNC_6("tcpmux: someone wants %s", VAR_5);





 if (!FUNC_3(VAR_5, "help")) {
  for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->se_next) {
   if (!FUNC_0(VAR_4))
    continue;
   (void)FUNC_7(VAR_3,VAR_4->se_service,FUNC_4(VAR_4->se_service));
   FUNC_5(VAR_3, "\r\n");
  }
  return (((void*)0));
 }


 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->se_next) {
  if (!FUNC_0(VAR_4))
   continue;
  if (!FUNC_3(VAR_5, VAR_4->se_service)) {
   if (FUNC_1(VAR_4)) {
    FUNC_5(VAR_3, "+Go\r\n");
   }
   return (VAR_4);
  }
 }
 FUNC_5(VAR_3, "-Service not available\r\n");
 return (((void*)0));
}
