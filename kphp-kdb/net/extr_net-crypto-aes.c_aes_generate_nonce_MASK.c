
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char*,int,unsigned char*) ;
 scalar_t__ VAR_1 ;
 long long FUNC_4 () ;

int FUNC_5 (char VAR_2[16]) {
  *(int *)(VAR_1 + 16) = FUNC_2 ();
  *(int *)(VAR_1 + 20) = FUNC_2 ();
  *(long long *)(VAR_1 + 24) = FUNC_4 ();
  struct timespec VAR_3;
  FUNC_0 (FUNC_1(VAR_0, &VAR_3) >= 0);
  *(int *)(VAR_1 + 32) = VAR_3.tv_sec;
  *(int *)(VAR_1 + 36) = VAR_3.tv_nsec;
  (*(int *)(VAR_1 + 40))++;

  FUNC_3 ((unsigned char *)VAR_1, 44, (unsigned char *)VAR_2);
  return 0;
}
