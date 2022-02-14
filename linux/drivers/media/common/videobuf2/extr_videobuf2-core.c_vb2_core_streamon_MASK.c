
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int type; int streaming; scalar_t__ num_buffers; scalar_t__ min_buffers_needed; scalar_t__ queued_count; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct vb2_queue*) ;
 int FUNC_2 (struct vb2_queue*) ;

int FUNC_3(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (VAR_2 != VAR_1->type) {
  FUNC_0(1, "invalid stream type\n");
  return -VAR_0;
 }

 if (VAR_1->streaming) {
  FUNC_0(3, "already streaming\n");
  return 0;
 }

 if (!VAR_1->num_buffers) {
  FUNC_0(1, "no buffers have been allocated\n");
  return -VAR_0;
 }

 if (VAR_1->num_buffers < VAR_1->min_buffers_needed) {
  FUNC_0(1, "need at least %u allocated buffers\n",
    VAR_1->min_buffers_needed);
  return -VAR_0;
 }





 if (VAR_1->queued_count >= VAR_1->min_buffers_needed) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 VAR_1->streaming = 1;

 FUNC_0(3, "successful\n");
 return 0;
}
