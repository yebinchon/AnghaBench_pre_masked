
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ terminated; } ;
struct TYPE_5__ {int q; TYPE_1__ Out; } ;
typedef TYPE_2__ write_thread_arg_t ;


 int FUNC_0 (int ) ;

int FUNC_1 (write_thread_arg_t *VAR_0) {
  if (VAR_0->Out.terminated) {
    FUNC_0 (VAR_0->q);
    return 1;
  }
  return 0;
}
