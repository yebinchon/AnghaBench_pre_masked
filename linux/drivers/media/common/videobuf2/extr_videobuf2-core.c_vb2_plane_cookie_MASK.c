
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {unsigned int num_planes; TYPE_1__* planes; } ;
struct TYPE_2__ {int mem_priv; } ;


 void* FUNC_0 (struct vb2_buffer*,int ,int ) ;
 int VAR_0 ;

void *FUNC_1(struct vb2_buffer *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_1->num_planes || !VAR_1->planes[VAR_2].mem_priv)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_0, VAR_1->planes[VAR_2].mem_priv);
}
