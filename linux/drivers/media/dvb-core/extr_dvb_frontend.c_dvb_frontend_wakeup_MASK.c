
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_private {int wakeup; int wait_queue; } ;
struct dvb_frontend {struct dvb_frontend_private* frontend_priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dvb_frontend_private *VAR_1 = VAR_0->frontend_priv;

 VAR_1->wakeup = 1;
 FUNC_0(&VAR_1->wait_queue);
}
