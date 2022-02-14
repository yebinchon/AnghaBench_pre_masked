
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int status; } ;



__attribute__((used)) static u32 FUNC_0(struct dvb_frontend *VAR_0)
{
 struct dib9000_state *VAR_1 = VAR_0->demodulator_priv;
 return VAR_1->status;
}
