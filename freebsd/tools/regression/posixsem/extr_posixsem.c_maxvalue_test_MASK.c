
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
 semid_t VAR_1;
 int VAR_2;

 if (FUNC_4(&VAR_1, VAR_0) < 0) {
  FUNC_1("ksem_init");
  return;
 }
 if (FUNC_3(VAR_1, &VAR_2) < 0) {
  FUNC_1("ksem_getvalue");
  FUNC_2(VAR_1);
  return;
 }
 if (VAR_2 != VAR_0) {
  FUNC_0("value %d != SEM_VALUE_MAX");
  FUNC_2(VAR_1);
  return;
 }
 if (VAR_2 < 0) {
  FUNC_0("value < 0");
  FUNC_2(VAR_1);
  return;
 }
 if (FUNC_2(VAR_1) < 0) {
  FUNC_1("ksem_destroy");
  return;
 }
 FUNC_5();
}
