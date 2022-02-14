
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int qlen; int queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_7__ {int fd; TYPE_1__* fifoqueue; } ;
typedef TYPE_2__ WSPipeOut ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5 (WSPipeOut * VAR_2)
{
  WSQueue *VAR_3 = VAR_2->fifoqueue;
  int VAR_4 = 0;

  VAR_4 = FUNC_3 (VAR_2->fd, VAR_3->queued, VAR_3->qlen);




  if (VAR_4 == -1 && VAR_1 == VAR_0) {
    FUNC_2 (VAR_2->fd);
    FUNC_4 (VAR_2);
    return VAR_4;
  }

  if (FUNC_0 (VAR_3->queued, VAR_4, VAR_3->qlen) == 0)
    FUNC_1 (VAR_2);
  else
    VAR_3->qlen -= VAR_4;

  return VAR_4;
}
