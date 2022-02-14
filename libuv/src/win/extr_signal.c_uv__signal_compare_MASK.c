
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ signum; scalar_t__ loop; } ;
typedef TYPE_1__ uv_signal_t ;



__attribute__((used)) static int FUNC_0(uv_signal_t* VAR_0, uv_signal_t* VAR_1) {


  if (VAR_0->signum < VAR_1->signum) return -1;
  if (VAR_0->signum > VAR_1->signum) return 1;



  if ((uintptr_t) VAR_0->loop < (uintptr_t) VAR_1->loop) return -1;
  if ((uintptr_t) VAR_0->loop > (uintptr_t) VAR_1->loop) return 1;

  if ((uintptr_t) VAR_0 < (uintptr_t) VAR_1) return -1;
  if ((uintptr_t) VAR_0 > (uintptr_t) VAR_1) return 1;

  return 0;
}
