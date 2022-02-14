
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* uninitialize ) (struct kernel_queue*) ;} ;
struct kernel_queue {TYPE_1__ ops; } ;


 int FUNC_0 (struct kernel_queue*) ;
 int FUNC_1 (struct kernel_queue*) ;

void FUNC_2(struct kernel_queue *VAR_0)
{
 VAR_0->ops.uninitialize(VAR_0);
 FUNC_0(VAR_0);
}
