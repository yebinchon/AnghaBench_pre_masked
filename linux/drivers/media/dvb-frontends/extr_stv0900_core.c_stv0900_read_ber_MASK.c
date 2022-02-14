
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int dummy; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0900_internal*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct stv0900_state *VAR_2 = VAR_0->demodulator_priv;
 struct stv0900_internal *VAR_3 = VAR_2->internal;

 *VAR_1 = FUNC_0(VAR_3, VAR_2->demod);

 return 0;
}
