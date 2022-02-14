
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ offset; } ;
struct TYPE_15__ {TYPE_2__ info; } ;
struct TYPE_13__ {int fd; } ;
struct TYPE_18__ {TYPE_3__ fs; TYPE_1__ file; } ;
typedef TYPE_6__ uv_fs_t ;
struct TYPE_17__ {scalar_t__ QuadPart; } ;
struct TYPE_16__ {scalar_t__ QuadPart; int LowPart; int HighPart; } ;
struct uv__fd_info_s {void* mapping; int flags; TYPE_5__ current_pos; TYPE_4__ size; scalar_t__ is_directory; int member_0; } ;
struct TYPE_19__ {TYPE_4__ EndOfFile; } ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef void* HANDLE ;
typedef TYPE_7__ FILE_END_OF_FILE_INFORMATION ;
typedef int DWORD ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 void* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,TYPE_6__*) ;
 int FUNC_7 (void*,int *,TYPE_7__*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,struct uv__fd_info_s*) ;
 scalar_t__ FUNC_10 (int,struct uv__fd_info_s*) ;
 void* FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(uv_fs_t* VAR_8) {
  int VAR_9 = VAR_8->file.fd;
  HANDLE VAR_10;
  struct uv__fd_info_s VAR_11 = { 0 };
  NTSTATUS VAR_12;
  IO_STATUS_BLOCK VAR_13;
  FILE_END_OF_FILE_INFORMATION VAR_14;

  FUNC_6(VAR_9, VAR_8);

  VAR_10 = FUNC_11(VAR_9);

  if (FUNC_10(VAR_9, &VAR_11)) {
    if (VAR_11.is_directory) {
      FUNC_5(VAR_8, VAR_0);
      return;
    }

    if (VAR_11.mapping != VAR_2) {
      FUNC_0(VAR_11.mapping);
    }
  }

  VAR_14.EndOfFile.QuadPart = VAR_8->fs.info.offset;

  VAR_12 = FUNC_7(VAR_10,
                                 &VAR_13,
                                 &VAR_14,
                                 sizeof VAR_14,
                                 VAR_1);

  if (FUNC_3(VAR_12)) {
    FUNC_4(VAR_8, 0);
  } else {
    FUNC_5(VAR_8, FUNC_8(VAR_12));

    if (VAR_11.flags) {
      FUNC_0(VAR_10);
      VAR_11.mapping = VAR_2;
      VAR_11.size.QuadPart = 0;
      VAR_11.current_pos.QuadPart = 0;
      FUNC_9(VAR_9, &VAR_11);
      return;
    }
  }

  if (VAR_11.flags) {
    VAR_11.size = VAR_14.EndOfFile;

    if (VAR_11.size.QuadPart == 0) {
      VAR_11.mapping = VAR_2;
    } else {
      DWORD VAR_15 = (VAR_11.flags & (VAR_5 | VAR_7 |
        VAR_6)) == VAR_5 ? VAR_3 : VAR_4;
      VAR_11.mapping = FUNC_1(VAR_10,
                                          ((void*)0),
                                          VAR_15,
                                          VAR_11.size.HighPart,
                                          VAR_11.size.LowPart,
                                          ((void*)0));
      if (VAR_11.mapping == ((void*)0)) {
        FUNC_5(VAR_8, FUNC_2());
        FUNC_0(VAR_10);
        VAR_11.mapping = VAR_2;
        VAR_11.size.QuadPart = 0;
        VAR_11.current_pos.QuadPart = 0;
        FUNC_9(VAR_9, &VAR_11);
        return;
      }
    }

    FUNC_9(VAR_9, &VAR_11);
  }
}
