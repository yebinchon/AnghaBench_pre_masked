
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct TYPE_3__ {int port; struct in_addr target; } ;


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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_13 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 struct hostent* FUNC_8 (char*) ;
 char* VAR_17 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_11 (int ,int,int) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_12 () ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_13 (int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_14 (int ,char*,char*) ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 char* VAR_30 ;
 int VAR_31 ;
 char* VAR_32 ;
 scalar_t__ VAR_33 ;

void FUNC_15 (void) {
  int VAR_34;
  int VAR_35;
  struct hostent *VAR_36;

  FUNC_9();
  FUNC_10();

  VAR_35 = 0;

  if (VAR_14) {
    FUNC_12();
  }

  if (FUNC_1(VAR_32) < 0 && !VAR_18 && !VAR_31) {
    FUNC_7 (VAR_29, "fatal: cannot change user to %s\n", VAR_32 ? VAR_32 : "(none)");
    FUNC_6(1);
  }

  FUNC_14 (VAR_11, "disable%s.bin", VAR_30);
  VAR_16 = FUNC_11 (VAR_11, VAR_4 | VAR_5 | VAR_6, 0640);
  FUNC_14 (VAR_11, "query%s.bin", VAR_30);
  VAR_22 = FUNC_11 (VAR_11, VAR_4 | VAR_5 | VAR_6, 0640);
  FUNC_14 (VAR_11, "stat%s.bin", VAR_30);
  VAR_28 = FUNC_11 (VAR_11, VAR_4 | VAR_5 | VAR_6, 0640);

  FUNC_0 (VAR_16 >= 0 && VAR_22 >= 0 && VAR_28 >= 0);

  if (!(VAR_36 = FUNC_8 (VAR_17)) || VAR_36->h_addrtype != VAR_0 || VAR_36->h_length != 4 || !VAR_36->h_addr_list || !VAR_36->h_addr) {
    FUNC_7 (VAR_29, "fatal: cannot resolve hostname %s: %m\n", VAR_17);
    FUNC_6 (1);
  }

  VAR_15.target = *(struct in_addr *) VAR_36->h_addr;
  VAR_15.port = VAR_21;
  VAR_13 = FUNC_3 (&VAR_15, 0);

  FUNC_2 ();

  FUNC_13(VAR_8, VAR_25);
  FUNC_13(VAR_9, VAR_26);
  FUNC_13(VAR_10, VAR_27);
  if (VAR_14) {
    FUNC_13(VAR_7, VAR_24);
  }

  for (VAR_34 = 0; ; VAR_34++) {
    if (VAR_33 > 0 && !(VAR_34 & 255)) {
      FUNC_7 (VAR_29, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_12, VAR_19, VAR_3, VAR_1, VAR_2);
    }
    FUNC_5 (57);
    if (VAR_20 != VAR_35) {
      VAR_35 = VAR_20;
      FUNC_4();
    }
    if (VAR_23 && !--VAR_23) break;
  }

}
