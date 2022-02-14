
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ib_mr_status {int dummy; } ;
struct ib_mr {TYPE_2__* device; } ;
struct TYPE_3__ {int (* check_mr_status ) (struct ib_mr*,int ,struct ib_mr_status*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mr*,int ,struct ib_mr_status*) ;

int FUNC_1(struct ib_mr *VAR_1, u32 VAR_2,
         struct ib_mr_status *VAR_3)
{
 if (!VAR_1->device->ops.check_mr_status)
  return -VAR_0;

 return VAR_1->device->ops.check_mr_status(VAR_1, VAR_2, VAR_3);
}
