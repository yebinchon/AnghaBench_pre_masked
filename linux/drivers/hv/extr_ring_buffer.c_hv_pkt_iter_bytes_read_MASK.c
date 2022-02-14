
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {scalar_t__ priv_read_index; scalar_t__ ring_datasize; } ;



__attribute__((used)) static u32 FUNC_0(const struct hv_ring_buffer_info *VAR_0,
     u32 VAR_1)
{
 if (VAR_0->priv_read_index >= VAR_1)
  return VAR_0->priv_read_index - VAR_1;
 else
  return VAR_0->ring_datasize - VAR_1 +
   VAR_0->priv_read_index;
}
