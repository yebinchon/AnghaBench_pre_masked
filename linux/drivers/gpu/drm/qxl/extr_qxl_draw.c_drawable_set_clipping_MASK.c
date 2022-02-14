
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_rect {int dummy; } ;
struct qxl_device {int dummy; } ;
struct TYPE_2__ {int data_size; scalar_t__ data; scalar_t__ prev_chunk; scalar_t__ next_chunk; } ;
struct qxl_clip_rects {unsigned int num_rects; TYPE_1__ chunk; } ;
struct qxl_bo {int dummy; } ;


 int FUNC_0 (struct qxl_bo*,void**) ;

__attribute__((used)) static struct qxl_rect *FUNC_1(struct qxl_device *VAR_0,
           unsigned int VAR_1,
           struct qxl_bo *VAR_2)
{
 struct qxl_clip_rects *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, (void **)&VAR_3);
 if (VAR_4) {
  return ((void*)0);
 }
 VAR_3->num_rects = VAR_1;
 VAR_3->chunk.next_chunk = 0;
 VAR_3->chunk.prev_chunk = 0;
 VAR_3->chunk.data_size = sizeof(struct qxl_rect) * VAR_1;
 return (struct qxl_rect *)VAR_3->chunk.data;
}
