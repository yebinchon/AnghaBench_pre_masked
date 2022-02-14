
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_vb2_ctx {scalar_t__ buf_siz; int buf_cnt; int name; int state; int vb_q; } ;
struct dmx_requestbuffers {scalar_t__ size; int count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int ,scalar_t__,...) ;
 int FUNC_1 (int *,int ,int *) ;

int FUNC_2(struct dvb_vb2_ctx *VAR_4, struct dmx_requestbuffers *VAR_5)
{
 int VAR_6;


 if (VAR_5->size > VAR_0)
  VAR_5->size = VAR_0;



 VAR_4->buf_siz = VAR_5->size;
 VAR_4->buf_cnt = VAR_5->count;
 VAR_6 = FUNC_1(&VAR_4->vb_q, VAR_3, &VAR_5->count);
 if (VAR_6) {
  VAR_4->state = VAR_1;
  FUNC_0(1, "[%s] count=%d size=%d errno=%d\n", VAR_4->name,
   VAR_4->buf_cnt, VAR_4->buf_siz, VAR_6);
  return VAR_6;
 }
 VAR_4->state |= VAR_2;
 FUNC_0(3, "[%s] count=%d size=%d\n", VAR_4->name,
  VAR_4->buf_cnt, VAR_4->buf_siz);

 return 0;
}
