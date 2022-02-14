
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ signum; int flags; scalar_t__ loop; } ;
typedef TYPE_1__ uv_signal_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(uv_signal_t* VAR_1, uv_signal_t* VAR_2) {
  int VAR_3;
  int VAR_4;



  if (VAR_1->signum < VAR_2->signum) return -1;
  if (VAR_1->signum > VAR_2->signum) return 1;




  VAR_3 = VAR_1->flags & VAR_0;
  VAR_4 = VAR_2->flags & VAR_0;
  if (VAR_3 < VAR_4) return -1;
  if (VAR_3 > VAR_4) return 1;




  if (VAR_1->loop < VAR_2->loop) return -1;
  if (VAR_1->loop > VAR_2->loop) return 1;

  if (VAR_1 < VAR_2) return -1;
  if (VAR_1 > VAR_2) return 1;

  return 0;
}
