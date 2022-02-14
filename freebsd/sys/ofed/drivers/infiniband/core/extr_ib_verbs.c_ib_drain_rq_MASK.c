
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {TYPE_1__* device; } ;
struct TYPE_2__ {int (* drain_rq ) (struct ib_qp*) ;} ;


 int FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;

void FUNC_2(struct ib_qp *VAR_0)
{
 if (VAR_0->device->drain_rq)
  VAR_0->device->drain_rq(VAR_0);
 else
  FUNC_0(VAR_0);
}
