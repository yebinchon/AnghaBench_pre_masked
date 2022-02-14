
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ socket; int flags; } ;
typedef TYPE_1__ uv_tcp_t ;
struct TYPE_8__ {int iocp; } ;
typedef TYPE_2__ uv_loop_t ;
typedef int ULONG_PTR ;
typedef int UCHAR ;
typedef scalar_t__ SOCKET ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_9(uv_loop_t* VAR_15,
                             uv_tcp_t* VAR_16,
                             SOCKET VAR_17,
                             int VAR_18,
                             int VAR_19) {
  DWORD VAR_20 = 1;
  int VAR_21;
  int VAR_22;

  if (VAR_16->socket != VAR_5)
    return VAR_7;


  if (FUNC_6(VAR_17, VAR_3, &VAR_20) == VAR_6) {
    return FUNC_4();
  }


  if (!FUNC_3((HANDLE) VAR_17, VAR_4, 0))
    return FUNC_1();



  if (FUNC_0((HANDLE)VAR_17,
                             VAR_15->iocp,
                             (ULONG_PTR)VAR_17,
                             0) == ((void*)0)) {
    if (VAR_19) {
      VAR_16->flags |= VAR_8;
    } else {
      return FUNC_1();
    }
  }

  if (VAR_18 == VAR_0) {
    VAR_21 = VAR_14;
  } else {
    VAR_21 = VAR_13;
  }

  if (!(VAR_16->flags & VAR_8) && !VAR_21) {
    UCHAR VAR_23 =
        VAR_2 | VAR_1;
    if (!FUNC_2((HANDLE) VAR_17, VAR_23))
      return FUNC_1();
    VAR_16->flags |= VAR_10;
  }

  if (VAR_16->flags & VAR_12) {
    VAR_22 = FUNC_8(VAR_16, VAR_17, 1);
    if (VAR_22)
      return VAR_22;
  }


  if (VAR_16->flags & VAR_11) {
    VAR_22 = FUNC_7(VAR_16, VAR_17, 1, 60);
    if (VAR_22)
      return VAR_22;
  }

  VAR_16->socket = VAR_17;

  if (VAR_18 == VAR_0) {
    VAR_16->flags |= VAR_9;
  } else {
    FUNC_5(!(VAR_16->flags & VAR_9));
  }

  return 0;
}
