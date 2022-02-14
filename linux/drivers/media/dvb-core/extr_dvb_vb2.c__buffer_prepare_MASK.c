
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct dvb_vb2_ctx {unsigned long buf_siz; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 struct dvb_vb2_ctx* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct dvb_vb2_ctx *VAR_2 = FUNC_1(VAR_1->vb2_queue);
 unsigned long VAR_3 = VAR_2->buf_siz;

 if (FUNC_2(VAR_1, 0) < VAR_3) {
  FUNC_0(1, "[%s] data will not fit into plane (%lu < %lu)\n",
   VAR_2->name, FUNC_2(VAR_1, 0), VAR_3);
  return -VAR_0;
 }

 FUNC_3(VAR_1, 0, VAR_3);
 FUNC_0(3, "[%s]\n", VAR_2->name);

 return 0;
}
