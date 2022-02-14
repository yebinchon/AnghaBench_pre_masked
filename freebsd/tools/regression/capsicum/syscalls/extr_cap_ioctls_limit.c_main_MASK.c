
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int ,int*) ;
 int FUNC_16 (int,int *,int ) ;

int
FUNC_17(void)
{
 int VAR_2, VAR_3, VAR_4[2];
 pid_t VAR_5;

 FUNC_12("1..607\n");

 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 FUNC_5(VAR_2);
 FUNC_0(FUNC_1(VAR_2) == 0);

 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 FUNC_6(VAR_2);
 FUNC_0(FUNC_1(VAR_2) == 0);

 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 FUNC_7(VAR_2);
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 VAR_5 = FUNC_4();
 switch (VAR_5) {
 case -1:
  FUNC_2(1, "fork() failed");
 case 0:
  FUNC_5(VAR_2);
  FUNC_0(FUNC_1(VAR_2) == 0);
  FUNC_3(0);
 default:
  if (FUNC_16(VAR_5, ((void*)0), 0) == -1)
   FUNC_2(1, "waitpid() failed");
  FUNC_5(VAR_2);
 }
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 VAR_5 = FUNC_4();
 switch (VAR_5) {
 case -1:
  FUNC_2(1, "fork() failed");
 case 0:
  FUNC_13(1);
  FUNC_5(VAR_2);
  FUNC_0(FUNC_1(VAR_2) == 0);
  FUNC_3(0);
 default:
  FUNC_5(VAR_2);
  if (FUNC_16(VAR_5, ((void*)0), 0) == -1)
   FUNC_2(1, "waitpid() failed");
 }
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 VAR_5 = FUNC_10(&VAR_3, 0);
 switch (VAR_5) {
 case -1:
  FUNC_2(1, "pdfork() failed");
 case 0:
  FUNC_6(VAR_2);
  FUNC_3(0);
 default:
  if (FUNC_11(VAR_3) == -1)
   FUNC_2(1, "pdwait() failed");
  FUNC_1(VAR_3);
  FUNC_6(VAR_2);
 }
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 VAR_5 = FUNC_10(&VAR_3, 0);
 switch (VAR_5) {
 case -1:
  FUNC_2(1, "pdfork() failed");
 case 0:
  FUNC_13(1);
  FUNC_6(VAR_2);
  FUNC_3(0);
 default:
  FUNC_6(VAR_2);
  if (FUNC_11(VAR_3) == -1)
   FUNC_2(1, "pdwait() failed");
  FUNC_1(VAR_3);
 }
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 VAR_5 = FUNC_4();
 switch (VAR_5) {
 case -1:
  FUNC_2(1, "fork() failed");
 case 0:
  FUNC_7(VAR_2);
  FUNC_3(0);
 default:
  if (FUNC_16(VAR_5, ((void*)0), 0) == -1)
   FUNC_2(1, "waitpid() failed");
  FUNC_7(VAR_2);
 }
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0((VAR_2 = FUNC_14(VAR_0, VAR_1, 0)) >= 0);
 VAR_5 = FUNC_4();
 switch (VAR_5) {
 case -1:
  FUNC_2(1, "fork() failed");
 case 0:
  FUNC_13(1);
  FUNC_7(VAR_2);
  FUNC_3(0);
 default:
  FUNC_7(VAR_2);
  if (FUNC_16(VAR_5, ((void*)0), 0) == -1)
   FUNC_2(1, "waitpid() failed");
 }
 FUNC_0(FUNC_1(VAR_2) == 0);


 FUNC_0(FUNC_15(VAR_0, VAR_1, 0, VAR_4) == 0);
 FUNC_0((VAR_5 = FUNC_4()) >= 0);
 if (VAR_5 == 0) {
  FUNC_0(FUNC_1(VAR_4[0]) == 0);
  FUNC_8(VAR_4[1]);
  FUNC_0(FUNC_1(VAR_4[1]) == 0);
  FUNC_3(0);
 } else {
  FUNC_0(FUNC_1(VAR_4[1]) == 0);
  FUNC_9(VAR_4[0]);
  FUNC_0(FUNC_16(VAR_5, ((void*)0), 0) == VAR_5);
  FUNC_0(FUNC_1(VAR_4[0]) == 0);
 }


 FUNC_0(FUNC_15(VAR_0, VAR_1, 0, VAR_4) == 0);
 FUNC_0((VAR_5 = FUNC_4()) >= 0);
 if (VAR_5 == 0) {
  FUNC_0(FUNC_1(VAR_4[0]) == 0);
  FUNC_9(VAR_4[1]);
  FUNC_0(FUNC_1(VAR_4[1]) == 0);
  FUNC_3(0);
 } else {
  FUNC_0(FUNC_1(VAR_4[1]) == 0);
  FUNC_8(VAR_4[0]);
  FUNC_0(FUNC_16(VAR_5, ((void*)0), 0) == VAR_5);
  FUNC_0(FUNC_1(VAR_4[0]) == 0);
 }

 FUNC_3(0);
}
