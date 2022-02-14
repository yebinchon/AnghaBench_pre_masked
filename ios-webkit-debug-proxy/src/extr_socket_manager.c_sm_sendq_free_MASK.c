
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sm_sendq {int dummy; } ;
typedef TYPE_1__* sm_sendq_t ;
struct TYPE_5__ {struct TYPE_5__* begin; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(sm_sendq_t VAR_0) {
  if (VAR_0) {
    FUNC_0(VAR_0->begin);
    FUNC_1(VAR_0, 0, sizeof(struct sm_sendq));
    FUNC_0(VAR_0);
  }
}
