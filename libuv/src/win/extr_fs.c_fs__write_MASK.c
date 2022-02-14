
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_7__,TYPE_7__*,int ) ;
 int FUNC_4 (int,TYPE_5__*) ;
 int FUNC_5 (scalar_t__,int ,int ,scalar_t__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,scalar_t__,struct uv__fd_info_s*) ;
 int FUNC_7 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_8 (int,struct uv__fd_info_s*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(uv_fs_t* VAR_4) {
  int VAR_5 = VAR_4->file.fd;
  int64_t VAR_6 = VAR_4->fs.info.offset;
  HANDLE VAR_7;
  OVERLAPPED VAR_8, *VAR_9;
  LARGE_INTEGER VAR_10;
  DWORD VAR_11;
  int VAR_12;
  unsigned int VAR_13;
  LARGE_INTEGER VAR_14;
  LARGE_INTEGER VAR_15;
  int VAR_16;
  struct uv__fd_info_s VAR_17;

  FUNC_4(VAR_5, VAR_4);

  VAR_15.QuadPart = 0;
  VAR_16 = 0;
  VAR_7 = FUNC_9(VAR_5);
  if (VAR_7 == VAR_3) {
    FUNC_2(VAR_4, VAR_0);
    return;
  }

  if (FUNC_8(VAR_5, &VAR_17)) {
    FUNC_6(VAR_4, VAR_7, &VAR_17);
    return;
  }

  if (VAR_6 != -1) {
    FUNC_7(&VAR_8, 0, sizeof VAR_8);
    VAR_9 = &VAR_8;
    if (FUNC_3(VAR_7, VAR_15, &VAR_14,
                         VAR_2)) {
      VAR_16 = 1;
    }
  } else {
    VAR_9 = ((void*)0);
  }

  VAR_13 = 0;
  VAR_11 = 0;
  do {
    DWORD VAR_18;

    if (VAR_6 != -1) {
      VAR_10.QuadPart = VAR_6 + VAR_11;
      VAR_8.Offset = VAR_10.LowPart;
      VAR_8.OffsetHigh = VAR_10.HighPart;
    }

    VAR_12 = FUNC_5(VAR_7,
                       VAR_4->fs.info.bufs[VAR_13].base,
                       VAR_4->fs.info.bufs[VAR_13].len,
                       &VAR_18,
                       VAR_9);
    VAR_11 += VAR_18;
    ++VAR_13;
  } while (VAR_12 && VAR_13 < VAR_4->fs.info.nbufs);

  if (VAR_16)
    FUNC_3(VAR_7, VAR_14, ((void*)0), VAR_1);

  if (VAR_12 || VAR_11 > 0) {
    FUNC_1(VAR_4, VAR_11);
  } else {
    FUNC_2(VAR_4, FUNC_0());
  }
}
