
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 struct dib7000p_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3 = FUNC_0(VAR_2, 235) & 0xffef;
 VAR_3 |= (VAR_1 & 0x1) << 4;
 FUNC_2("PID filter enabled %d\n", VAR_1);
 return FUNC_1(VAR_2, 235, VAR_3);
}
