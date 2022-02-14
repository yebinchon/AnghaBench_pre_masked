
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long virt_boundary_mask; int max_segment_size; } ;
struct request_queue {TYPE_1__ limits; } ;


 int VAR_0 ;

void FUNC_0(struct request_queue *VAR_1, unsigned long VAR_2)
{
 VAR_1->limits.virt_boundary_mask = VAR_2;







 if (VAR_2)
  VAR_1->limits.max_segment_size = VAR_0;
}
