
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
 semid_t VAR_0;

 if (FUNC_3(&VAR_0, 1) < 0) {
  FUNC_1("ksem_init");
  return;
 }
 if (FUNC_0(VAR_0, 1) < 0) {
  FUNC_2(VAR_0);
  return;
 }
 if (FUNC_4(VAR_0) < 0) {
  FUNC_1("ksem_post");
  FUNC_2(VAR_0);
  return;
 }
 if (FUNC_0(VAR_0, 2) < 0) {
  FUNC_2(VAR_0);
  return;
 }
 if (FUNC_2(VAR_0) < 0) {
  FUNC_1("ksem_destroy");
  return;
 }
 FUNC_5();
}
