
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct dvb_vb2_ctx {int name; } ;


 int FUNC_0 (int,char*,int ,unsigned int) ;
 struct dvb_vb2_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_0, unsigned int VAR_1)
{
 struct dvb_vb2_ctx *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(3, "[%s] count=%d\n", VAR_2->name, VAR_1);
 return 0;
}
