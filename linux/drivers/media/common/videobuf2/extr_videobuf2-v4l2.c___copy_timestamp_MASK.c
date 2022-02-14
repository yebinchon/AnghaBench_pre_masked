
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int flags; int timecode; } ;
struct vb2_queue {scalar_t__ copy_timestamp; scalar_t__ is_output; } ;
struct vb2_buffer {int timestamp; struct vb2_queue* vb2_queue; } ;
struct v4l2_buffer {int flags; int timecode; int timestamp; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_1, const void *VAR_2)
{
 const struct v4l2_buffer *VAR_3 = VAR_2;
 struct vb2_v4l2_buffer *VAR_4 = FUNC_0(VAR_1);
 struct vb2_queue *VAR_5 = VAR_1->vb2_queue;

 if (VAR_5->is_output) {




  if (VAR_5->copy_timestamp)
   VAR_1->timestamp = FUNC_1(&VAR_3->timestamp);
  VAR_4->flags |= VAR_3->flags & VAR_0;
  if (VAR_3->flags & VAR_0)
   VAR_4->timecode = VAR_3->timecode;
 }
}
