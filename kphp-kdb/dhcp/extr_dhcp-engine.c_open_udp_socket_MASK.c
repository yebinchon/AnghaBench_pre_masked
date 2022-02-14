
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int,int) ;
 int FUNC_4 (int,struct in_addr,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;

int FUNC_5 (int VAR_4) {
  static struct in_addr VAR_5;
  char VAR_6[256];
  int VAR_7 = FUNC_4 (VAR_4, VAR_5, VAR_1, VAR_0 + VAR_2);
  if (VAR_7 < 0) {
    FUNC_2 ("cannot open UDP server socket at port %d: %m\n", VAR_4);
    FUNC_1 (1);
  }
  if (VAR_3) {
    FUNC_3 ("created listening udp socket at %s:%d, fd=%d\n", FUNC_0 (VAR_5.s_addr, VAR_6), VAR_4, VAR_7);
  }
  return VAR_7;
}
