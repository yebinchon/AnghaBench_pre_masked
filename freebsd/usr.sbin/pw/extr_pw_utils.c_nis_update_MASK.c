
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char*,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int*,int ) ;
 int FUNC_7 (char*) ;

int
FUNC_8(void) {
 pid_t VAR_0;
 int VAR_1;

 FUNC_4(((void*)0));
 if ((VAR_0 = FUNC_5()) == -1) {
  FUNC_7("fork()");
  return (1);
 }
 if (VAR_0 == 0) {
  FUNC_3("/usr/bin/make", "make", "-C", "/var/yp/", (char*) ((void*)0));
  FUNC_1(1);
 }
 FUNC_6(VAR_0, &VAR_1, 0);
 if ((VAR_1 = FUNC_0(VAR_1)) != 0)
  FUNC_2(VAR_1, "make exited with status %d", VAR_1);
 return (VAR_1);
}
