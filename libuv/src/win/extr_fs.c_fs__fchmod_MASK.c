
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int mode; } ;
struct TYPE_14__ {TYPE_2__ info; } ;
struct TYPE_12__ {int fd; } ;
struct TYPE_15__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_4__ uv_fs_t ;
struct TYPE_16__ {int FileAttributes; } ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;
typedef TYPE_5__ FILE_BASIC_INFORMATION ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int,TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,int *,TYPE_5__*,int,int ) ;
 int FUNC_8 (scalar_t__,int *,TYPE_5__*,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(uv_fs_t* VAR_7) {
  int VAR_8 = VAR_7->file.fd;
  int VAR_9;
  HANDLE VAR_10;
  NTSTATUS VAR_11;
  IO_STATUS_BLOCK VAR_12;
  FILE_BASIC_INFORMATION VAR_13;

  FUNC_6(VAR_8, VAR_7);

  VAR_10 = FUNC_3(FUNC_10(VAR_8), VAR_3, 0, 0);
  if (VAR_10 == VAR_5) {
    FUNC_5(VAR_7, FUNC_1());
    return;
  }

  VAR_11 = FUNC_7(VAR_10,
                                      &VAR_12,
                                      &VAR_13,
                                      sizeof VAR_13,
                                      VAR_4);

  if (!FUNC_2(VAR_11)) {
    FUNC_5(VAR_7, FUNC_9(VAR_11));
    goto fchmod_cleanup;
  }


  if ((VAR_13.FileAttributes & VAR_0) == 0) {


      VAR_13.FileAttributes |= VAR_0;
      VAR_11 = FUNC_8(VAR_10,
                                        &VAR_12,
                                        &VAR_13,
                                        sizeof VAR_13,
                                        VAR_4);
      if (!FUNC_2(VAR_11)) {
        FUNC_5(VAR_7, FUNC_9(VAR_11));
        goto fchmod_cleanup;
      }

      VAR_9 = 1;
  } else {
      VAR_9 = 0;
  }

  if (VAR_7->fs.info.mode & VAR_6) {
    VAR_13.FileAttributes &= ~VAR_2;
  } else {
    VAR_13.FileAttributes |= VAR_2;
  }

  VAR_11 = FUNC_8(VAR_10,
                                    &VAR_12,
                                    &VAR_13,
                                    sizeof VAR_13,
                                    VAR_4);

  if (!FUNC_2(VAR_11)) {
    FUNC_5(VAR_7, FUNC_9(VAR_11));
    goto fchmod_cleanup;
  }

  if (VAR_9) {
      VAR_13.FileAttributes &= ~VAR_0;
      if (VAR_13.FileAttributes == 0) {
          VAR_13.FileAttributes = VAR_1;
      }
      VAR_11 = FUNC_8(VAR_10,
                                        &VAR_12,
                                        &VAR_13,
                                        sizeof VAR_13,
                                        VAR_4);
      if (!FUNC_2(VAR_11)) {
        FUNC_5(VAR_7, FUNC_9(VAR_11));
        goto fchmod_cleanup;
      }
  }

  FUNC_4(VAR_7);
fchmod_cleanup:
  FUNC_0(VAR_10);
}
