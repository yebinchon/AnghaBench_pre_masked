
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ time; } ;
typedef TYPE_1__ uv_loop_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(uv_loop_t* VAR_0) {
  uint64_t VAR_1 = FUNC_1(1000);
  FUNC_0(VAR_1 >= VAR_0->time);
  VAR_0->time = VAR_1;
}
