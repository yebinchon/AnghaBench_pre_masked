
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int component_bus_speed; } ;



int FUNC_0(struct dvb_frontend *VAR_0, u16 VAR_1)
{
 struct dib9000_state *VAR_2 = VAR_0->demodulator_priv;

 VAR_2->component_bus_speed = VAR_1;
 return 0;
}
