
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_4;
 int VAR_5;


 while (FUNC_2(&VAR_0) != 0)
  FUNC_4(VAR_3);
 FUNC_1(1, &VAR_0);
 VAR_5 = FUNC_0(&VAR_2,
    &VAR_1,
    &VAR_4);
 if (VAR_5) {
  FUNC_3(1, &VAR_0);
  FUNC_6("Unable to extend the watchdog timeout\n");
 } else {
  if (VAR_4)
   FUNC_5();
 }
 while (FUNC_2(&VAR_0) != 0)
  FUNC_4(VAR_3);
}
