
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {struct dvb_frontend** fe; } ;


 int VAR_0 ;

struct dvb_frontend *FUNC_0(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct dib9000_state *VAR_3 = VAR_1->demodulator_priv;

 if (VAR_2 >= VAR_0)
  return ((void*)0);
 return VAR_3->fe[VAR_2];
}
