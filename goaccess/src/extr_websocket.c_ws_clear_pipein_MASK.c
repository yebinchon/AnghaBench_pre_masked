
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int * packet; } ;
typedef TYPE_1__ WSPipeIn ;
typedef int WSPacket ;
struct TYPE_6__ {scalar_t__ pipein; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_5 (WSPipeIn * VAR_2)
{
  WSPacket **VAR_3 = &VAR_2->packet;
  if (!VAR_2)
    return;

  if (VAR_2->fd != -1)
    FUNC_1 (VAR_2->fd);

  FUNC_4 (*VAR_3);
  FUNC_2 (VAR_2);

  if (VAR_1.pipein && FUNC_0 (VAR_1.pipein, VAR_0) != -1)
    FUNC_3 (VAR_1.pipein);
}
