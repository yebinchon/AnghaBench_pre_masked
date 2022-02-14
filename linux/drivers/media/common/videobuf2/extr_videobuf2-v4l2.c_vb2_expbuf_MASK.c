
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct v4l2_exportbuffer {int flags; int plane; int index; int type; int fd; } ;


 int FUNC_0 (struct vb2_queue*,int *,int ,int ,int ,int ) ;

int FUNC_1(struct vb2_queue *VAR_0, struct v4l2_exportbuffer *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->fd, VAR_1->type, VAR_1->index,
    VAR_1->plane, VAR_1->flags);
}
