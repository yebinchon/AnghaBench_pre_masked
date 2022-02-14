
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drxk_state* demodulator_priv; } ;
struct drxk_state {int fe_status; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, enum fe_status *VAR_1)
{
 struct drxk_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 FUNC_0(1, "\n");

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_1 = VAR_2->fe_status;

 return 0;
}
