
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int buf_struct_size; int min_buffers_needed; scalar_t__ num_buffers; int * buf_ops; int * mem_ops; int * ops; struct dvb_vb2_ctx* drv_priv; int io_modes; scalar_t__ is_output; int type; } ;
struct dvb_vb2_ctx {int nonblocking; int name; int state; int dvb_q; int slock; int mutex; struct vb2_queue vb_q; } ;
struct dvb_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int ,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dvb_vb2_ctx*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (struct vb2_queue*) ;
 int VAR_7 ;

int FUNC_7(struct dvb_vb2_ctx *VAR_8, const char *VAR_9, int VAR_10)
{
 struct vb2_queue *VAR_11 = &VAR_8->vb_q;
 int VAR_12;

 FUNC_2(VAR_8, 0, sizeof(struct dvb_vb2_ctx));
 VAR_11->type = VAR_0;

 VAR_11->is_output = 0;

 VAR_11->io_modes = VAR_4;
 VAR_11->drv_priv = VAR_8;
 VAR_11->buf_struct_size = sizeof(struct dvb_buffer);
 VAR_11->min_buffers_needed = 1;
 VAR_11->ops = &VAR_6;
 VAR_11->mem_ops = &VAR_7;
 VAR_11->buf_ops = &VAR_5;
 VAR_11->num_buffers = 0;
 VAR_12 = FUNC_6(VAR_11);
 if (VAR_12) {
  VAR_8->state = VAR_3;
  FUNC_1(1, "[%s] errno=%d\n", VAR_8->name, VAR_12);
  return VAR_12;
 }

 FUNC_3(&VAR_8->mutex);
 FUNC_4(&VAR_8->slock);
 FUNC_0(&VAR_8->dvb_q);

 FUNC_5(VAR_8->name, VAR_9, VAR_1);
 VAR_8->nonblocking = VAR_10;
 VAR_8->state = VAR_2;

 FUNC_1(3, "[%s]\n", VAR_8->name);

 return 0;
}
