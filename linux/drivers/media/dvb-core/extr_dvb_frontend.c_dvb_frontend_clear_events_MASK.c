
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_fe_events {int mtx; int eventw; int eventr; } ;
struct dvb_frontend_private {struct dvb_fe_events events; } ;
struct dvb_frontend {struct dvb_frontend_private* frontend_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dvb_frontend_private *VAR_1 = VAR_0->frontend_priv;
 struct dvb_fe_events *VAR_2 = &VAR_1->events;

 FUNC_0(&VAR_2->mtx);
 VAR_2->eventr = VAR_2->eventw;
 FUNC_1(&VAR_2->mtx);
}
