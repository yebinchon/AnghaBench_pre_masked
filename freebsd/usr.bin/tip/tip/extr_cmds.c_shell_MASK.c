
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 () ;
 char* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int*) ;

void
FUNC_11(int VAR_5)
{
 int VAR_6;
 char *VAR_7;
 pid_t VAR_8;

 FUNC_3("[sh]\r\n");
 FUNC_6(VAR_1, VAR_4);
 FUNC_6(VAR_2, VAR_4);
 FUNC_8();
 if ((VAR_8 = FUNC_2())) {
  while (VAR_8 != FUNC_10(&VAR_6));
  FUNC_4();
  FUNC_3("\r\n!\r\n");
  FUNC_6(VAR_1, VAR_3);
  FUNC_6(VAR_2, VAR_3);
  return;
 } else {
  FUNC_6(VAR_2, VAR_3);
  FUNC_6(VAR_1, VAR_3);
  if ((VAR_7 = FUNC_7(FUNC_9(VAR_0), '/')) == ((void*)0))
   VAR_7 = FUNC_9(VAR_0);
  else
   VAR_7++;
  FUNC_5();
  FUNC_0(FUNC_9(VAR_0), VAR_7, (char *)((void*)0));
  FUNC_3("\r\ncan't execl!\r\n");
  FUNC_1(1);
 }
}
