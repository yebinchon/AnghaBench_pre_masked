
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int owned_by_drv_count; } ;
struct vb2_buffer {int state; struct vb2_queue* vb2_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_2 (struct vb2_queue*,struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_2)
{
 struct vb2_queue *VAR_3 = VAR_2->vb2_queue;

 VAR_2->state = VAR_0;
 FUNC_0(&VAR_3->owned_by_drv_count);

 FUNC_2(VAR_3, VAR_2);

 FUNC_1(VAR_2, VAR_1, VAR_2);
}
