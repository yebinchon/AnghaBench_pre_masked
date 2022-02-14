
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsems_max ;
typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 scalar_t__ FUNC_2 (int ,void*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_9(void)
{
 char VAR_3[64];
 size_t VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = sizeof(VAR_6);
 if (FUNC_8("p1003_1b.sem_nsems_max", &VAR_6, &VAR_4, ((void*)0), 0) <
     0) {
  FUNC_4("sysctl(p1003_1b.sem_nsems_max)");
  return;
 }

 if (FUNC_2(VAR_2, (void *)(uintptr_t)VAR_6,
     &VAR_7) < 0)
  return;
 VAR_1 = FUNC_1(VAR_7);
 switch (FUNC_0(VAR_7)) {
 case 0:
  FUNC_6();
  break;
 case 1:
  FUNC_4("ksem_open");
  break;
 case 2:
  FUNC_3("Limit of %d semaphores not enforced", VAR_6);
  break;
 default:
  FUNC_3("bad child state %#x", VAR_7);
  break;
 }


 for (VAR_5 = 0; VAR_5 < VAR_6 + 1; VAR_5++) {
  FUNC_7(VAR_3, sizeof(VAR_3), "%s%d", VAR_0, VAR_5);
  FUNC_5(VAR_3);
 }
}
