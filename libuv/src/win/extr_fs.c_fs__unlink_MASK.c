
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * pathw; } ;
struct TYPE_12__ {TYPE_1__ file; } ;
typedef TYPE_2__ uv_fs_t ;
typedef int WCHAR ;
struct TYPE_14__ {int dwFileAttributes; } ;
struct TYPE_13__ {int FileAttributes; int DeleteFile; int member_0; } ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;
typedef TYPE_3__ FILE_DISPOSITION_INFORMATION ;
typedef TYPE_3__ FILE_BASIC_INFORMATION ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ BY_HANDLE_FILE_INFORMATION ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int,int,int *,int ,int,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_17 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (scalar_t__,int *,int *) ;
 int FUNC_8 (scalar_t__,int *,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(uv_fs_t* VAR_19) {
  const WCHAR* VAR_20 = VAR_19->file.pathw;
  HANDLE VAR_21;
  BY_HANDLE_FILE_INFORMATION VAR_22;
  FILE_DISPOSITION_INFORMATION VAR_23;
  IO_STATUS_BLOCK VAR_24;
  NTSTATUS VAR_25;

  VAR_21 = FUNC_1(VAR_20,
                       VAR_9 | VAR_13 | VAR_0,
                       VAR_11 | VAR_12 | VAR_10,
                       ((void*)0),
                       VAR_17,
                       VAR_8 | VAR_7,
                       ((void*)0));

  if (VAR_21 == VAR_16) {
    FUNC_6(VAR_19, FUNC_3());
    return;
  }

  if (!FUNC_2(VAR_21, &VAR_22)) {
    FUNC_6(VAR_19, FUNC_3());
    FUNC_0(VAR_21);
    return;
  }

  if (VAR_22.dwFileAttributes & VAR_4) {





    if (!(VAR_22.dwFileAttributes & VAR_6)) {
      FUNC_6(VAR_19, VAR_1);
      FUNC_0(VAR_21);
      return;
    }



    if (FUNC_7(VAR_21, ((void*)0), ((void*)0)) < 0) {
      DWORD VAR_26 = FUNC_3();
      if (VAR_26 == VAR_2)
        VAR_26 = VAR_1;
      FUNC_6(VAR_19, VAR_26);
      FUNC_0(VAR_21);
      return;
    }
  }

  if (VAR_22.dwFileAttributes & VAR_5) {

    FILE_BASIC_INFORMATION VAR_27 = { 0 };

    VAR_27.FileAttributes = (VAR_22.dwFileAttributes & ~VAR_5) |
                           VAR_3;

    VAR_25 = FUNC_8(VAR_21,
                                   &VAR_24,
                                   &VAR_27,
                                   sizeof VAR_27,
                                   VAR_14);
    if (!FUNC_4(VAR_25)) {
      FUNC_6(VAR_19, FUNC_9(VAR_25));
      FUNC_0(VAR_21);
      return;
    }
  }


  VAR_23.DeleteFile = VAR_18;
  VAR_25 = FUNC_8(VAR_21,
                                 &VAR_24,
                                 &VAR_23,
                                 sizeof VAR_23,
                                 VAR_15);
  if (FUNC_4(VAR_25)) {
    FUNC_5(VAR_19);
  } else {
    FUNC_6(VAR_19, FUNC_9(VAR_25));
  }

  FUNC_0(VAR_21);
}
