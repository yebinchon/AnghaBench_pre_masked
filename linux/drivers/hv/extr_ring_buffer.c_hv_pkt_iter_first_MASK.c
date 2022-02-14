
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpacket_descriptor {int len8; } ;
struct hv_ring_buffer_info {int priv_read_index; } ;
struct vmbus_channel {struct hv_ring_buffer_info inbound; } ;


 struct vmpacket_descriptor* FUNC_0 (struct hv_ring_buffer_info*) ;
 int FUNC_1 (struct hv_ring_buffer_info*) ;
 int FUNC_2 (char*) ;

struct vmpacket_descriptor *FUNC_3(struct vmbus_channel *VAR_0)
{
 struct hv_ring_buffer_info *VAR_1 = &VAR_0->inbound;
 struct vmpacket_descriptor *VAR_2;

 if (FUNC_1(VAR_1) < sizeof(struct vmpacket_descriptor))
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1) + VAR_1->priv_read_index;
 if (VAR_2)
  FUNC_2((char *)VAR_2 + (VAR_2->len8 << 3));

 return VAR_2;
}
