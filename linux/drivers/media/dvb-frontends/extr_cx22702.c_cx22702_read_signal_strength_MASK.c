
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct cx22702_state* demodulator_priv; } ;
struct cx22702_state {int dummy; } ;


 int FUNC_0 (struct cx22702_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
 u16 *VAR_1)
{
 struct cx22702_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3;
 VAR_3 = FUNC_0(VAR_2, 0x23);
 if (VAR_3 & 0x80) {
  *VAR_1 = 0;
 } else {
  VAR_3 = ~VAR_3 & 0x7f;

  *VAR_1 = (VAR_3 << 9) | (VAR_3 << 2) | (VAR_3 >> 5);
 }

 return 0;
}
