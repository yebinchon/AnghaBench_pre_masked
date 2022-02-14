
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fd; int status; int * fifoqueue; } ;
typedef TYPE_1__ WSPipeOut ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

int
FUNC_4 (WSPipeOut * VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4 = 0;

  if (VAR_1->fd == -1 && FUNC_0 (VAR_1) == -1)
    return VAR_4;


  if (VAR_1->fifoqueue == ((void*)0))
    VAR_4 = FUNC_3 (VAR_1, VAR_2, VAR_3);

  else if (VAR_1->fifoqueue != ((void*)0) && VAR_2 != ((void*)0)) {
    if (FUNC_1 (VAR_1, VAR_2, VAR_3) == 1)
      return VAR_4;
  }

  else {
    VAR_4 = FUNC_2 (VAR_1);
  }

  if (VAR_1->fifoqueue == ((void*)0))
    VAR_1->status &= ~VAR_0;

  return VAR_4;
}
