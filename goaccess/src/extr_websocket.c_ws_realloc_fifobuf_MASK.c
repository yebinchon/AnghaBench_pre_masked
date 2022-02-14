
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int qlen; char* queued; } ;
typedef TYPE_1__ WSQueue ;
struct TYPE_7__ {int fd; TYPE_1__* fifoqueue; } ;
typedef TYPE_2__ WSPipeOut ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5 (WSPipeOut * VAR_0, const char *VAR_1, int VAR_2)
{
  WSQueue *VAR_3 = VAR_0->fifoqueue;
  char *VAR_4 = ((void*)0);
  int VAR_5 = 0;

  VAR_5 = VAR_3->qlen + VAR_2;
  VAR_4 = FUNC_3 (VAR_3->queued, VAR_5);
  if (VAR_4 == ((void*)0) && VAR_5 > 0) {
    FUNC_1 (VAR_0->fd);
    FUNC_0 (VAR_0);
    FUNC_4 (VAR_0);
    return 1;
  }

  VAR_3->queued = VAR_4;
  FUNC_2 (VAR_3->queued + VAR_3->qlen, VAR_1, VAR_2);
  VAR_3->qlen += VAR_2;

  return 0;
}
