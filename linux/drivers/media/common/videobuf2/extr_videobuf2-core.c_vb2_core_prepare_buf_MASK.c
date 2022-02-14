
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct vb2_buffer** bufs; } ;
struct vb2_buffer {scalar_t__ state; scalar_t__ index; scalar_t__ prepared; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (struct vb2_queue*,int ,struct vb2_buffer*,void*) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_2 ;

int FUNC_3(struct vb2_queue *VAR_3, unsigned int VAR_4, void *VAR_5)
{
 struct vb2_buffer *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->bufs[VAR_4];
 if (VAR_6->state != VAR_1) {
  FUNC_2(1, "invalid buffer state %d\n",
   VAR_6->state);
  return -VAR_0;
 }
 if (VAR_6->prepared) {
  FUNC_2(1, "buffer already prepared\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;


 FUNC_1(VAR_3, VAR_2, VAR_6, VAR_5);

 FUNC_2(2, "prepare of buffer %d succeeded\n", VAR_6->index);

 return 0;
}
