
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,void*,int*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_2, VAR_3;

 VAR_2 = 10;
 if (FUNC_2(VAR_1, (void *)(uintptr_t)VAR_2,
     &VAR_3))
  return;
 VAR_0 = FUNC_1(VAR_3);
 switch (FUNC_0(VAR_3)) {
 case 0:
  FUNC_5();
  break;
 case 1:
  FUNC_4("ksem_init");
  break;
 case 2:
  FUNC_3("Limit of %d semaphores not enforced", VAR_2);
  break;
 case 3:
  FUNC_4("getrlimit");
  break;
 case 4:
  FUNC_4("getrlimit");
  break;
 default:
  FUNC_3("bad child state %#x", VAR_3);
  break;
 }
}
