
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd; int fd2; int pid; scalar_t__ is_socket; } ;
typedef int pid_t ;
typedef int mrb_state ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_10(mrb_state *VAR_5, struct mrb_io *VAR_6, int VAR_7)
{
  int VAR_8 = 0;

  if (VAR_6 == ((void*)0)) {
    return;
  }

  if (VAR_6->fd > 2) {
    if (VAR_6->fd != -1) {
      if (FUNC_5(VAR_6->fd) == -1) {
        VAR_8 = VAR_4;
      }
    }
    VAR_6->fd = -1;
  }

  if (VAR_6->fd2 > 2) {
    if (FUNC_5(VAR_6->fd2) == -1) {
      if (VAR_8 == 0) {
        VAR_8 = VAR_4;
      }
    }
    VAR_6->fd2 = -1;
  }

  if (VAR_6->pid != 0) {

    pid_t VAR_9;
    int VAR_10;
    do {
      VAR_9 = FUNC_9(VAR_6->pid, &VAR_10, 0);
    } while (VAR_9 == -1 && VAR_4 == VAR_0);
    if (!VAR_7 && VAR_9 == VAR_6->pid) {
      FUNC_7(VAR_5, VAR_9, VAR_10);
    }
    VAR_6->pid = 0;

  }

  if (!VAR_7 && VAR_8 != 0) {
    VAR_4 = VAR_8;
    FUNC_8(VAR_5, "fptr_finalize failed.");
  }
}
