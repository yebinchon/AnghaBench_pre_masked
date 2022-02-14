
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsems_max ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,void*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 size_t VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = sizeof(VAR_3);
 if (FUNC_6("p1003_1b.sem_nsems_max", &VAR_3, &VAR_2, ((void*)0), 0) <
     0) {
  FUNC_4("sysctl(p1003_1b.sem_nsems_max)");
  return;
 }

 if (FUNC_2(VAR_1, (void *)(uintptr_t)VAR_3,
     &VAR_4))
  return;
 VAR_0 = FUNC_1(VAR_4);
 switch (FUNC_0(VAR_4)) {
 case 0:
  FUNC_5();
  break;
 case 1:
  FUNC_4("ksem_init");
  break;
 case 2:
  FUNC_3("Limit of %d semaphores not enforced", VAR_3);
  break;
 default:
  FUNC_3("bad child state %#x", VAR_4);
  break;
 }
}
