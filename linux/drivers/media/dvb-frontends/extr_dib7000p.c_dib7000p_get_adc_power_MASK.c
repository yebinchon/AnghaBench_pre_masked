
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (char*,int,...) ;
 int* VAR_0 ;

__attribute__((used)) static s32 FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dib7000p_state *VAR_2 = VAR_1->demodulator_priv;
 u32 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 s32 VAR_6;
 u16 VAR_7[2];
 u8 VAR_8 = 0;

 VAR_7[0] = FUNC_0(VAR_2, 0x184);
 VAR_7[1] = FUNC_0(VAR_2, 0x185);
 VAR_6 = (VAR_7[0] << 16) | VAR_7[1];
 FUNC_1("raw pow_i = %d\n", VAR_6);

 VAR_3 = VAR_6;
 while (VAR_3 >>= 1)
  VAR_4++;

 VAR_5 = (VAR_6 * 1000 / (1 << VAR_4));
 FUNC_1(" mant = %d exp = %d\n", VAR_5 / 1000, VAR_4);

 VAR_8 = (u8) ((VAR_5 - 1000) / 100);
 FUNC_1(" ix = %d\n", VAR_8);

 VAR_6 = (VAR_0[VAR_8] + 693 * (VAR_4 - 20) - 6908);
 VAR_6 = (VAR_6 << 8) / 1000;
 FUNC_1(" pow_i = %d\n", VAR_6);

 return VAR_6;
}
