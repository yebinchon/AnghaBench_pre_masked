
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int flags; } ;
typedef TYPE_1__ uv_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(uv_stream_t* VAR_3, int VAR_4) {
  if (VAR_3->type != VAR_2)
    return VAR_0;

  if (VAR_4 != 0)
    VAR_3->flags |= VAR_1;
  else
    VAR_3->flags &= ~VAR_1;

  return 0;
}
