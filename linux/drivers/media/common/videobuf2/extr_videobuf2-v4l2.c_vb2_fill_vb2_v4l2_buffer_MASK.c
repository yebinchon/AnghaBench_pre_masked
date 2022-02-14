
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int request_fd; int flags; scalar_t__ field; scalar_t__ sequence; struct vb2_plane* planes; } ;
struct vb2_queue {int copy_timestamp; scalar_t__ allow_zero_bytesused; scalar_t__ is_output; } ;
struct TYPE_8__ {int offset; int fd; int userptr; } ;
struct vb2_plane {scalar_t__ length; scalar_t__ bytesused; scalar_t__ data_offset; TYPE_3__ m; } ;
struct vb2_buffer {unsigned int num_planes; struct vb2_queue* vb2_queue; TYPE_5__* planes; } ;
struct TYPE_6__ {int fd; int userptr; } ;
struct v4l2_plane {scalar_t__ length; scalar_t__ bytesused; scalar_t__ data_offset; TYPE_1__ m; } ;
struct TYPE_7__ {int fd; int userptr; struct v4l2_plane* planes; } ;
struct v4l2_buffer {scalar_t__ field; int memory; scalar_t__ length; scalar_t__ bytesused; int flags; int type; TYPE_2__ m; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_10__ {scalar_t__ length; TYPE_4__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;


 int FUNC_2 (struct vb2_buffer*,struct v4l2_buffer*) ;
 int FUNC_3 (int,char*,...) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 int FUNC_5 (struct vb2_buffer*) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_7, struct v4l2_buffer *VAR_8)
{
 struct vb2_queue *VAR_9 = VAR_7->vb2_queue;
 struct vb2_v4l2_buffer *VAR_10 = FUNC_4(VAR_7);
 struct vb2_plane *VAR_11 = VAR_10->planes;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_7, VAR_8);
 if (VAR_13 < 0) {
  FUNC_3(1, "plane parameters verification failed: %d\n", VAR_13);
  return VAR_13;
 }
 if (VAR_8->field == VAR_6 && VAR_9->is_output) {
  FUNC_3(1, "the field is incorrectly set to ALTERNATE for an output buffer\n");
  return -VAR_0;
 }
 VAR_10->sequence = 0;
 VAR_10->request_fd = -1;

 if (FUNC_0(VAR_8->type)) {
  switch (VAR_8->memory) {
  case 128:
   for (VAR_12 = 0; VAR_12 < VAR_7->num_planes; ++VAR_12) {
    VAR_11[VAR_12].m.userptr =
     VAR_8->m.planes[VAR_12].m.userptr;
    VAR_11[VAR_12].length =
     VAR_8->m.planes[VAR_12].length;
   }
   break;
  case 129:
   for (VAR_12 = 0; VAR_12 < VAR_7->num_planes; ++VAR_12) {
    VAR_11[VAR_12].m.fd =
     VAR_8->m.planes[VAR_12].m.fd;
    VAR_11[VAR_12].length =
     VAR_8->m.planes[VAR_12].length;
   }
   break;
  default:
   for (VAR_12 = 0; VAR_12 < VAR_7->num_planes; ++VAR_12) {
    VAR_11[VAR_12].m.offset =
     VAR_7->planes[VAR_12].m.offset;
    VAR_11[VAR_12].length =
     VAR_7->planes[VAR_12].length;
   }
   break;
  }


  if (FUNC_1(VAR_8->type)) {
   for (VAR_12 = 0; VAR_12 < VAR_7->num_planes; ++VAR_12) {
    struct vb2_plane *VAR_14 = &VAR_11[VAR_12];
    struct v4l2_plane *VAR_15 = &VAR_8->m.planes[VAR_12];

    if (VAR_15->bytesused == 0)
     FUNC_5(VAR_7);

    if (VAR_7->vb2_queue->allow_zero_bytesused)
     VAR_14->bytesused = VAR_15->bytesused;
    else
     VAR_14->bytesused = VAR_15->bytesused ?
      VAR_15->bytesused : VAR_14->length;
    VAR_14->data_offset = VAR_15->data_offset;
   }
  }
 } else {
  switch (VAR_8->memory) {
  case 128:
   VAR_11[0].m.userptr = VAR_8->m.userptr;
   VAR_11[0].length = VAR_8->length;
   break;
  case 129:
   VAR_11[0].m.fd = VAR_8->m.fd;
   VAR_11[0].length = VAR_8->length;
   break;
  default:
   VAR_11[0].m.offset = VAR_7->planes[0].m.offset;
   VAR_11[0].length = VAR_7->planes[0].length;
   break;
  }

  VAR_11[0].data_offset = 0;
  if (FUNC_1(VAR_8->type)) {
   if (VAR_8->bytesused == 0)
    FUNC_5(VAR_7);

   if (VAR_7->vb2_queue->allow_zero_bytesused)
    VAR_11[0].bytesused = VAR_8->bytesused;
   else
    VAR_11[0].bytesused = VAR_8->bytesused ?
     VAR_8->bytesused : VAR_11[0].length;
  } else
   VAR_11[0].bytesused = 0;

 }


 VAR_10->flags = VAR_8->flags & ~VAR_1;
 if (!VAR_7->vb2_queue->copy_timestamp || !FUNC_1(VAR_8->type)) {





  VAR_10->flags &= ~VAR_5;
 }

 if (FUNC_1(VAR_8->type)) {






  VAR_10->flags &= ~VAR_4;
  VAR_10->field = VAR_8->field;
 } else {

  VAR_10->flags &= ~VAR_2;

  VAR_10->flags &= ~VAR_3;
 }

 return 0;
}
