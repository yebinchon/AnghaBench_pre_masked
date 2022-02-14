
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dvb_vb2_ctx {int vb_q; int name; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,struct file*,int *) ;

__poll_t FUNC_2(struct dvb_vb2_ctx *VAR_0, struct file *VAR_1,
        poll_table *VAR_2)
{
 FUNC_0(3, "[%s]\n", VAR_0->name);
 return FUNC_1(&VAR_0->vb_q, VAR_1, VAR_2);
}
