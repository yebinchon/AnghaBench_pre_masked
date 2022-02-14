
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ WSPipeIn ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static WSPipeIn *
FUNC_1 (void)
{
  WSPipeIn *VAR_0 = FUNC_0 (1, sizeof (WSPipeIn));
  VAR_0->fd = -1;

  return VAR_0;
}
