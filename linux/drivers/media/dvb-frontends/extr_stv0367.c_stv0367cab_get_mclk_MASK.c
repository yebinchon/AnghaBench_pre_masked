
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367_state {int dummy; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct stv0367_state*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct dvb_frontend *VAR_4, u32 VAR_5)
{
 struct stv0367_state *VAR_6 = VAR_4->demodulator_priv;
 u32 VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10;


 if (FUNC_1(VAR_6, VAR_0) == 0) {
  VAR_9 = (u32)FUNC_1(VAR_6, VAR_2);
  if (VAR_9 == 0)
   VAR_9 = VAR_9 + 1;

  VAR_8 = (u32)FUNC_1(VAR_6, VAR_1);
  if (VAR_8 == 0)
   VAR_8 = VAR_8 + 1;

  VAR_10 = (u32)FUNC_1(VAR_6, VAR_3);

  if (VAR_10 > 5)
   VAR_10 = 5;

  VAR_7 = ((VAR_5 / 2) * VAR_9) / (VAR_8 * (1 << VAR_10));
  FUNC_0("stv0367cab_get_mclk BYPASS_PLLXN mclk_Hz=%d\n",
        VAR_7);
 } else
  VAR_7 = VAR_5;

 FUNC_0("stv0367cab_get_mclk final mclk_Hz=%d\n", VAR_7);

 return VAR_7;
}
