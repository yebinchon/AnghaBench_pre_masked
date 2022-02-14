
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ib_qp_init_attr {int dummy; } ;
struct TYPE_9__ {int * sgid_attr; } ;
struct TYPE_10__ {TYPE_3__ grh; } ;
struct TYPE_7__ {int * sgid_attr; } ;
struct TYPE_8__ {TYPE_1__ grh; } ;
struct ib_qp_attr {TYPE_4__ alt_ah_attr; TYPE_2__ ah_attr; } ;
struct ib_qp {int real_qp; TYPE_6__* device; } ;
struct TYPE_11__ {int (* query_qp ) (int ,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;} ;
struct TYPE_12__ {TYPE_5__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;

int FUNC_1(struct ib_qp *VAR_1,
  struct ib_qp_attr *VAR_2,
  int VAR_3,
  struct ib_qp_init_attr *VAR_4)
{
 VAR_2->ah_attr.grh.sgid_attr = ((void*)0);
 VAR_2->alt_ah_attr.grh.sgid_attr = ((void*)0);

 return VAR_1->device->ops.query_qp ?
  VAR_1->device->ops.query_qp(VAR_1->real_qp, VAR_2, VAR_3,
      VAR_4) : -VAR_0;
}
