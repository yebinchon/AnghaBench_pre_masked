
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct cx24123_state *VAR_2 = VAR_0->demodulator_priv;



 *VAR_1 = 65535 - (((u16)FUNC_0(VAR_2, 0x18) << 8) |
    (u16)FUNC_0(VAR_2, 0x19));

 FUNC_1("read S/N index = %d\n", *VAR_1);

 return 0;
}
