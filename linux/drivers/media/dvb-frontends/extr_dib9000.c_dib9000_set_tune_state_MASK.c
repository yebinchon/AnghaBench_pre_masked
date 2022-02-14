
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int tune_state; int status; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_2, enum frontend_tune_state VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_2->demodulator_priv;
 VAR_4->tune_state = VAR_3;
 if (VAR_3 == VAR_0)
  VAR_4->status = VAR_1;

 return 0;
}
