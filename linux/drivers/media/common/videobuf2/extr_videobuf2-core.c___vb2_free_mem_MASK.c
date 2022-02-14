
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int num_buffers; scalar_t__ memory; struct vb2_buffer** bufs; } ;
struct vb2_buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (struct vb2_buffer*) ;
 int FUNC_2 (struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_3(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 struct vb2_buffer *VAR_5;

 for (VAR_4 = VAR_2->num_buffers - VAR_3; VAR_4 < VAR_2->num_buffers;
      ++VAR_4) {
  VAR_5 = VAR_2->bufs[VAR_4];
  if (!VAR_5)
   continue;


  if (VAR_2->memory == VAR_1)
   FUNC_1(VAR_5);
  else if (VAR_2->memory == VAR_0)
   FUNC_0(VAR_5);
  else
   FUNC_2(VAR_5);
 }
}
