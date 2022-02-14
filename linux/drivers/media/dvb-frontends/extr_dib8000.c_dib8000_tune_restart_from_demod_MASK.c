
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int tune_state; int status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_2)
{
 struct dib8000_state *VAR_3 = VAR_2->demodulator_priv;

 VAR_3->status = VAR_1;
 VAR_3->tune_state = VAR_0;
 return 0;
}
