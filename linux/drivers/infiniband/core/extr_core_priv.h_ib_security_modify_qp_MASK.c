
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int real_qp; TYPE_2__* device; } ;
struct TYPE_3__ {int (* modify_qp ) (int ,struct ib_qp_attr*,int,struct ib_udata*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int ,struct ib_qp_attr*,int,struct ib_udata*) ;

__attribute__((used)) static inline int FUNC_1(struct ib_qp *VAR_0,
     struct ib_qp_attr *VAR_1,
     int VAR_2,
     struct ib_udata *VAR_3)
{
 return VAR_0->device->ops.modify_qp(VAR_0->real_qp,
      VAR_1,
      VAR_2,
      VAR_3);
}
