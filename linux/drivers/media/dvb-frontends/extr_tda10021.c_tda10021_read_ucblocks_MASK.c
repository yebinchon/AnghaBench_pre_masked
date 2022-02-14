
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda10021_state {int dummy; } ;
struct dvb_frontend {struct tda10021_state* demodulator_priv; } ;


 int FUNC_0 (struct tda10021_state*,int,int) ;
 int* VAR_0 ;
 int FUNC_1 (struct tda10021_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, u32* VAR_2)
{
 struct tda10021_state* VAR_3 = VAR_1->demodulator_priv;

 *VAR_2 = FUNC_1 (VAR_3, 0x13) & 0x7f;
 if (*VAR_2 == 0x7f)
  *VAR_2 = 0xffffffff;


 FUNC_0 (VAR_3, 0x10, VAR_0[0x10] & 0xdf);
 FUNC_0 (VAR_3, 0x10, VAR_0[0x10]);

 return 0;
}
