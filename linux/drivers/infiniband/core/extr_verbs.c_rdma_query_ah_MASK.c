
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sgid_attr; } ;
struct rdma_ah_attr {TYPE_1__ grh; } ;
struct ib_ah {TYPE_3__* device; } ;
struct TYPE_5__ {int (* query_ah ) (struct ib_ah*,struct rdma_ah_attr*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_ah*,struct rdma_ah_attr*) ;

int FUNC_1(struct ib_ah *VAR_1, struct rdma_ah_attr *VAR_2)
{
 VAR_2->grh.sgid_attr = ((void*)0);

 return VAR_1->device->ops.query_ah ?
  VAR_1->device->ops.query_ah(VAR_1, VAR_2) :
  -VAR_0;
}
