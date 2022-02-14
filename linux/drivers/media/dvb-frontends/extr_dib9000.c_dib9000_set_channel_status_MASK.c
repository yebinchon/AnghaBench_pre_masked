
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_parametersContext {int dummy; } ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int channel_status; } ;


 int FUNC_0 (int *,struct dvb_frontend_parametersContext*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, struct dvb_frontend_parametersContext *VAR_1)
{
 struct dib9000_state *VAR_2 = VAR_0->demodulator_priv;

 FUNC_0(&VAR_2->channel_status, VAR_1, sizeof(struct dvb_frontend_parametersContext));
 return 0;
}
