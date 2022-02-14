
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* submit_packet ) (struct kernel_queue*) ;} ;
struct kernel_queue {int* wptr_kernel; int pending_wptr; TYPE_1__ ops_asic_specific; int * pq_kernel_addr; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct kernel_queue*) ;

__attribute__((used)) static void FUNC_2(struct kernel_queue *VAR_0)
{
 VAR_0->ops_asic_specific.submit_packet(VAR_0);
}
