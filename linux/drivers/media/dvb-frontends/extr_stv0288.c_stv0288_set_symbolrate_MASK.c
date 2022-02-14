
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0288_state {int dummy; } ;
struct dvb_frontend {struct stv0288_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct stv0288_state*,int,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u32 VAR_2)
{
 struct stv0288_state *VAR_3 = VAR_1->demodulator_priv;
 unsigned int VAR_4;
 unsigned char VAR_5[3];

 if ((VAR_2 < 1000000) || (VAR_2 > 45000000))
  return -VAR_0;

 FUNC_1(VAR_3, 0x22, 0);
 FUNC_1(VAR_3, 0x23, 0);
 FUNC_1(VAR_3, 0x2b, 0xff);
 FUNC_1(VAR_3, 0x2c, 0xf7);

 VAR_4 = (unsigned int)VAR_2 / 1000;

 VAR_4 = VAR_4 * 32768;
 VAR_4 = VAR_4 / 25;
 VAR_4 = VAR_4 / 125;
 VAR_5[0] = (unsigned char)((VAR_4 >> 12) & 0xff);
 VAR_5[1] = (unsigned char)((VAR_4 >> 4) & 0xff);
 VAR_5[2] = (unsigned char)((VAR_4 << 4) & 0xf0);
 FUNC_1(VAR_3, 0x28, 0x80);
 FUNC_1(VAR_3, 0x29, 0);
 FUNC_1(VAR_3, 0x2a, 0);

 FUNC_1(VAR_3, 0x28, VAR_5[0]);
 FUNC_1(VAR_3, 0x29, VAR_5[1]);
 FUNC_1(VAR_3, 0x2a, VAR_5[2]);
 FUNC_0("stv0288: stv0288_set_symbolrate\n");

 return 0;
}
