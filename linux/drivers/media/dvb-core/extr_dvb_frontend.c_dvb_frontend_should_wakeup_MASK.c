
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_private {scalar_t__ wakeup; } ;
struct dvb_frontend {struct dvb_frontend_private* frontend_priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dvb_frontend_private *VAR_1 = VAR_0->frontend_priv;

 if (VAR_1->wakeup) {
  VAR_1->wakeup = 0;
  return 1;
 }
 return FUNC_0(VAR_0);
}
