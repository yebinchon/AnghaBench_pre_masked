
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fd_wronly; } ;
typedef TYPE_2__ storage_binlog_file_t ;
struct TYPE_7__ {int sigev_notify; } ;
struct TYPE_9__ {scalar_t__ aio_fildes; TYPE_1__ aio_sigevent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3 (void) {
  if (VAR_3 || FUNC_2 ()) {
    return;
  }
  if (VAR_7 - VAR_6 < VAR_4) {
    return;
  }
  VAR_6 = VAR_7;
  storage_binlog_file_t *VAR_9;
  while (1) {
    VAR_9 = FUNC_1 ();
    if (VAR_9 == ((void*)0)) {
      return;
    }
    if (VAR_9->fd_wronly >= 0) {
      break;
    }
  }

  VAR_2.aio_fildes = VAR_9->fd_wronly;
  VAR_2.aio_sigevent.sigev_notify = VAR_1;
  FUNC_0 (VAR_0, &VAR_2);
  VAR_8++;
  VAR_5 = VAR_9;
}
