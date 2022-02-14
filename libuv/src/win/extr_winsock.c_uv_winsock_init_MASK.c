
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwServiceFlags1; } ;
typedef TYPE_1__ WSAPROTOCOL_INFOW ;
typedef int WSADATA ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int VAR_9 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,char*,int*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int,char*) ;
 scalar_t__ FUNC_10 (char*,int ,int *) ;
 scalar_t__ FUNC_11 (char*,int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_12(void) {
  WSADATA VAR_14;
  int VAR_15;
  SOCKET VAR_16;
  WSAPROTOCOL_INFOW VAR_17;
  int VAR_18;


  if (FUNC_10("0.0.0.0", 0, &VAR_10)) {
    FUNC_4();
  }

  if (FUNC_11("::", 0, &VAR_11)) {
    FUNC_4();
  }


  if (1 == FUNC_0(VAR_4)) return;


  VAR_15 = FUNC_3(FUNC_1(2, 2), &VAR_14);
  if (VAR_15 != 0) {
    FUNC_9(VAR_15, "WSAStartup");
  }


  VAR_16 = FUNC_8(VAR_0, VAR_6, VAR_3);

  if (VAR_16 != VAR_2) {
    VAR_18 = (int) sizeof VAR_17;
    if (FUNC_7(VAR_16,
                   VAR_7,
                   VAR_8,
                   (char*) &VAR_17,
                   &VAR_18) == VAR_5)
      FUNC_9(FUNC_2(), "getsockopt");

    if (!(VAR_17.dwServiceFlags1 & VAR_9))
      VAR_12 = 1;

    if (FUNC_5(VAR_16) == VAR_5)
      FUNC_9(FUNC_2(), "closesocket");

  } else if (!FUNC_6(FUNC_2())) {

    FUNC_9(FUNC_2(), "socket");
  }


  VAR_16 = FUNC_8(VAR_1, VAR_6, VAR_3);

  if (VAR_16 != VAR_2) {
    VAR_18 = (int) sizeof VAR_17;
    if (FUNC_7(VAR_16,
                   VAR_7,
                   VAR_8,
                   (char*) &VAR_17,
                   &VAR_18) == VAR_5)
      FUNC_9(FUNC_2(), "getsockopt");

    if (!(VAR_17.dwServiceFlags1 & VAR_9))
      VAR_13 = 1;

    if (FUNC_5(VAR_16) == VAR_5)
      FUNC_9(FUNC_2(), "closesocket");

  } else if (!FUNC_6(FUNC_2())) {

    FUNC_9(FUNC_2(), "socket");
  }
}
