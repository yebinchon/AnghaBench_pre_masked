
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_private {int dvbdev; } ;
struct TYPE_2__ {int release; } ;
struct dvb_frontend {TYPE_1__ ops; struct dvb_frontend_private* frontend_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dvb_frontend_private*) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_0)
{
 struct dvb_frontend_private *VAR_1 = VAR_0->frontend_priv;

 if (VAR_1)
  FUNC_0(VAR_1->dvbdev);

 FUNC_1(VAR_0, VAR_0->ops.release);

 FUNC_2(VAR_1);
}
