
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vb2_queue {unsigned int num_buffers; TYPE_1__** bufs; } ;
struct TYPE_2__ {scalar_t__ timestamp; scalar_t__ copied_timestamp; } ;



int FUNC_0(const struct vb2_queue *VAR_0, u64 VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_2; VAR_3 < VAR_0->num_buffers; VAR_3++)
  if (VAR_0->bufs[VAR_3]->copied_timestamp &&
      VAR_0->bufs[VAR_3]->timestamp == VAR_1)
   return VAR_3;
 return -1;
}
