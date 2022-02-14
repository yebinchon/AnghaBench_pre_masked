
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct dvb_vb2_ctx {unsigned int buf_cnt; unsigned int buf_siz; int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,char*,int ,unsigned int,unsigned int) ;
 struct dvb_vb2_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_0,
   unsigned int *VAR_1, unsigned int *VAR_2,
   unsigned int VAR_3[], struct device *VAR_4[])
{
 struct dvb_vb2_ctx *VAR_5 = FUNC_1(VAR_0);

 VAR_5->buf_cnt = *VAR_1;
 *VAR_2 = 1;
 VAR_3[0] = VAR_5->buf_siz;






 FUNC_0(3, "[%s] count=%d, size=%d\n", VAR_5->name,
  *VAR_1, VAR_3[0]);

 return 0;
}
