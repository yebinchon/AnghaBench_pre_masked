
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct aiocb {int dummy; } ;
struct TYPE_7__ {int aio_fildes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int* VAR_4 ;
 char** VAR_5 ;
 int FUNC_5 (int ,char*,double,...) ;
 scalar_t__ FUNC_6 (int) ;
 double FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__,char*) ;
 int ** VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 () ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 scalar_t__* VAR_12 ;
 int VAR_13 ;

void FUNC_11 (int VAR_14) {
  FUNC_10();

  double VAR_15 = -FUNC_7 (VAR_0);
  int VAR_16;
  int VAR_17;
  int VAR_18 = 0;

  for (VAR_16 = 0; VAR_16 <= VAR_2; VAR_16++) {
    if (VAR_10[VAR_16]) {
      VAR_17 = FUNC_1 (&VAR_11[VAR_16]);
      if (VAR_17 == VAR_1 && VAR_8 > VAR_10[VAR_16] + 120) {
        FUNC_5 (VAR_9, "%f aio_sync didn't complete for 120 seconds, invoking fsync()!\n", VAR_8);
        FUNC_0 (VAR_11[VAR_16].aio_fildes, &VAR_11[VAR_16]);
        FUNC_6 (VAR_11[VAR_16].aio_fildes);
        VAR_18 = 1;
      }
      if (VAR_17 != VAR_1) {
        VAR_10[VAR_16] = 0;
        VAR_17 = FUNC_3 (&VAR_11[VAR_16]);
        if (VAR_17 >= 0) {
          VAR_12[VAR_16] = VAR_8;
          VAR_11[VAR_16].aio_fildes = -1;
          if (VAR_13 > 1) {
            FUNC_5 (VAR_9, "%f aio_fsync() completed successfully\n", VAR_8);
          }
        } else {
          FUNC_5 (VAR_9, "%f error syncing %s: %m\n", VAR_8, VAR_5[VAR_16 + 1]);
          FUNC_6 (VAR_11[VAR_16].aio_fildes);
          VAR_18 = 1;
        }
      }
    }

    if (!VAR_10[VAR_16] && !VAR_14) {
      FUNC_9 (&VAR_11[VAR_16], 0, sizeof (struct aiocb));
      VAR_11[VAR_16].aio_fildes = VAR_4[VAR_16 + 1];
      if (FUNC_2 (VAR_3, &VAR_11[VAR_16]) < 0) {
        FUNC_5 (VAR_9, "%f aio_fsync() for %s failed: %m\n", VAR_8, VAR_5[VAR_16 + 1]);
        FUNC_6 (VAR_4[VAR_16 + 1]);
        VAR_18 = 1;
      }
      VAR_10[VAR_16] = VAR_8;
      if (VAR_16 > 0) {
        VAR_6[VAR_16 - 1][5]++;
      }
      if (VAR_13 > 1 || VAR_7) {
        FUNC_8 ("%d queued aio_fsync() for %s\n", VAR_8, VAR_5[VAR_16 + 1]);
      }
    }
    if (VAR_14) {
      if (FUNC_6 (VAR_4[VAR_16 + 1]) < 0) {
        FUNC_5 (VAR_9, "%f error syncing %s: %m", VAR_8, VAR_5[VAR_16 + 1]);
      } else {
        VAR_12[VAR_16] = VAR_8;
        if (VAR_13 > 1) {
          FUNC_5 (VAR_9, "%f sync ok for %s\n", VAR_8, VAR_5[VAR_16 + 1]);
        }
      }
    }

  }

  if (VAR_18) {
    VAR_18 = 0;
    for (VAR_16 = 0; VAR_16 <= VAR_2; VAR_16++) {
      if (FUNC_6 (VAR_4[VAR_16 + 1]) < 0) {
        FUNC_5 (VAR_9, "%f error resyncing %s: %m", VAR_8, VAR_5[VAR_16 + 1]);
        VAR_18 = 1;
      }
    }
    if (VAR_18) {
      FUNC_4 (3);
    }
  }

  VAR_15 += FUNC_7 (VAR_0);
  if (VAR_15 >= 0.1) {
    FUNC_5 (VAR_9, "Warning. fsync time = %.9lf at time %ld\n", VAR_15, VAR_8);
  }
}
