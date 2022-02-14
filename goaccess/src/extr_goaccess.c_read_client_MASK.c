
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fd_set ;
struct TYPE_3__ {int fd; int mutex; int self_pipe; } ;
typedef TYPE_1__ GWSReader ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6 (void *VAR_1)
{
  GWSReader *VAR_2 = (GWSReader *) VAR_1;
  fd_set VAR_3, VAR_4;

  FUNC_0 (&VAR_3);
  FUNC_0 (&VAR_4);


  if (VAR_2->fd == -1)
    return;

  FUNC_2 (&VAR_2->mutex);
  FUNC_5 (VAR_2->self_pipe);
  FUNC_3 (&VAR_2->mutex);

  while (1) {

    if (FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_0))
      break;
  }
  FUNC_1 (VAR_2->fd);
}
