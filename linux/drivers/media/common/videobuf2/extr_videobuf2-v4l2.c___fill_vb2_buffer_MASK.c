
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_v4l2_buffer {TYPE_2__* planes; } ;
struct vb2_plane {int data_offset; int bytesused; int length; int m; } ;
struct vb2_buffer {unsigned int num_planes; TYPE_1__* vb2_queue; scalar_t__ timestamp; } ;
struct TYPE_4__ {int data_offset; int bytesused; int length; int m; } ;
struct TYPE_3__ {scalar_t__ memory; int copy_timestamp; } ;


 scalar_t__ VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct vb2_buffer *VAR_1, struct vb2_plane *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 if (!VAR_1->vb2_queue->copy_timestamp)
  VAR_1->timestamp = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_planes; ++VAR_4) {
  if (VAR_1->vb2_queue->memory != VAR_0) {
   VAR_2[VAR_4].m = VAR_3->planes[VAR_4].m;
   VAR_2[VAR_4].length = VAR_3->planes[VAR_4].length;
  }
  VAR_2[VAR_4].bytesused = VAR_3->planes[VAR_4].bytesused;
  VAR_2[VAR_4].data_offset = VAR_3->planes[VAR_4].data_offset;
 }
 return 0;
}
