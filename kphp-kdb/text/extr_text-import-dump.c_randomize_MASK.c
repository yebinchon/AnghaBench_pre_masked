
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (long) ;

void FUNC_4 (void) {
  static char VAR_1[16];
  int VAR_2 = FUNC_1 ("/dev/urandom", VAR_0);
  FUNC_0 (FUNC_2 (VAR_2, VAR_1, sizeof (long)) == sizeof (long));
  FUNC_3 (*((long *) VAR_1));
}
