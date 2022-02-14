
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int,TYPE_1__,int ,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_5 (void) {
  char VAR_8[256];
  if (VAR_6 < 0) {
    VAR_6 = FUNC_4 (VAR_3, VAR_4, VAR_1, VAR_0 + VAR_2);
    if (VAR_6 < 0) {
      FUNC_2 ("cannot open UDP server socket at port %d: %m\n", VAR_3);
      FUNC_1 (1);
    }
    if (VAR_7) {
      FUNC_3 ("created listening udp socket at %s:%d, fd=%d\n", FUNC_0 (VAR_4.s_addr, VAR_8), VAR_3, VAR_6);
    }
  }
  if (VAR_5 < 0) {
    VAR_5 = FUNC_4 (VAR_3, VAR_4, VAR_1, VAR_2);
    if (VAR_5 < 0) {
      FUNC_2 ("cannot open TCP server socket at port %d: %m\n", VAR_3);
      FUNC_1 (1);
    }
  }
}
