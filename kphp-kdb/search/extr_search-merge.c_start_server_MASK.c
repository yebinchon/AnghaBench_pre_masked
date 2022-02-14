
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_13 () ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_14 (int,TYPE_1__,int ,int ) ;
 int FUNC_15 () ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_16 (int ,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 scalar_t__ VAR_28 ;

void FUNC_17 (void) {

  char VAR_29[64];
  int VAR_30;
  int VAR_31;

  FUNC_11();
  FUNC_12();

  VAR_31 = 0;

  if (!VAR_20) {
    VAR_20 = FUNC_14 (VAR_18, VAR_21, VAR_13, 0);
  }

  if (VAR_20 < 0) {
    FUNC_10(VAR_26, "cannot open server socket at port %d: %m\n", VAR_18);
    FUNC_9(3);
  }

  if (VAR_28) {
    FUNC_10 (VAR_26, "created listening socket at %s:%d, fd=%ld\n", FUNC_2(VAR_21.s_addr, VAR_29), VAR_18, VAR_20);
  }

  if (VAR_14) {
    FUNC_15();
  }

  if (FUNC_0(VAR_27) < 0 && !VAR_15) {
    FUNC_10 (VAR_26, "fatal: cannot change user to %s\n", VAR_27 ? VAR_27 : "(none)");
    FUNC_9(1);
  }

  FUNC_7 (VAR_20, -10, VAR_11, 0);
  FUNC_6 (VAR_20, 7);

  for (VAR_30 = 0; VAR_30 < VAR_1; VAR_30++) {
    FUNC_3 (VAR_0+VAR_30);
  }

  FUNC_16(VAR_6, VAR_23);
  FUNC_16(VAR_8, VAR_24);
  FUNC_16(VAR_9, VAR_25);
  FUNC_16(VAR_7, VAR_10);
  if (VAR_14) {
    FUNC_16(VAR_5, VAR_22);
    FUNC_13();
  }

  for (VAR_30 = 0; ; VAR_30++) {
    if (VAR_28 > 0 && !(VAR_30 & 255)) {
      FUNC_10 (VAR_26, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
         VAR_12, VAR_16, VAR_4, VAR_2, VAR_3);
    }
    FUNC_8 (500);
    if (VAR_17 != VAR_31) {
      VAR_31 = VAR_17;
      FUNC_4();
    }
    if (VAR_19 && !--VAR_19) break;
  }

  FUNC_5 (VAR_20);
  FUNC_1(VAR_20);


}
