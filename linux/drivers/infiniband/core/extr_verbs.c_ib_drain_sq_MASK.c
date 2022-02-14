
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_qp {TYPE_2__* device; } ;
struct TYPE_3__ {int (* drain_sq ) (struct ib_qp*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;

void FUNC_2(struct ib_qp *VAR_0)
{
 if (VAR_0->device->ops.drain_sq)
  VAR_0->device->ops.drain_sq(VAR_0);
 else
  FUNC_0(VAR_0);
}
