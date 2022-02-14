
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,int*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;

int
FUNC_5(int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 while (FUNC_0(VAR_2, &VAR_4, sizeof VAR_4) == sizeof VAR_4) {
  FUNC_2(VAR_0, "caught signal: %d", VAR_4);
  switch (VAR_4) {
  case 129:
   FUNC_2(VAR_1, "restart by SIG");
   FUNC_1();
   break;
  case 128:
   FUNC_2(VAR_1, "going down on signal %d", VAR_4);
   VAR_3 = -1;
   return VAR_3;
  case 130:
   FUNC_3();
   break;
  default:
   FUNC_4("unexpected signal(%d) received.", VAR_4);
   break;
  }
 }
 return VAR_3;
}
