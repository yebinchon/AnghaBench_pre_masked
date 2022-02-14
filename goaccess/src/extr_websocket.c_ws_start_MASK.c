
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_17__ {int * self_pipe; TYPE_2__* pipeout; TYPE_3__* pipein; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_18__ {int fd; } ;
typedef TYPE_2__ WSPipeOut ;
struct TYPE_19__ {int fd; } ;
typedef TYPE_3__ WSPipeIn ;
struct TYPE_20__ {int use_ssl; scalar_t__ sslkey; scalar_t__ sslcert; } ;
struct TYPE_16__ {int rfds; int wfds; } ;



 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;
 TYPE_13__ VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_13__*,int ,int) ;
 int FUNC_7 (int,int *,int *,int *,int *) ;
 int FUNC_8 (int,TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_11 (int,int,TYPE_1__*) ;
 int FUNC_12 (int*) ;
 TYPE_4__ VAR_3 ;

void
FUNC_13 (WSServer * VAR_4)
{
  WSPipeIn *VAR_5 = VAR_4->pipein;
  WSPipeOut *VAR_6 = VAR_4->pipeout;
  int VAR_7 = 0, VAR_8 = 0;
  FUNC_6 (&VAR_1, 0, sizeof VAR_1);
  FUNC_12 (&VAR_7);

  while (1) {



    VAR_2 = FUNC_4 (VAR_7, VAR_6->fd);

    FUNC_2 (&VAR_1.rfds);
    FUNC_2 (&VAR_1.wfds);

    FUNC_8 (VAR_7, VAR_4, VAR_5, VAR_6);
    VAR_2 += 1;



    if (FUNC_7 (VAR_2, &VAR_1.rfds, &VAR_1.wfds, ((void*)0), ((void*)0)) == -1) {
      switch (VAR_0) {
      case 128:
        FUNC_3 (("A signal was caught on select(2)\n"));
        break;
      default:
        FUNC_0 ("Unable to select: %s.", FUNC_9 (VAR_0));
      }
    }

    if (FUNC_1 (VAR_4->self_pipe[0], &VAR_1.rfds)) {
      FUNC_3 (("Handled self-pipe to close event loop.\n"));
      break;
    }


    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
      if (VAR_8 != VAR_5->fd && VAR_8 != VAR_6->fd) {
        FUNC_11 (VAR_7, VAR_8, VAR_4);
      }
    }

    FUNC_10 (VAR_4, VAR_5, VAR_6);
  }
}
