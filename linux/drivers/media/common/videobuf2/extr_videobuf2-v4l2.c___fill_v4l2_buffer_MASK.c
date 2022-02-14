
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int flags; scalar_t__ request_fd; int sequence; int timecode; int field; } ;
struct vb2_queue {scalar_t__ memory; int timestamp_flags; int copy_timestamp; scalar_t__ is_multiplanar; } ;
struct TYPE_6__ {int fd; int userptr; int offset; } ;
struct vb2_plane {unsigned int length; TYPE_3__ m; scalar_t__ bytesused; int data_offset; } ;
struct vb2_buffer {unsigned int num_planes; int state; scalar_t__ prepared; scalar_t__ synced; struct vb2_plane* planes; int timestamp; int memory; int type; int index; struct vb2_queue* vb2_queue; } ;
struct TYPE_4__ {int fd; int userptr; int mem_offset; } ;
struct v4l2_plane {unsigned int length; int reserved; int data_offset; TYPE_1__ m; scalar_t__ bytesused; } ;
struct TYPE_5__ {int fd; int userptr; int offset; struct v4l2_plane* planes; } ;
struct v4l2_buffer {int flags; scalar_t__ request_fd; unsigned int length; TYPE_2__ m; scalar_t__ bytesused; scalar_t__ reserved2; int sequence; int timecode; int timestamp; int field; int memory; int type; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;







 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct vb2_buffer*) ;
 scalar_t__ FUNC_3 (struct vb2_queue*,struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_4(struct vb2_buffer *VAR_13, void *VAR_14)
{
 struct v4l2_buffer *VAR_15 = VAR_14;
 struct vb2_v4l2_buffer *VAR_16 = FUNC_2(VAR_13);
 struct vb2_queue *VAR_17 = VAR_13->vb2_queue;
 unsigned int VAR_18;


 VAR_15->index = VAR_13->index;
 VAR_15->type = VAR_13->type;
 VAR_15->memory = VAR_13->memory;
 VAR_15->bytesused = 0;

 VAR_15->flags = VAR_16->flags;
 VAR_15->field = VAR_16->field;
 VAR_15->timestamp = FUNC_1(VAR_13->timestamp);
 VAR_15->timecode = VAR_16->timecode;
 VAR_15->sequence = VAR_16->sequence;
 VAR_15->reserved2 = 0;
 VAR_15->request_fd = 0;

 if (VAR_17->is_multiplanar) {




  VAR_15->length = VAR_13->num_planes;
  for (VAR_18 = 0; VAR_18 < VAR_13->num_planes; ++VAR_18) {
   struct v4l2_plane *VAR_19 = &VAR_15->m.planes[VAR_18];
   struct vb2_plane *VAR_20 = &VAR_13->planes[VAR_18];

   VAR_19->bytesused = VAR_20->bytesused;
   VAR_19->length = VAR_20->length;
   if (VAR_17->memory == VAR_11)
    VAR_19->m.mem_offset = VAR_20->m.offset;
   else if (VAR_17->memory == VAR_12)
    VAR_19->m.userptr = VAR_20->m.userptr;
   else if (VAR_17->memory == VAR_10)
    VAR_19->m.fd = VAR_20->m.fd;
   VAR_19->data_offset = VAR_20->data_offset;
   FUNC_0(VAR_19->reserved, 0, sizeof(VAR_19->reserved));
  }
 } else {




  VAR_15->length = VAR_13->planes[0].length;
  VAR_15->bytesused = VAR_13->planes[0].bytesused;
  if (VAR_17->memory == VAR_11)
   VAR_15->m.offset = VAR_13->planes[0].m.offset;
  else if (VAR_17->memory == VAR_12)
   VAR_15->m.userptr = VAR_13->planes[0].m.userptr;
  else if (VAR_17->memory == VAR_10)
   VAR_15->m.fd = VAR_13->planes[0].m.fd;
 }




 VAR_15->flags &= ~VAR_0;
 VAR_15->flags |= VAR_17->timestamp_flags & VAR_8;
 if (!VAR_17->copy_timestamp) {




  VAR_15->flags &= ~VAR_9;
  VAR_15->flags |= VAR_17->timestamp_flags & VAR_9;
 }

 switch (VAR_13->state) {
 case 128:
 case 134:
  VAR_15->flags |= VAR_6;
  break;
 case 130:
  VAR_15->flags |= VAR_3;
  break;
 case 131:
  VAR_15->flags |= VAR_2;

 case 132:
  VAR_15->flags |= VAR_1;
  break;
 case 129:
 case 133:

  break;
 }

 if ((VAR_13->state == 133 ||
      VAR_13->state == 130) &&
     VAR_13->synced && VAR_13->prepared)
  VAR_15->flags |= VAR_5;

 if (FUNC_3(VAR_17, VAR_13))
  VAR_15->flags |= VAR_4;
 if (VAR_16->request_fd >= 0) {
  VAR_15->flags |= VAR_7;
  VAR_15->request_fd = VAR_16->request_fd;
 }
}
