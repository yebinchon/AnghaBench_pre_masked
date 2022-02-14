
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int * VAR_14 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,...) ;
 int * VAR_15 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (int,scalar_t__,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_14 () ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_15 (int,TYPE_1__,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;
 TYPE_1__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_18 (int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 char* VAR_28 ;
 scalar_t__ VAR_29 ;

void FUNC_19 (void) {

  char VAR_30[64];
  int VAR_31;
  int VAR_32;

  FUNC_11();
  FUNC_12();

  VAR_32 = 0;

  if (!VAR_21) {
    VAR_21 = FUNC_15 (VAR_19, VAR_22, VAR_11, 0);
  }

  if (VAR_21 < 0) {
    FUNC_10(VAR_27, "cannot open server socket at port %d: %m\n", VAR_19);
    FUNC_8(3);
  }

  if (VAR_29) {
    FUNC_10 (VAR_27, "created listening socket at %s:%d, fd=%ld\n", FUNC_2(VAR_22.s_addr, VAR_30), VAR_19, VAR_21);
  }

  if (VAR_13) {
    FUNC_17();
  }

  if (FUNC_0(VAR_28) < 0 && !VAR_16) {
    FUNC_10 (VAR_27, "fatal: cannot change user to %s\n", VAR_28 ? VAR_28 : "(none)");
    FUNC_8(1);
  }

  if (VAR_12) {
    FUNC_13 (2, VAR_12, 1);
    FUNC_16 (VAR_14[2], VAR_15[2]);
  }

  FUNC_6 (VAR_21, -10, VAR_9, 0);
  FUNC_5 (VAR_21, 7);

  FUNC_18(VAR_4, VAR_24);
  FUNC_18(VAR_6, VAR_25);
  FUNC_18(VAR_7, VAR_26);
  FUNC_18(VAR_5, VAR_8);
  if (VAR_13) {
    FUNC_18(VAR_3, VAR_23);
    FUNC_14();
  }

  for (VAR_31 = 0; ; VAR_31++) {
    if (VAR_29 > 0 && !(VAR_31 & 255)) {
      FUNC_10 (VAR_27, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_10, VAR_17, VAR_2, VAR_0, VAR_1);
    }
    FUNC_7 (1000);
    if (VAR_18 != VAR_32) {
      VAR_32 = VAR_18;
      FUNC_3();
    }
    if (VAR_20 && !--VAR_20) break;
  }

  FUNC_4 (VAR_21);
  FUNC_1(VAR_21);

  FUNC_9();
}
