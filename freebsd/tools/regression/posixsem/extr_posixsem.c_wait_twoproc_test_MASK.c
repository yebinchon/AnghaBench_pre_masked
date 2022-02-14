
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,int*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_11(void)
{
 semid_t VAR_4;
 int VAR_5;

 if (FUNC_7(&VAR_4, VAR_1, VAR_0, 0777, 0)) {
  FUNC_5("ksem_open");
  return;
 }

 if (FUNC_10(VAR_4, 500) < 0) {
  FUNC_6(VAR_4);
  FUNC_8(VAR_1);
  return;
 }

 if (FUNC_3(VAR_3, ((void*)0), &VAR_5) < 0) {
  FUNC_2(1);
  FUNC_6(VAR_4);
  FUNC_8(VAR_1);
  return;
 }

 VAR_2 = FUNC_1(VAR_5);
 switch (FUNC_0(VAR_5)) {
 case 0:
  FUNC_9();
  break;
 case 1:
  FUNC_5("child ksem_open()");
  break;
 case 2:
  FUNC_5("child ksem_wait()");
  break;
 case 3:
  FUNC_5("child ksem_close()");
  break;
 default:
  FUNC_4("bad child state %#x", VAR_5);
  break;
 }

 FUNC_2(1);
 FUNC_6(VAR_4);
 FUNC_8(VAR_1);
}
