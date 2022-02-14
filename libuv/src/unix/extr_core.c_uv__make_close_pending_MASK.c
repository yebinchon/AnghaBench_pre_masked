
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* loop; struct TYPE_5__* next_closing; } ;
typedef TYPE_2__ uv_handle_t ;
struct TYPE_4__ {TYPE_2__* closing_handles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(uv_handle_t* VAR_2) {
  FUNC_0(VAR_2->flags & VAR_1);
  FUNC_0(!(VAR_2->flags & VAR_0));
  VAR_2->next_closing = VAR_2->loop->closing_handles;
  VAR_2->loop->closing_handles = VAR_2;
}
