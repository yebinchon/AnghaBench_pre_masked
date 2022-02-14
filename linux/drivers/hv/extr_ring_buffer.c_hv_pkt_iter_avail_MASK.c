
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {scalar_t__ priv_read_index; scalar_t__ ring_datasize; TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {int write_index; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct hv_ring_buffer_info *VAR_0)
{
 u32 VAR_1 = VAR_0->priv_read_index;
 u32 VAR_2 = FUNC_0(VAR_0->ring_buffer->write_index);

 if (VAR_2 >= VAR_1)
  return VAR_2 - VAR_1;
 else
  return (VAR_0->ring_datasize - VAR_1) + VAR_2;
}
