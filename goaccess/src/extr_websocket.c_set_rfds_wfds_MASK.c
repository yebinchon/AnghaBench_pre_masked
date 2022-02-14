
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* self_pipe; int closing; int colist; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_11__ {int fd; int status; } ;
typedef TYPE_2__ WSPipeOut ;
struct TYPE_12__ {int fd; } ;
typedef TYPE_3__ WSPipeIn ;
struct TYPE_13__ {int status; } ;
typedef TYPE_4__ WSClient ;
struct TYPE_14__ {int wfds; int rfds; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2 (int VAR_4, WSServer * VAR_5, WSPipeIn * VAR_6, WSPipeOut * VAR_7)
{
  WSClient *VAR_8 = ((void*)0);
  int VAR_9;


  if (VAR_7->fd != -1) {
    if (VAR_7->status & VAR_1)
      FUNC_0 (VAR_7->fd, &VAR_2.wfds);
  }

  if (VAR_6->fd != -1)
    FUNC_0 (VAR_6->fd, &VAR_2.rfds);


  FUNC_0 (VAR_5->self_pipe[0], &VAR_2.rfds);

  FUNC_0 (VAR_4, &VAR_2.rfds);

  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
    if (VAR_9 == VAR_6->fd || VAR_9 == VAR_7->fd)
      continue;
    if (!(VAR_8 = FUNC_1 (VAR_9, &VAR_5->colist)))
      continue;



    if (!VAR_5->closing) {
      FUNC_0 (VAR_9, &VAR_2.rfds);
      if (VAR_9 > VAR_3)
        VAR_3 = VAR_9;
    }

    if (VAR_8->status & VAR_1) {
      FUNC_0 (VAR_9, &VAR_2.wfds);
      if (VAR_9 > VAR_3)
        VAR_3 = VAR_9;
    }
  }
}
