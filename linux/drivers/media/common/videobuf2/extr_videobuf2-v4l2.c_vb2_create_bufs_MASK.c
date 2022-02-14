
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vb2_queue {int num_buffers; } ;
struct TYPE_15__ {unsigned int buffersize; } ;
struct TYPE_14__ {unsigned int buffersize; } ;
struct TYPE_13__ {unsigned int io_size; } ;
struct TYPE_12__ {unsigned int samples_per_line; unsigned int* count; } ;
struct TYPE_11__ {unsigned int sizeimage; } ;
struct TYPE_10__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct TYPE_16__ {TYPE_7__ meta; TYPE_6__ sdr; TYPE_5__ sliced; TYPE_4__ vbi; TYPE_3__ pix; TYPE_2__ pix_mp; } ;
struct v4l2_format {int type; TYPE_8__ fmt; } ;
struct v4l2_create_buffers {scalar_t__ count; int memory; int index; int capabilities; struct v4l2_format format; } ;
struct TYPE_9__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vb2_queue*,int *) ;
 int FUNC_1 (struct vb2_queue*,int ,scalar_t__*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct vb2_queue*,int ,int) ;

int FUNC_3(struct vb2_queue *VAR_3, struct v4l2_create_buffers *VAR_4)
{
 unsigned VAR_5 = 1;
 unsigned VAR_6[VAR_2];
 struct v4l2_format *VAR_7 = &VAR_4->format;
 int VAR_8 = FUNC_2(VAR_3, VAR_4->memory, VAR_7->type);
 unsigned VAR_9;

 FUNC_0(VAR_3, &VAR_4->capabilities);
 VAR_4->index = VAR_3->num_buffers;
 if (VAR_4->count == 0)
  return VAR_8 != -VAR_0 ? VAR_8 : 0;

 switch (VAR_7->type) {
 case 130:
 case 128:
  VAR_5 = VAR_7->fmt.pix_mp.num_planes;
  if (VAR_5 == 0 ||
      VAR_5 > VAR_2)
   return -VAR_1;
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   VAR_6[VAR_9] =
    VAR_7->fmt.pix_mp.plane_fmt[VAR_9].sizeimage;
  break;
 case 131:
 case 129:
  VAR_6[0] = VAR_7->fmt.pix.sizeimage;
  break;
 case 133:
 case 132:
  VAR_6[0] = VAR_7->fmt.vbi.samples_per_line *
   (VAR_7->fmt.vbi.count[0] + VAR_7->fmt.vbi.count[1]);
  break;
 case 135:
 case 134:
  VAR_6[0] = VAR_7->fmt.sliced.io_size;
  break;
 case 137:
 case 136:
  VAR_6[0] = VAR_7->fmt.sdr.buffersize;
  break;
 case 139:
 case 138:
  VAR_6[0] = VAR_7->fmt.meta.buffersize;
  break;
 default:
  return -VAR_1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  if (VAR_6[VAR_9] == 0)
   return -VAR_1;
 return VAR_8 ? VAR_8 : FUNC_1(VAR_3, VAR_4->memory,
  &VAR_4->count, VAR_5, VAR_6);
}
