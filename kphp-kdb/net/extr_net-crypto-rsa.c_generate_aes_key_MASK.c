
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned short tv_sec; unsigned short tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,struct timespec*) ;
 int FUNC_5 (unsigned char*,int) ;
 unsigned short FUNC_6 () ;
 int FUNC_7 (unsigned char*,...) ;
 long long FUNC_8 () ;

__attribute__((used)) static int FUNC_9 (unsigned char VAR_1[32], unsigned char VAR_2[32]) {
  unsigned char VAR_3[64];
  long long VAR_4 = FUNC_8 ();
  struct timespec VAR_5;
  FUNC_3 (FUNC_4(VAR_0, &VAR_5) >= 0);
  FUNC_7 (VAR_3, &VAR_5.tv_sec, 4);
  FUNC_7 (VAR_3+4, &VAR_5.tv_nsec, 4);
  FUNC_7 (VAR_3+8, &VAR_4, 8);
  unsigned short VAR_6 = FUNC_6 ();
  FUNC_7 (VAR_3 + 16, &VAR_6, 2);
  int VAR_7 = FUNC_5 (VAR_3 + 18, 32);
  FUNC_2 (VAR_3, VAR_7 + 18);
  FUNC_3 (FUNC_0 (VAR_1, 32));
  FUNC_3 (FUNC_1 (VAR_2, 32));







  return 0;
}
