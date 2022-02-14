
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ WSPipeOut ;
struct TYPE_5__ {int pipeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int
FUNC_5 (WSPipeOut * VAR_6)
{
  int VAR_7 = 0;

  FUNC_4 (VAR_5.pipeout);
  VAR_7 = FUNC_2 (VAR_5.pipeout, VAR_2 | VAR_1);

  if (VAR_7 == -1 && VAR_3 == VAR_0)
    FUNC_1 (("Unable to open fifo out: %s.\n", FUNC_3 (VAR_3)));
  else if (VAR_7 < 0)
    FUNC_0 ("Unable to open fifo out: %s.", FUNC_3 (VAR_3));
  VAR_6->fd = VAR_7;

  if (VAR_7 != -1 && VAR_7 > VAR_4)
    VAR_4 = VAR_7;

  return VAR_7;
}
