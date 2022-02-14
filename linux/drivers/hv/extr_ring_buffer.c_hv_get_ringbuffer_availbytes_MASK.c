
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {scalar_t__ ring_datasize; TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {int write_index; int read_index; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct hv_ring_buffer_info *VAR_0,
        u32 *VAR_1, u32 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;


 VAR_3 = FUNC_0(VAR_0->ring_buffer->read_index);
 VAR_4 = FUNC_0(VAR_0->ring_buffer->write_index);
 VAR_5 = VAR_0->ring_datasize;

 *VAR_2 = VAR_4 >= VAR_3 ? VAR_5 - (VAR_4 - VAR_3) :
  VAR_3 - VAR_4;
 *VAR_1 = VAR_5 - *VAR_2;
}
