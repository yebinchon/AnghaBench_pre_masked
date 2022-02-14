
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int offset; unsigned int nbufs; TYPE_2__* bufs; } ;
struct TYPE_20__ {TYPE_3__ info; } ;
struct TYPE_17__ {int fd; } ;
struct TYPE_21__ {TYPE_4__ fs; TYPE_1__ file; } ;
typedef TYPE_5__ uv_fs_t ;
struct uv__fd_info_s {int dummy; } ;
typedef int int64_t ;
struct TYPE_23__ {int HighPart; int LowPart; scalar_t__ QuadPart; } ;
struct TYPE_22__ {int OffsetHigh; int Offset; } ;
struct TYPE_18__ {int len; int base; } ;
typedef TYPE_6__ OVERLAPPED ;
typedef TYPE_7__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int ,scalar_t__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_7__,TYPE_7__*,int ) ;
 int FUNC_5 (int,TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,struct uv__fd_info_s*) ;
 int FUNC_7 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_8 (int,struct uv__fd_info_s*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(uv_fs_t* VAR_5) {
  int VAR_6 = VAR_5->file.fd;
  int64_t VAR_7 = VAR_5->fs.info.offset;
  HANDLE VAR_8;
  OVERLAPPED VAR_9, *VAR_10;
  LARGE_INTEGER VAR_11;
  DWORD VAR_12;
  DWORD VAR_13;
  int VAR_14;
  unsigned int VAR_15;
  LARGE_INTEGER VAR_16;
  LARGE_INTEGER VAR_17;
  int VAR_18;
  struct uv__fd_info_s VAR_19;

  FUNC_5(VAR_6, VAR_5);

  if (FUNC_8(VAR_6, &VAR_19)) {
    FUNC_6(VAR_5, &VAR_19);
    return;
  }

  VAR_17.QuadPart = 0;
  VAR_18 = 0;
  VAR_8 = FUNC_9(VAR_6);

  if (VAR_8 == VAR_4) {
    FUNC_3(VAR_5, VAR_1);
    return;
  }

  if (VAR_7 != -1) {
    FUNC_7(&VAR_9, 0, sizeof VAR_9);
    VAR_10 = &VAR_9;
    if (FUNC_4(VAR_8, VAR_17, &VAR_16,
                         VAR_3)) {
      VAR_18 = 1;
    }
  } else {
    VAR_10 = ((void*)0);
  }

  VAR_15 = 0;
  VAR_12 = 0;
  do {
    DWORD VAR_20;

    if (VAR_7 != -1) {
      VAR_11.QuadPart = VAR_7 + VAR_12;
      VAR_9.Offset = VAR_11.LowPart;
      VAR_9.OffsetHigh = VAR_11.HighPart;
    }

    VAR_14 = FUNC_1(VAR_8,
                      VAR_5->fs.info.bufs[VAR_15].base,
                      VAR_5->fs.info.bufs[VAR_15].len,
                      &VAR_20,
                      VAR_10);
    VAR_12 += VAR_20;
    ++VAR_15;
  } while (VAR_14 && VAR_15 < VAR_5->fs.info.nbufs);

  if (VAR_18)
    FUNC_4(VAR_8, VAR_16, ((void*)0), VAR_2);

  if (VAR_14 || VAR_12 > 0) {
    FUNC_2(VAR_5, VAR_12);
  } else {
    VAR_13 = FUNC_0();
    if (VAR_13 == VAR_0) {
      FUNC_2(VAR_5, VAR_12);
    } else {
      FUNC_3(VAR_5, VAR_13);
    }
  }
}
