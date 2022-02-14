
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_srq_attr {int dummy; } ;
struct ib_srq {TYPE_2__* device; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;
struct TYPE_3__ {int (* modify_srq ) (struct ib_srq*,struct ib_srq_attr*,int,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_srq*,struct ib_srq_attr*,int,int *) ;

int FUNC_1(struct ib_srq *VAR_1,
    struct ib_srq_attr *VAR_2,
    enum ib_srq_attr_mask VAR_3)
{
 return VAR_1->device->ops.modify_srq ?
  VAR_1->device->ops.modify_srq(VAR_1, VAR_2, VAR_3,
         ((void*)0)) : -VAR_0;
}
