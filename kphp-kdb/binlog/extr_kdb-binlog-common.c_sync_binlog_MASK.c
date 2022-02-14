
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct aiocb {int dummy; } ;
struct TYPE_11__ {int aio_fildes; } ;
struct TYPE_9__ {int sigev_notify; } ;
struct TYPE_10__ {int aio_fildes; TYPE_1__ aio_sigevent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_9 (int VAR_14) {
  int VAR_15, VAR_16;
  if (!VAR_9 || VAR_3) {
    return;
  }
  if (VAR_5) {
    VAR_15 = VAR_16 = FUNC_1 (&VAR_6);
    if (VAR_15 == VAR_0 && VAR_11 > VAR_5 + 120) {
      FUNC_6 (VAR_12, "%ld binlog aio_sync didn't complete for 120 seconds, invoking fsync()!\n", VAR_11);
      FUNC_0 (VAR_6.aio_fildes, &VAR_6);
      FUNC_7 (VAR_6.aio_fildes);
      FUNC_5 (3);
    }
    if (VAR_15 != VAR_0) {
      VAR_5 = 0;
      VAR_15 = FUNC_3 (&VAR_6);
      if (VAR_15 >= 0) {
        VAR_7 = VAR_11;
        if (VAR_6.aio_fildes != VAR_4 && VAR_8.aio_fildes != VAR_6.aio_fildes) {
          FUNC_4 (VAR_6.aio_fildes);
        }
        VAR_6.aio_fildes = -1;
        if (VAR_13 > 1) {
          FUNC_6 (VAR_12, "%ld aio_fsync() for binlog completed successfully\n", VAR_11);
        }
      } else {
        VAR_10 = VAR_16;
        FUNC_6 (VAR_12, "%ld error syncing binlog %s: %m\n", VAR_11, VAR_9);
        FUNC_7 (VAR_6.aio_fildes);
        FUNC_5 (3);
      }
    }
  }
  if (!VAR_5 && VAR_14 == 1) {
    FUNC_8 (&VAR_6, 0, sizeof (struct aiocb));
    VAR_6.aio_fildes = VAR_4;
    VAR_6.aio_sigevent.sigev_notify = VAR_2;
    if (FUNC_2 (VAR_1, &VAR_6) < 0) {
      FUNC_6 (VAR_12, "%ld aio_fsync() for binlog failed: %m\n", VAR_11);
      FUNC_7 (VAR_4);
      FUNC_5 (3);
    }
    VAR_5 = VAR_11;
    if (VAR_13 > 1) {
      FUNC_6 (VAR_12, "%ld queued aio_fsync() for binlog\n", VAR_11);
    }
  }
  if (VAR_14 >= 2) {
    if (FUNC_7 (VAR_4) < 0) {
      FUNC_6 (VAR_12, "%ld error syncing binlog: %m", VAR_11);
    } else {
      VAR_7 = VAR_11;
      if (VAR_13 > 1) {
        FUNC_6 (VAR_12, "%ld binlog sync ok\n", VAR_11);
      }
    }
  }
}
