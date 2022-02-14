
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ib_cq {TYPE_2__* device; } ;
struct TYPE_3__ {int (* modify_cq ) (struct ib_cq*,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_cq*,int ,int ) ;

int FUNC_1(struct ib_cq *VAR_1, u16 VAR_2, u16 VAR_3)
{
 return VAR_1->device->ops.modify_cq ?
  VAR_1->device->ops.modify_cq(VAR_1, VAR_2,
       VAR_3) : -VAR_0;
}
