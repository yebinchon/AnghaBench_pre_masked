
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 semid_t VAR_0;

 if (FUNC_2(&VAR_0, 1) < 0) {
  FUNC_0("ksem_init");
  return;
 }

 if (FUNC_1(VAR_0) < 0) {
  FUNC_0("ksem_destroy");
  return;
 }
 FUNC_3();
}
