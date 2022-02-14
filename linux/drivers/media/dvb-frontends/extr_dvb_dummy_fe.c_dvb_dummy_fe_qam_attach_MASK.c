
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct dvb_dummy_fe_state* demodulator_priv; int ops; } ;
struct dvb_dummy_fe_state {struct dvb_frontend frontend; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_dummy_fe_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;

struct dvb_frontend *FUNC_2(void)
{
 struct dvb_dummy_fe_state* VAR_2 = ((void*)0);


 VAR_2 = FUNC_0(sizeof(struct dvb_dummy_fe_state), VAR_0);
 if (!VAR_2)
  return ((void*)0);


 FUNC_1(&VAR_2->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_2->frontend.demodulator_priv = VAR_2;
 return &VAR_2->frontend;
}
