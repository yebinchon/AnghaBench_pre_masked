
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int semid_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int,int *,int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 semid_t VAR_0;
 u_int VAR_1;

 if (FUNC_5(&VAR_0, 1) < 0) {
  FUNC_3("ksem_init");
  return;
 }


 if (FUNC_7(VAR_0, 5000, &VAR_1, 0) < 0) {
  FUNC_4(VAR_0);
  return;
 }
 if (!FUNC_0(VAR_1, 0)) {
  FUNC_2("ksem_timedwait() of unlocked sem took %ums", VAR_1);
  FUNC_4(VAR_0);
  return;
 }
 if (FUNC_1(VAR_0, 0) < 0) {
  FUNC_4(VAR_0);
  return;
 }

 if (FUNC_4(VAR_0) < 0) {
  FUNC_3("ksem_destroy");
  return;
 }
 FUNC_6();
}
