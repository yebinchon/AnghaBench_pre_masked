
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; struct vb2_buffer** bufs; } ;
struct vb2_buffer {unsigned int num_planes; TYPE_2__* planes; } ;
struct TYPE_3__ {unsigned long offset; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_1, unsigned long VAR_2,
   unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct vb2_buffer *VAR_5;
 unsigned int VAR_6, VAR_7;






 for (VAR_6 = 0; VAR_6 < VAR_1->num_buffers; ++VAR_6) {
  VAR_5 = VAR_1->bufs[VAR_6];

  for (VAR_7 = 0; VAR_7 < VAR_5->num_planes; ++VAR_7) {
   if (VAR_5->planes[VAR_7].m.offset == VAR_2) {
    *VAR_3 = VAR_6;
    *VAR_4 = VAR_7;
    return 0;
   }
  }
 }

 return -VAR_0;
}
