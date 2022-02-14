
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 scalar_t__ FUNC_2 (int ,void*,int*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(void)
{
 char VAR_3[64];
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = 10;
 if (FUNC_2(VAR_2, (void *)(uintptr_t)VAR_5,
     &VAR_6) < 0)
  return;
 VAR_1 = FUNC_1(VAR_6);
 switch (FUNC_0(VAR_6)) {
 case 0:
  FUNC_6();
  break;
 case 1:
  FUNC_4("ksem_open");
  break;
 case 2:
  FUNC_3("Limit of %d semaphores not enforced", VAR_5);
  break;
 case 3:
  FUNC_4("getrlimit");
  break;
 case 4:
  FUNC_4("getrlimit");
  break;
 default:
  FUNC_3("bad child state %#x", VAR_6);
  break;
 }


 for (VAR_4 = 0; VAR_4 < VAR_5 + 1; VAR_4++) {
  FUNC_7(VAR_3, sizeof(VAR_3), "%s%d", VAR_0, VAR_4);
  FUNC_5(VAR_3);
 }
}
