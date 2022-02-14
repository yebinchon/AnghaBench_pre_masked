
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* loop; } ;
typedef TYPE_2__ uv_udp_t ;
struct TYPE_5__ {int active_udp_streams; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(uv_udp_t* VAR_2) {
  if (VAR_2->flags & VAR_0) {
    VAR_2->flags &= ~VAR_0;
    VAR_2->loop->active_udp_streams--;
    FUNC_0(VAR_1, VAR_2);
  }

  return 0;
}
