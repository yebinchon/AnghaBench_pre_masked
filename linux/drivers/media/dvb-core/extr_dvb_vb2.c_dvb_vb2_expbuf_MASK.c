
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct dvb_vb2_ctx {int name; struct vb2_queue vb_q; } ;
struct dmx_exportbuffer {int fd; int index; int flags; } ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int FUNC_1 (struct vb2_queue*,int*,int ,int ,int ,int ) ;

int FUNC_2(struct dvb_vb2_ctx *VAR_0, struct dmx_exportbuffer *VAR_1)
{
 struct vb2_queue *VAR_2 = &VAR_0->vb_q;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_0->vb_q, &VAR_1->fd, VAR_2->type, VAR_1->index,
         0, VAR_1->flags);
 if (VAR_3) {
  FUNC_0(1, "[%s] index=%d errno=%d\n", VAR_0->name,
   VAR_1->index, VAR_3);
  return VAR_3;
 }
 FUNC_0(3, "[%s] index=%d fd=%d\n", VAR_0->name, VAR_1->index, VAR_1->fd);

 return 0;
}
