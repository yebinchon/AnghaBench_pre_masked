
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_vb2_ctx {int name; int vb_q; } ;
struct dmx_buffer {int index; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int *,int ,struct dmx_buffer*) ;

int FUNC_2(struct dvb_vb2_ctx *VAR_0, struct dmx_buffer *VAR_1)
{
 FUNC_1(&VAR_0->vb_q, VAR_1->index, VAR_1);
 FUNC_0(3, "[%s] index=%d\n", VAR_0->name, VAR_1->index);
 return 0;
}
