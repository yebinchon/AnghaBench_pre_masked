
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {scalar_t__ priv_read_index; TYPE_2__* ring_buffer; } ;
struct vmbus_channel {int intr_in_full; struct hv_ring_buffer_info inbound; } ;
struct TYPE_3__ {int feat_pending_send_sz; } ;
struct TYPE_4__ {scalar_t__ read_index; int pending_send_sz; TYPE_1__ feature_bits; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hv_ring_buffer_info*) ;
 scalar_t__ FUNC_2 (struct hv_ring_buffer_info*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct vmbus_channel*) ;

void FUNC_6(struct vmbus_channel *VAR_0)
{
 struct hv_ring_buffer_info *VAR_1 = &VAR_0->inbound;
 u32 VAR_2, VAR_3, VAR_4, VAR_5;






 FUNC_4();
 VAR_5 = VAR_1->ring_buffer->read_index;
 VAR_1->ring_buffer->read_index = VAR_1->priv_read_index;






 if (!VAR_1->ring_buffer->feature_bits.feat_pending_send_sz)
  return;
 FUNC_3();






 VAR_3 = FUNC_0(VAR_1->ring_buffer->pending_send_sz);
 if (!VAR_3)
  return;





 FUNC_4();
 VAR_2 = FUNC_1(VAR_1);
 VAR_4 = FUNC_2(VAR_1, VAR_5);
 if (VAR_2 - VAR_4 > VAR_3)
  return;





 if (VAR_2 <= VAR_3)
  return;

 ++VAR_0->intr_in_full;
 FUNC_5(VAR_0);
}
