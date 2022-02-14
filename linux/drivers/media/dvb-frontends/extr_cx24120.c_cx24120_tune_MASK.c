
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {TYPE_1__* i2c; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, bool VAR_1,
   unsigned int VAR_2, unsigned int *VAR_3,
   enum fe_status *VAR_4)
{
 struct cx24120_state *VAR_5 = VAR_0->demodulator_priv;
 int VAR_6;

 FUNC_2(&VAR_5->i2c->dev, "(%d)\n", VAR_1);



 if (VAR_1) {
  VAR_6 = FUNC_1(VAR_0);
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_0(VAR_0, VAR_4);
}
