
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_private {int sem; } ;
struct dvb_fe_events {scalar_t__ eventw; scalar_t__ eventr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend_private *VAR_0,
       struct dvb_fe_events *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->sem);
 VAR_2 = VAR_1->eventw != VAR_1->eventr;
 FUNC_0(&VAR_0->sem);

 return VAR_2;
}
