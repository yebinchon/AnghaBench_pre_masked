
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ reqs_pending; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(uv_loop_t* VAR_2, uv_udp_t* VAR_3) {
  if (VAR_3->flags & VAR_1 &&
      VAR_3->reqs_pending == 0) {
    FUNC_0(!(VAR_3->flags & VAR_0));
    FUNC_1(VAR_3);
  }
}
