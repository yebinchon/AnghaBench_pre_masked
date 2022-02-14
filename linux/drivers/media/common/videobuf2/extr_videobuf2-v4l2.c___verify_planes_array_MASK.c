
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {scalar_t__ num_planes; } ;
struct TYPE_2__ {int * planes; } ;
struct v4l2_buffer {scalar_t__ length; TYPE_1__ m; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_2, const struct v4l2_buffer *VAR_3)
{
 if (!FUNC_0(VAR_3->type))
  return 0;


 if (VAR_3->m.planes == ((void*)0)) {
  FUNC_1(1, "multi-planar buffer passed but planes array not provided\n");
  return -VAR_0;
 }

 if (VAR_3->length < VAR_2->num_planes || VAR_3->length > VAR_1) {
  FUNC_1(1, "incorrect planes array length, expected %d, got %d\n",
   VAR_2->num_planes, VAR_3->length);
  return -VAR_0;
 }

 return 0;
}
