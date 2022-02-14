
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3305_state {int dummy; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int) ;
 int FUNC_2 (struct lgdt3305_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2)
{
 struct lgdt3305_state *VAR_3 = VAR_2->demodulator_priv;
 u8 VAR_4, VAR_5;

 FUNC_0("\n");

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = FUNC_2(VAR_3, VAR_1);


 VAR_4 &= ~0x01;

 VAR_4 |= 0x02;

 VAR_4 |= 0x04;


 VAR_5 &= ~0x01;

 VAR_5 &= ~0x02;

 FUNC_1(VAR_3, VAR_0, VAR_4);
 FUNC_1(VAR_3, VAR_1, VAR_5);

 return 0;
}
