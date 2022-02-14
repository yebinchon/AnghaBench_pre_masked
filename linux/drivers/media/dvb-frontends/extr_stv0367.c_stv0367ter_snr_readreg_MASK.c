
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv0367_state {int dummy; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv0367_state*,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u32 FUNC_2(struct dvb_frontend *VAR_2)
{
 struct stv0367_state *VAR_3 = VAR_2->demodulator_priv;
 u32 VAR_4 = 0;
 int VAR_5 = 0;
 u8 VAR_6 = FUNC_0(VAR_3, VAR_1);

 while (VAR_5 < 10) {
  FUNC_1(2000, 3000);
  if (VAR_6 == 0x50)
   VAR_4 += FUNC_0(VAR_3, VAR_0) / 4;
  else
   VAR_4 += 125 * FUNC_0(VAR_3, VAR_0);

  VAR_5++;
 }
 VAR_4 /= 10;

 return VAR_4;
}
