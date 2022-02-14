
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__) ;

void FUNC_6() {
 if (VAR_1 == 0)
  return;

 FUNC_4("\n");
 FUNC_5("Stopping crack PID=%d\n", VAR_1);



 if (FUNC_2(VAR_1, VAR_0) == -1) {
  FUNC_3("kill()");
  FUNC_1(1);
 }

 VAR_1 = 0;

 FUNC_0();
}
