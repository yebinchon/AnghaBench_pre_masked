
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {scalar_t__ write_index; } ;



__attribute__((used)) static inline u64
FUNC_0(struct hv_ring_buffer_info *VAR_0)
{
 return (u64)VAR_0->ring_buffer->write_index << 32;
}
