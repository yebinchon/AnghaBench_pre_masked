
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_cq {TYPE_2__* device; } ;
struct TYPE_3__ {int (* resize_cq ) (struct ib_cq*,int,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_cq*,int,int *) ;

int FUNC_1(struct ib_cq *VAR_1, int VAR_2)
{
 return VAR_1->device->ops.resize_cq ?
  VAR_1->device->ops.resize_cq(VAR_1, VAR_2, ((void*)0)) : -VAR_0;
}
