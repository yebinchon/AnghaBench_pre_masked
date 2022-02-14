
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct kfd_dev {int dummy; } ;
struct TYPE_2__ {int (* acquire_packet_buffer ) (struct kernel_queue*,int,int**) ;int (* submit_packet ) (struct kernel_queue*) ;} ;
struct kernel_queue {int nop_packet; TYPE_1__ ops; } ;


 int VAR_0 ;
 struct kernel_queue* FUNC_0 (struct kfd_dev*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kernel_queue*,int,int**) ;
 int FUNC_3 (struct kernel_queue*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static __attribute__((unused)) void FUNC_5(struct kfd_dev *VAR_1)
{
 struct kernel_queue *VAR_2;
 uint32_t *VAR_3, VAR_4;
 int VAR_5;

 FUNC_1("Starting kernel queue test\n");

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (FUNC_4(!VAR_2)) {
  FUNC_1("  Failed to initialize HIQ\n");
  FUNC_1("Kernel queue test failed\n");
  return;
 }

 VAR_5 = VAR_2->ops.acquire_packet_buffer(VAR_2, 5, &VAR_3);
 if (FUNC_4(VAR_5 != 0)) {
  FUNC_1("  Failed to acquire packet buffer\n");
  FUNC_1("Kernel queue test failed\n");
  return;
 }
 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  VAR_3[VAR_4] = VAR_2->nop_packet;
 VAR_2->ops.submit_packet(VAR_2);

 FUNC_1("Ending kernel queue test\n");
}
