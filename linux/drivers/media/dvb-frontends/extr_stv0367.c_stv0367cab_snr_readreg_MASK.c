
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367_state {int dummy; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv0367_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct stv0367_state *VAR_4 = VAR_2->demodulator_priv;
 u32 VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_5 += (FUNC_0(VAR_4, VAR_1)
   + 256 * FUNC_0(VAR_4, VAR_0));
 }

 if (VAR_3)
  VAR_5 /= 10;

 return VAR_5;
}
