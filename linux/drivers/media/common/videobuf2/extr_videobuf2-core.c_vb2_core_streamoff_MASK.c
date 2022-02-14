
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int type; int waiting_for_buffers; int last_buffer_dequeued; int is_output; } ;


 int VAR_0 ;
 int FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (int,char*) ;

int FUNC_2(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 != VAR_1->type) {
  FUNC_1(1, "invalid stream type\n");
  return -VAR_0;
 }
 FUNC_0(VAR_1);
 VAR_1->waiting_for_buffers = !VAR_1->is_output;
 VAR_1->last_buffer_dequeued = 0;

 FUNC_1(3, "successful\n");
 return 0;
}
