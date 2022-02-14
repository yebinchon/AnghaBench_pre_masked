
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int status; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct dvb_frontend *VAR_0)
{
 struct dib8000_state *VAR_1 = VAR_0->demodulator_priv;
 return VAR_1->status;
}
