
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct vb2_buffer {scalar_t__ state; struct vb2_queue* vb2_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vb2_queue*,int ,struct vb2_buffer*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct vb2_buffer *VAR_2)
{
 struct vb2_queue *VAR_3 = VAR_2->vb2_queue;


 if (VAR_2->state == VAR_0)
  return;

 VAR_2->state = VAR_0;

 FUNC_0(VAR_3, VAR_1, VAR_2);
}
