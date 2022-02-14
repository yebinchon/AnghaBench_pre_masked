
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct TYPE_6__ {int port; struct in_addr target; } ;
struct TYPE_5__ {int s_addr; } ;


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
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 () ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_3__ VAR_16 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,...) ;
 struct hostent* FUNC_12 (char*) ;
 char* VAR_17 ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__,int *,int *) ;
 int FUNC_15 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int,TYPE_1__,int ,int ) ;
 int FUNC_18 () ;
 TYPE_1__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_19 (int ,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 char* VAR_34 ;
 int VAR_35 ;

void FUNC_20 (void) {
  int VAR_36;
  int VAR_37;

  FUNC_13();
  FUNC_15();

  VAR_37 = 0;

  if (!VAR_26) {
    VAR_26 = FUNC_17 (VAR_21, VAR_25, VAR_12, 0);
  }

  if (VAR_26 < 0) {
    FUNC_11 (VAR_33, "cannot open server socket at port %d: %m\n", VAR_21);
    FUNC_10 (3);
  }

  if (VAR_35) {
    FUNC_11 (VAR_33, "created listening socket at %s:%d, fd=%ld\n", FUNC_3 (VAR_25.s_addr, VAR_13), VAR_21, VAR_26);
  }

  if (VAR_15) {
    FUNC_18();
  }

  if (FUNC_1 (VAR_34) < 0) {
    FUNC_11 (VAR_33, "fatal: cannot change user to %s\n", VAR_34 ? VAR_34 : "(none)");
    FUNC_10 (1);
  }

  FUNC_14 (VAR_26, &VAR_14, &VAR_19);

  struct hostent *VAR_38;
  if (!(VAR_38 = FUNC_12 (VAR_17)) || VAR_38->h_addrtype != VAR_0 || VAR_38->h_length != 4 || !VAR_38->h_addr_list || !VAR_38->h_addr) {
    FUNC_11 (VAR_33, "fatal: cannot resolve hostname %s: %m\n", VAR_17);
    FUNC_10 (1);
  }

  VAR_16.target = *(struct in_addr *) VAR_38->h_addr;
  VAR_16.port = VAR_23;
  VAR_22 = FUNC_5 (&VAR_16, 0);

  FUNC_4();

  FUNC_19 (VAR_5, VAR_28);
  FUNC_19 (VAR_8, VAR_31);
  FUNC_19 (VAR_9, VAR_32);
  FUNC_19 (VAR_6, VAR_10);
  FUNC_19 (VAR_7, VAR_30);
  if (VAR_15) {
    FUNC_19 (VAR_4, VAR_27);
    FUNC_16();
  }

  if (VAR_35) {
    FUNC_11 (VAR_33, "Server started\n");
  }

  for (VAR_36 = 0; ; VAR_36++) {
    if (VAR_35 > 0 && !(VAR_36 & 255)) {
      FUNC_11 (VAR_33, "epoll_work(): %d out of %d connections, network bufers: %d used, %d out of %d allocated\n",
         VAR_11, VAR_18, VAR_3, VAR_1, VAR_2);
    }
    FUNC_9 (57);

    if (VAR_29 > 0) {
      if (VAR_35 > 1) {
        FUNC_11 (VAR_33, "after epoll_work(), sigpoll_cnt=%d\n", VAR_29);
      }
      VAR_29 = 0;
    }

    if (VAR_20 != VAR_37) {
      VAR_37 = VAR_20;
      FUNC_6();
    }

    if (&FUNC_8) {
      FUNC_8();
    }

    if (VAR_24 && !--VAR_24) break;
  }

  FUNC_11 (VAR_33, "Quitting.\n");

  FUNC_7 (VAR_26);
  FUNC_0 (FUNC_2 (VAR_26) >= 0);
}
