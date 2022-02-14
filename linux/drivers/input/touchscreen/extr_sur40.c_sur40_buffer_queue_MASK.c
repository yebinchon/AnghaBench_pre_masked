
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct sur40_state {int qlock; int buf_list; } ;
struct sur40_buffer {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sur40_state* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_buffer *VAR_0)
{
 struct sur40_state *VAR_1 = FUNC_3(VAR_0->vb2_queue);
 struct sur40_buffer *VAR_2 = (struct sur40_buffer *)VAR_0;

 FUNC_1(&VAR_1->qlock);
 FUNC_0(&VAR_2->list, &VAR_1->buf_list);
 FUNC_2(&VAR_1->qlock);
}
