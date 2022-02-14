
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmpacket_descriptor {int len8; } ;
struct hv_ring_buffer_info {scalar_t__ ring_datasize; scalar_t__ priv_read_index; } ;
struct vmbus_channel {struct hv_ring_buffer_info inbound; } ;


 scalar_t__ VAR_0 ;
 struct vmpacket_descriptor* FUNC_0 (struct vmbus_channel*) ;

struct vmpacket_descriptor *
FUNC_1(struct vmbus_channel *VAR_1,
     const struct vmpacket_descriptor *VAR_2)
{
 struct hv_ring_buffer_info *VAR_3 = &VAR_1->inbound;
 u32 VAR_4 = VAR_2->len8 << 3;
 u32 VAR_5 = VAR_3->ring_datasize;


 VAR_3->priv_read_index += VAR_4 + VAR_0;
 if (VAR_3->priv_read_index >= VAR_5)
  VAR_3->priv_read_index -= VAR_5;


 return FUNC_0(VAR_1);
}
