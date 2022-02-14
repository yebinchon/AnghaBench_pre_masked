
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (int,scalar_t__*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,int*,int ) ;

int
FUNC_12(void)
{
 int VAR_4 = VAR_1;
 int VAR_5, VAR_6;
 pid_t VAR_7;



 VAR_6 = FUNC_5(&VAR_5, 0);
 if (VAR_6 < 0)
  FUNC_3(-1, "pdfork");

 else if (VAR_6 == 0) {
  FUNC_8(VAR_2, VAR_3);
  FUNC_9(3600);
  FUNC_4(VAR_0);
 }


 VAR_6 = FUNC_6(VAR_5, &VAR_7);
 if (VAR_6 != 0)
  FUNC_0("pdgetpid");


 FUNC_10(100);
 VAR_6 = FUNC_7(VAR_5, VAR_2);
 if (VAR_6 != 0)
  FUNC_0("pdkill");


 int VAR_8;
 while (FUNC_11(VAR_7, &VAR_8, 0) != VAR_7) {}
 if ((VAR_4 == VAR_1) && FUNC_2(VAR_8))
  VAR_4 = FUNC_1(VAR_8);
 else
  VAR_4 = VAR_0;

 return (VAR_4);
}
