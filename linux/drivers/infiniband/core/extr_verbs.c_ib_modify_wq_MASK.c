
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ib_wq_attr {int dummy; } ;
struct ib_wq {TYPE_2__* device; } ;
struct TYPE_3__ {int (* modify_wq ) (struct ib_wq*,struct ib_wq_attr*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_wq*,struct ib_wq_attr*,int ,int *) ;

int FUNC_1(struct ib_wq *VAR_1, struct ib_wq_attr *VAR_2,
   u32 VAR_3)
{
 int VAR_4;

 if (!VAR_1->device->ops.modify_wq)
  return -VAR_0;

 VAR_4 = VAR_1->device->ops.modify_wq(VAR_1, VAR_2, VAR_3, ((void*)0));
 return VAR_4;
}
