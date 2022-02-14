
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {scalar_t__ reg_offs; } ;


 int FUNC_0 (struct dib7000m_state*,scalar_t__,int) ;
 int FUNC_1 (char*,scalar_t__,int,scalar_t__) ;

int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct dib7000m_state *VAR_4 = VAR_0->demodulator_priv;
 FUNC_1("PID filter: index %x, PID %d, OnOff %d\n", VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_4, 300 + VAR_4->reg_offs + VAR_1,
   VAR_3 ? (1 << 13) | VAR_2 : 0);
}
