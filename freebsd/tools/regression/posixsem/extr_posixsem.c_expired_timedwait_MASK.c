
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int semid_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int,int *,int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 semid_t VAR_1;
 u_int VAR_2;

 if (FUNC_5(&VAR_1, 0) < 0) {
  FUNC_3("ksem_init");
  return;
 }


 if (FUNC_7(VAR_1, 2500, &VAR_2, VAR_0) < 0) {
  FUNC_4(VAR_1);
  return;
 }
 if (!FUNC_0(VAR_2, 2500)) {
  FUNC_2(
     "ksem_timedwait() of locked sem took %ums instead of 2500ms",
      VAR_2);
  FUNC_4(VAR_1);
  return;
 }
 if (FUNC_1(VAR_1, 0) < 0) {
  FUNC_4(VAR_1);
  return;
 }

 if (FUNC_4(VAR_1) < 0) {
  FUNC_3("ksem_destroy");
  return;
 }
 FUNC_6();
}
