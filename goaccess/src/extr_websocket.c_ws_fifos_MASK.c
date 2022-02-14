
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WSServer ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_1__ WSPipeOut ;
struct TYPE_8__ {int fd; } ;
typedef TYPE_2__ WSPipeIn ;
struct TYPE_9__ {int wfds; int rfds; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void
FUNC_3 (WSServer * VAR_1, WSPipeIn * VAR_2, WSPipeOut * VAR_3)
{

  if (VAR_2->fd != -1 && FUNC_0 (VAR_2->fd, &VAR_0.rfds))
    FUNC_1 (VAR_1);

  if (VAR_3->fd != -1 && FUNC_0 (VAR_3->fd, &VAR_0.wfds))
    FUNC_2 (VAR_3, ((void*)0), 0);
}
