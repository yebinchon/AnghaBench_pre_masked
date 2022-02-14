
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
typedef TYPE_1__ WSPipeOut ;
struct TYPE_6__ {scalar_t__ pipeout; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_4 (WSPipeOut * VAR_2)
{
  if (!VAR_2)
    return;

  if (VAR_2->fd != -1)
    FUNC_1 (VAR_2->fd);

  FUNC_2 (VAR_2);

  if (VAR_1.pipeout && FUNC_0 (VAR_1.pipeout, VAR_0) != -1)
    FUNC_3 (VAR_1.pipeout);
}
