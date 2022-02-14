
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct aiocb {int dummy; } ;
struct TYPE_18__ {int aio_fildes; } ;
struct TYPE_17__ {TYPE_1__* info; } ;
struct TYPE_15__ {int sigev_notify; } ;
struct TYPE_16__ {int aio_fildes; int aio_nbytes; long long aio_offset; int aio_buf; TYPE_2__ aio_sigevent; } ;
struct TYPE_14__ {int file_size; } ;
struct TYPE_13__ {int log_rptr; int log_endw; int log_wptr; int log_start; int log_wcrypt_ptr; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__ VAR_3 ;
 int FUNC_0 (int,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,scalar_t__,...) ;
 int FUNC_9 (TYPE_4__*,int,int,int) ;
 long long VAR_14 ;
 long long VAR_15 ;
 long long VAR_16 ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_11 () ;
 int VAR_18 ;
 int FUNC_12 (int) ;
 int VAR_19 ;

void FUNC_13 (void) {
  int VAR_20, VAR_21;
  int VAR_22 = 0;
  if (!VAR_12 || VAR_6) {
    return;
  }
  if (VAR_9) {
    VAR_20 = VAR_21 = FUNC_1 (&VAR_10);
    if (VAR_20 == VAR_1 && VAR_17 > VAR_9 + 120) {
      FUNC_8 (VAR_18, "%ld binlog aio_write didn't complete for 120 seconds, invoking write()!\n", VAR_17);
      FUNC_0 (VAR_10.aio_fildes, &VAR_10);
      FUNC_7 (1);
      FUNC_6 (3);
    }
    if (VAR_20 != VAR_1) {
      VAR_9 = 0;
      VAR_20 = FUNC_2 (&VAR_10);
      if (VAR_20 >= 0) {
        FUNC_4 (VAR_20 <= VAR_10.aio_nbytes);
        VAR_11 = VAR_17;
        if (VAR_10.aio_fildes != VAR_7 && VAR_10.aio_fildes != VAR_8.aio_fildes) {
          FUNC_5 (VAR_10.aio_fildes);
        }
        VAR_10.aio_fildes = -1;
        FUNC_4 (VAR_4);

        if (VAR_3.log_rptr == VAR_4) {
          VAR_15 += VAR_20;
          VAR_3.log_rptr += VAR_20;
          if (VAR_0 && !VAR_5) {

            VAR_0->info->file_size += VAR_20;
          }
          FUNC_4 ((!VAR_3.log_endw && VAR_3.log_rptr <= VAR_3.log_wptr) || VAR_3.log_rptr <= VAR_3.log_endw);
          if (VAR_3.log_rptr == VAR_3.log_endw) {
            VAR_3.log_rptr = VAR_3.log_start;
            VAR_3.log_endw = 0;
          }
        }

        VAR_4 = 0;
        VAR_22 = 1;

        if (VAR_19 > 1) {
          FUNC_8 (VAR_18, "%ld aio_write() for binlog (position=%lld, size=%ld) completed successfully, %d bytes written\n", VAR_17, (long long) VAR_10.aio_offset, (long) VAR_10.aio_nbytes, VAR_20);
        }
      } else {
        VAR_13 = VAR_21;
        FUNC_8 (VAR_18, "%ld error writing binlog %s (position=%lld, size=%ld): %m\n", VAR_17, VAR_12, (long long) VAR_10.aio_offset, (long) VAR_10.aio_nbytes);
        FUNC_7 (1);
        FUNC_6 (3);
      }
    }
  }
  if (!VAR_9 && VAR_3.log_rptr != VAR_3.log_wptr) {
    long long VAR_23 = VAR_15 - VAR_16 + VAR_14;
    int VAR_24, VAR_25;


    if (VAR_3.log_endw) {
      if (VAR_3.log_rptr <= VAR_3.log_wcrypt_ptr && VAR_3.log_wcrypt_ptr < VAR_3.log_endw) {
        VAR_25 = VAR_3.log_endw - VAR_3.log_wcrypt_ptr;
        FUNC_11 ();
        FUNC_9 (VAR_0, VAR_3.log_wcrypt_ptr, VAR_25, VAR_23 + (VAR_3.log_wcrypt_ptr - VAR_3.log_rptr));
        VAR_3.log_wcrypt_ptr = VAR_3.log_start;
      }
      VAR_24 = VAR_3.log_endw - VAR_3.log_rptr;
      if (!VAR_24) {
        VAR_3.log_rptr = VAR_3.log_start;
        VAR_3.log_endw = 0;
      }
    }
    if (!VAR_3.log_endw) {
      if (VAR_3.log_rptr <= VAR_3.log_wcrypt_ptr && VAR_3.log_wcrypt_ptr < VAR_3.log_wptr) {
        VAR_25 = VAR_3.log_wptr - VAR_3.log_wcrypt_ptr;
        FUNC_11 ();
        FUNC_9 (VAR_0, VAR_3.log_wcrypt_ptr, VAR_25, VAR_23 + (VAR_3.log_wcrypt_ptr - VAR_3.log_rptr));
        VAR_3.log_wcrypt_ptr = VAR_3.log_wptr;
      }
      VAR_24 = VAR_3.log_wptr - VAR_3.log_rptr;
    }

    FUNC_4 (VAR_24 >= 0);

    if (VAR_24 > 0) {
      FUNC_10 (&VAR_10, 0, sizeof (struct aiocb));
      VAR_10.aio_fildes = VAR_7;
      VAR_10.aio_offset = VAR_23;
      VAR_10.aio_nbytes = VAR_24;
      VAR_10.aio_buf = VAR_3.log_rptr;
      VAR_10.aio_sigevent.sigev_notify = VAR_2;

      if (FUNC_3 (&VAR_10) < 0) {
        FUNC_8 (VAR_18, "%ld aio_write() for binlog (position=%lld, size=%d) failed: %m\n", VAR_17, VAR_23, VAR_24);
        FUNC_7 (1);
        FUNC_6 (3);
      }

      VAR_9 = VAR_17;
      VAR_4 = VAR_3.log_rptr;

      if (VAR_19 > 1) {
        FUNC_8 (VAR_18, "%ld queued aio_write() for binlog (position=%lld, size=%d)\n", VAR_17, VAR_23, VAR_24);
      }
    }
  }

  FUNC_12 (VAR_22);

}
