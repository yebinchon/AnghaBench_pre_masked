
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_tty_t ;
struct TYPE_4__ {int flags; scalar_t__ type; int loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_pipe_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

int FUNC_4(uv_stream_t* VAR_3) {
  int VAR_4;

  if (!(VAR_3->flags & VAR_0))
    return 0;

  VAR_4 = 0;
  if (VAR_3->type == VAR_2) {
    VAR_4 = FUNC_3((uv_tty_t*) VAR_3);
  } else if (VAR_3->type == VAR_1) {
    FUNC_1((uv_pipe_t*) VAR_3);
  } else {
    VAR_3->flags &= ~VAR_0;
    FUNC_0(VAR_3->loop, VAR_3);
  }

  return FUNC_2(VAR_4);
}
