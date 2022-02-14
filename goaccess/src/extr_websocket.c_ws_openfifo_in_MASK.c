
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ WSPipeIn ;
struct TYPE_5__ {int pipein; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_4 (WSPipeIn * VAR_4)
{
  FUNC_3 (VAR_3.pipein);

  if ((VAR_4->fd = FUNC_1 (VAR_3.pipein, VAR_1 | VAR_0)) < 0)
    FUNC_0 ("Unable to open fifo in: %s.", FUNC_2 (VAR_2));

  return VAR_4->fd;
}
