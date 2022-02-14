
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ socket; int flags; int func_wsarecvfrom; int func_wsarecv; } ;
typedef TYPE_2__ uv_udp_t ;
struct TYPE_9__ {int iocp; } ;
typedef TYPE_3__ uv_loop_t ;
struct TYPE_7__ {int ChainLen; } ;
struct TYPE_10__ {TYPE_1__ ProtocolChain; } ;
typedef TYPE_4__ WSAPROTOCOL_INFOW ;
typedef int ULONG_PTR ;
typedef scalar_t__ SOCKET ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,char*,int*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_8(uv_loop_t* VAR_15, uv_udp_t* VAR_16, SOCKET VAR_17,
    int VAR_18) {
  DWORD VAR_19 = 1;
  WSAPROTOCOL_INFOW VAR_20;
  int VAR_21;

  if (VAR_16->socket != VAR_6)
    return VAR_10;


  if (FUNC_7(VAR_17, VAR_4, &VAR_19) == VAR_7) {
    return FUNC_4();
  }


  if (!FUNC_3((HANDLE)VAR_17, VAR_5, 0)) {
    return FUNC_1();
  }



  if (FUNC_0((HANDLE)VAR_17,
                             VAR_15->iocp,
                             (ULONG_PTR)VAR_17,
                             0) == ((void*)0)) {
    return FUNC_1();
  }






  VAR_21 = (int) sizeof VAR_20;
  if (FUNC_6(
          VAR_17, VAR_8, VAR_9, (char*) &VAR_20, &VAR_21) ==
      VAR_7) {
    return FUNC_1();
  }

  if (VAR_20.ProtocolChain.ChainLen == 1) {
    if (FUNC_2(
            (HANDLE) VAR_17,
            VAR_3 |
                VAR_2)) {
      VAR_16->flags |= VAR_12;
      VAR_16->func_wsarecv = VAR_13;
      VAR_16->func_wsarecvfrom = VAR_14;
    } else if (FUNC_1() != VAR_1) {
      return FUNC_1();
    }
  }

  VAR_16->socket = VAR_17;

  if (VAR_18 == VAR_0) {
    VAR_16->flags |= VAR_11;
  } else {
    FUNC_5(!(VAR_16->flags & VAR_11));
  }

  return 0;
}
