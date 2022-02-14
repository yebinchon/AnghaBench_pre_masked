
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int,int*,int ) ;

__attribute__((used)) static void FUNC_7(pid_t VAR_0) {
  pid_t VAR_1;
  int VAR_2;

  VAR_1 = FUNC_6(VAR_0, &VAR_2, 0);
  FUNC_5("Waited pid is %d with status %d\n", VAR_1, VAR_2);
  if (VAR_1 == -1) {
    FUNC_4("Failed to wait");
  }
  FUNC_0(VAR_0 == VAR_1);
  FUNC_0(FUNC_2(VAR_2));
  FUNC_0(!FUNC_3(VAR_2));
  FUNC_0(0 == FUNC_1(VAR_2));
}
