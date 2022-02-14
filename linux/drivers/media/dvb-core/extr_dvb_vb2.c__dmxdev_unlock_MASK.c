
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct dvb_vb2_ctx {int name; int mutex; } ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dvb_vb2_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_0)
{
 struct dvb_vb2_ctx *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_1(&VAR_1->mutex))
  FUNC_2(&VAR_1->mutex);
 FUNC_0(3, "[%s]\n", VAR_1->name);
}
