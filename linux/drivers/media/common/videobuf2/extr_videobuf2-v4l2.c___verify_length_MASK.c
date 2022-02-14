
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_buffer {unsigned int num_planes; TYPE_3__* planes; } ;
struct TYPE_5__ {TYPE_1__* planes; } ;
struct v4l2_buffer {scalar_t__ memory; unsigned int length; unsigned int bytesused; TYPE_2__ m; int type; } ;
struct TYPE_6__ {unsigned int length; } ;
struct TYPE_4__ {unsigned int length; int bytesused; unsigned int data_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_3, const struct v4l2_buffer *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (!FUNC_1(VAR_4->type))
  return 0;

 if (FUNC_0(VAR_4->type)) {
  for (VAR_7 = 0; VAR_7 < VAR_3->num_planes; ++VAR_7) {
   VAR_5 = (VAR_4->memory == VAR_2 ||
      VAR_4->memory == VAR_1)
          ? VAR_4->m.planes[VAR_7].length
    : VAR_3->planes[VAR_7].length;
   VAR_6 = VAR_4->m.planes[VAR_7].bytesused
      ? VAR_4->m.planes[VAR_7].bytesused : VAR_5;

   if (VAR_4->m.planes[VAR_7].bytesused > VAR_5)
    return -VAR_0;

   if (VAR_4->m.planes[VAR_7].data_offset > 0 &&
       VAR_4->m.planes[VAR_7].data_offset >= VAR_6)
    return -VAR_0;
  }
 } else {
  VAR_5 = (VAR_4->memory == VAR_2)
   ? VAR_4->length : VAR_3->planes[0].length;

  if (VAR_4->bytesused > VAR_5)
   return -VAR_0;
 }

 return 0;
}
