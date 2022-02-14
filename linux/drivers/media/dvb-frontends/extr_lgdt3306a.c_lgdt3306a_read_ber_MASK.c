
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lgdt3306a_state {int dummy; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct lgdt3306a_state *VAR_2 = VAR_0->demodulator_priv;
 u32 VAR_3;

 *VAR_1 = 0;



 VAR_3 = FUNC_1(VAR_2, 0x00fc);
 VAR_3 = (VAR_3 << 8) | FUNC_1(VAR_2, 0x00fd);
 VAR_3 = (VAR_3 << 8) | FUNC_1(VAR_2, 0x00fe);
 VAR_3 = (VAR_3 << 8) | FUNC_1(VAR_2, 0x00ff);
 *VAR_1 = VAR_3;
 FUNC_0("ber=%u\n", VAR_3);

 return 0;
}
