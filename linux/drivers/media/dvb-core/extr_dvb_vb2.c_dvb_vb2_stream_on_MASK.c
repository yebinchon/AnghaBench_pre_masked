
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct dvb_vb2_ctx {int name; int state; struct vb2_queue vb_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (struct vb2_queue*,int ) ;

int FUNC_2(struct dvb_vb2_ctx *VAR_2)
{
 struct vb2_queue *VAR_3 = &VAR_2->vb_q;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_3->type);
 if (VAR_4) {
  VAR_2->state = VAR_0;
  FUNC_0(1, "[%s] errno=%d\n", VAR_2->name, VAR_4);
  return VAR_4;
 }
 VAR_2->state |= VAR_1;
 FUNC_0(3, "[%s]\n", VAR_2->name);

 return 0;
}
