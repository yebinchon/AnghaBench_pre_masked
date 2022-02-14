
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int *,int ) ;

int
FUNC_12(void)
{
 unsigned int VAR_2;
 pid_t VAR_3;
 int VAR_4;

 FUNC_9("1..27\n");

 VAR_2 = 666;
 FUNC_0(FUNC_2(&VAR_2) == 0);

 FUNC_0(VAR_2 != 666);

 FUNC_0(VAR_2 == 0);


 VAR_1 = 0;
 FUNC_0(FUNC_2(((void*)0)) == -1);
 FUNC_0(VAR_1 == VAR_0);
 VAR_1 = 0;
 FUNC_0(FUNC_2((void *)(uintptr_t)0xdeadc0de) == -1);
 FUNC_0(VAR_1 == VAR_0);


 VAR_3 = FUNC_6();
 switch (VAR_3) {
 case -1:
  FUNC_4(1, "fork() failed");
 case 0:
  VAR_2 = 666;
  FUNC_0(FUNC_2(&VAR_2) == 0);

  FUNC_0(VAR_2 != 666);

  FUNC_0(VAR_2 == 0);
  FUNC_5(0);
 default:
  if (FUNC_11(VAR_3, ((void*)0), 0) == -1)
   FUNC_4(1, "waitpid() failed");
 }


 VAR_3 = FUNC_7(&VAR_4, 0);
 switch (VAR_3) {
 case -1:
  FUNC_4(1, "pdfork() failed");
 case 0:
  VAR_2 = 666;
  FUNC_0(FUNC_2(&VAR_2) == 0);

  FUNC_0(VAR_2 != 666);

  FUNC_0(VAR_2 == 0);
  FUNC_5(0);
 default:
  if (FUNC_8(VAR_4) == -1)
   FUNC_4(1, "pdwait() failed");
  FUNC_3(VAR_4);
 }



 FUNC_0(FUNC_1() == 0);

 VAR_2 = 666;
 FUNC_0(FUNC_2(&VAR_2) == 0);

 FUNC_0(VAR_2 != 666);

 FUNC_0(VAR_2 == 1);


 VAR_1 = 0;
 FUNC_0(FUNC_2(((void*)0)) == -1);
 FUNC_0(VAR_1 == VAR_0);
 VAR_1 = 0;
 FUNC_0(FUNC_2((void *)(uintptr_t)0xdeadc0de) == -1);
 FUNC_0(VAR_1 == VAR_0);


 VAR_3 = FUNC_6();
 switch (VAR_3) {
 case -1:
  FUNC_4(1, "fork() failed");
 case 0:
  VAR_2 = 666;
  FUNC_0(FUNC_2(&VAR_2) == 0);

  FUNC_0(VAR_2 != 666);

  FUNC_0(VAR_2 == 1);
  FUNC_5(0);
 default:




  FUNC_10(1);
 }


 VAR_3 = FUNC_7(&VAR_4, 0);
 switch (VAR_3) {
 case -1:
  FUNC_4(1, "pdfork() failed");
 case 0:
  VAR_2 = 666;
  FUNC_0(FUNC_2(&VAR_2) == 0);

  FUNC_0(VAR_2 != 666);

  FUNC_0(VAR_2 == 1);
  FUNC_5(0);
 default:
  if (FUNC_8(VAR_4) == -1)
   FUNC_4(1, "pdwait() failed");
  FUNC_3(VAR_4);
 }

 FUNC_5(0);
}
