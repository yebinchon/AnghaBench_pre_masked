
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
 semid_t VAR_2;

 if (FUNC_4(&VAR_2, 0) < 0) {
  FUNC_2("ksem_init");
  return;
 }


 if (FUNC_5(VAR_2) >= 0) {
  FUNC_1("ksem_trywait() didn't fail");
  FUNC_3(VAR_2);
  return;
 }
 if (VAR_1 != VAR_0) {
  FUNC_2("wrong error from ksem_trywait()");
  FUNC_3(VAR_2);
  return;
 }
 if (FUNC_0(VAR_2, 0) < 0) {
  FUNC_3(VAR_2);
  return;
 }

 if (FUNC_3(VAR_2) < 0) {
  FUNC_2("ksem_destroy");
  return;
 }
 FUNC_6();
}
