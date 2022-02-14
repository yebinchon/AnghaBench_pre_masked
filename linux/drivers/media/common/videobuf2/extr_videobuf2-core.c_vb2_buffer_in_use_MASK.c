
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct vb2_buffer {unsigned int num_planes; TYPE_1__* planes; } ;
struct TYPE_2__ {void* mem_priv; } ;


 int FUNC_0 (struct vb2_buffer*,int ,void*) ;
 int VAR_0 ;

bool FUNC_1(struct vb2_queue *VAR_1, struct vb2_buffer *VAR_2)
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_planes; ++VAR_3) {
  void *VAR_4 = VAR_2->planes[VAR_3].mem_priv;






  if (VAR_4 && FUNC_0(VAR_2, VAR_0, VAR_4) > 1)
   return 1;
 }
 return 0;
}
