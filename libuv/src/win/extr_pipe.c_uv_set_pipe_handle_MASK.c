
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fd; } ;
struct TYPE_9__ {int flags; scalar_t__ handle; TYPE_1__ u; } ;
typedef TYPE_2__ uv_pipe_t ;
struct TYPE_10__ {int iocp; } ;
typedef TYPE_3__ uv_loop_t ;
typedef int mode_info ;
typedef int ULONG_PTR ;
struct TYPE_11__ {int Mode; } ;
typedef scalar_t__ NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;
typedef TYPE_4__ FILE_MODE_INFORMATION ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__*,int *,int *,int *,int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__*,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_5 (scalar_t__,int *,TYPE_4__*,int,int ) ;

__attribute__((used)) static int FUNC_6(uv_loop_t* VAR_15,
                              uv_pipe_t* VAR_16,
                              HANDLE VAR_17,
                              int VAR_18,
                              DWORD VAR_19) {
  NTSTATUS VAR_20;
  IO_STATUS_BLOCK VAR_21;
  FILE_MODE_INFORMATION VAR_22;
  DWORD VAR_23 = VAR_7 | VAR_8;
  DWORD VAR_24 = 0;
  DWORD VAR_25 = 0;

  if (!(VAR_16->flags & VAR_13) &&
      VAR_16->handle != VAR_5)
    return VAR_10;

  if (!FUNC_4(VAR_17, &VAR_23, ((void*)0), ((void*)0))) {
    VAR_25 = FUNC_1();
    if (VAR_25 == VAR_0) {






      if (!FUNC_2(VAR_17, &VAR_24, ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), 0)) {
        return -1;
      } else if (VAR_24 & VAR_6) {
        FUNC_3(VAR_0);
        return -1;
      }
    } else {


      if (VAR_25 == VAR_1) {
        FUNC_3(VAR_14);
      }
      return -1;
    }
  }


  VAR_20 = FUNC_5(VAR_17,
                                      &VAR_21,
                                      &VAR_22,
                                      sizeof(VAR_22),
                                      VAR_4);
  if (VAR_20 != VAR_9) {
    return -1;
  }

  if (VAR_22.Mode & VAR_2 ||
      VAR_22.Mode & VAR_3) {

    VAR_16->flags |= VAR_12;
  } else {

    if (FUNC_0(VAR_17,
                               VAR_15->iocp,
                               (ULONG_PTR)VAR_16,
                               0) == ((void*)0)) {
      VAR_16->flags |= VAR_11;
    }
  }

  VAR_16->handle = VAR_17;
  VAR_16->u.fd = VAR_18;
  VAR_16->flags |= VAR_19;

  return 0;
}
