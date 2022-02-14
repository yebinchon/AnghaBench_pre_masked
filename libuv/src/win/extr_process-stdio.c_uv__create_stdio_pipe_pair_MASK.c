
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handle; int flags; scalar_t__ ipc; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef int uv_loop_t ;
typedef int pipe_name ;
struct TYPE_8__ {int nLength; scalar_t__ bInheritHandle; int * lpSecurityDescriptor; } ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (char*,int,int ,TYPE_2__*,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int*,int *,int *,int *,int *,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,int,char*,int) ;

__attribute__((used)) static int FUNC_8(uv_loop_t* VAR_18,
    uv_pipe_t* VAR_19, HANDLE* VAR_20, unsigned int VAR_21) {
  char VAR_22[64];
  SECURITY_ATTRIBUTES VAR_23;
  DWORD VAR_24 = 0;
  DWORD VAR_25 = 0;
  HANDLE VAR_26 = VAR_6;
  int VAR_27;
  int VAR_28;

  if (VAR_21 & VAR_16) {



    VAR_24 |= VAR_9 | VAR_8;
    VAR_25 |= VAR_4 | VAR_3;
  }
  if (VAR_21 & VAR_17) {
    VAR_24 |= VAR_8;
    VAR_25 |= VAR_5 | VAR_2;
  }


  VAR_27 = FUNC_7(VAR_18,
                             VAR_19,
                             VAR_24,
                             VAR_22,
                             sizeof(VAR_22));
  if (VAR_27)
    goto error;


  VAR_23.nLength = sizeof VAR_23;
  VAR_23.lpSecurityDescriptor = ((void*)0);
  VAR_23.bInheritHandle = VAR_12;

  VAR_28 = VAR_19->ipc || (VAR_21 & VAR_15);
  VAR_26 = FUNC_2(VAR_22,
                           VAR_25,
                           0,
                           &VAR_23,
                           VAR_7,
                           VAR_28 ? VAR_1 : 0,
                           ((void*)0));
  if (VAR_26 == VAR_6) {
    VAR_27 = FUNC_3();
    goto error;
  }



  {
    DWORD VAR_29;
    BOOL VAR_30 = FUNC_4(VAR_26,
                                     &VAR_29,
                                     ((void*)0),
                                     ((void*)0),
                                     ((void*)0),
                                     ((void*)0),
                                     0);
    FUNC_5(VAR_30 == VAR_12);
    FUNC_5(VAR_29 == (VAR_10 | VAR_11));
  }




  if (!FUNC_1(VAR_19->handle, ((void*)0))) {
    if (FUNC_3() != VAR_0) {
      VAR_27 = FUNC_3();
      goto error;
    }
  }


  if (VAR_21 & VAR_16)
    VAR_19->flags |= VAR_14;
  if (VAR_21 & VAR_17)
    VAR_19->flags |= VAR_13;

  *VAR_20 = VAR_26;
  return 0;

 error:
  if (VAR_19->handle != VAR_6) {
    FUNC_6(VAR_18, VAR_19);
  }

  if (VAR_26 != VAR_6) {
    FUNC_0(VAR_26);
  }

  return VAR_27;
}
