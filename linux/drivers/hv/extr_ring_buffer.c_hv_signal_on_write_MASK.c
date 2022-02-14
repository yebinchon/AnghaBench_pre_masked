
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct vmbus_channel {int intr_out_empty; struct hv_ring_buffer_info outbound; } ;
struct TYPE_2__ {int read_index; int interrupt_mask; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_4(u32 VAR_0, struct vmbus_channel *VAR_1)
{
 struct hv_ring_buffer_info *VAR_2 = &VAR_1->outbound;

 FUNC_1();
 if (FUNC_0(VAR_2->ring_buffer->interrupt_mask))
  return;


 FUNC_2();




 if (VAR_0 == FUNC_0(VAR_2->ring_buffer->read_index)) {
  ++VAR_1->intr_out_empty;
  FUNC_3(VAR_1);
 }
}
