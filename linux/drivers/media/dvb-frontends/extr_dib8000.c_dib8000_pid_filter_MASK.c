
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,scalar_t__,int) ;
 int FUNC_1 (char*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct dib8000_state *VAR_4 = VAR_0->demodulator_priv;
 FUNC_1("Index %x, PID %d, OnOff %d\n", VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_4, 305 + VAR_1, VAR_3 ? (1 << 13) | VAR_2 : 0);
}
