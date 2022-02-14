
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void)
{
 semid_t VAR_3;





 if (FUNC_3(&VAR_3, VAR_2, VAR_0 | VAR_1, 0777, 1) < 0) {
  FUNC_1("ksem_open(O_CREAT | O_EXCL)");
  return;
 }
 if (FUNC_5(VAR_2) < 0) {
  FUNC_1("ksem_unlink");
  FUNC_2(VAR_3);
  return;
 }
 if (FUNC_0(VAR_3, 1) < 0) {
  FUNC_2(VAR_3);
  return;
 }


 if (FUNC_4(VAR_3) < 0) {
  FUNC_1("ksem_post");
  FUNC_2(VAR_3);
  return;
 }
 if (FUNC_0(VAR_3, 2) < 0) {
  FUNC_2(VAR_3);
  return;
 }


 if (FUNC_6(VAR_3) < 0) {
  FUNC_1("ksem_wait");
  FUNC_2(VAR_3);
  return;
 }
 if (FUNC_0(VAR_3, 1) < 0) {
  FUNC_2(VAR_3);
  return;
 }

 if (FUNC_2(VAR_3) < 0) {
  FUNC_1("ksem_close");
  return;
 }
 FUNC_7();
}
