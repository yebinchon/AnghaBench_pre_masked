
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int request_fd; } ;
struct vb2_buffer {int dummy; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_1(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_0(VAR_0);

 VAR_1->request_fd = -1;
}
