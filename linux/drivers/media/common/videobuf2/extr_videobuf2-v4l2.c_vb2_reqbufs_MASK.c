
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct v4l2_requestbuffers {int count; int memory; int capabilities; int type; } ;


 int FUNC_0 (struct vb2_queue*,int *) ;
 int FUNC_1 (struct vb2_queue*,int ,int *) ;
 int FUNC_2 (struct vb2_queue*,int ,int ) ;

int FUNC_3(struct vb2_queue *VAR_0, struct v4l2_requestbuffers *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0, VAR_1->memory, VAR_1->type);

 FUNC_0(VAR_0, &VAR_1->capabilities);
 return VAR_2 ? VAR_2 : FUNC_1(VAR_0, VAR_1->memory, &VAR_1->count);
}
