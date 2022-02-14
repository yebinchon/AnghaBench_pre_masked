
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lg216x_state {int dummy; } ;
struct dvb_frontend {struct lg216x_state* demodulator_priv; } ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct lg216x_state *VAR_2 = VAR_0->demodulator_priv;
 u8 VAR_3, VAR_4;
 int VAR_5;

 *VAR_1 = 0;

 VAR_5 = FUNC_0(VAR_2, 0x0202, &VAR_3);
 if (FUNC_1(VAR_5))
  goto fail;

 VAR_5 = FUNC_0(VAR_2, 0x0203, &VAR_4);
 if (FUNC_1(VAR_5))
  goto fail;

 if ((VAR_3 == 0xba) || (VAR_4 == 0xdf))
  *VAR_1 = 0;
 else

 *VAR_1 = ((VAR_3 >> 4) * 100) + ((VAR_3 & 0x0f) * 10) + (VAR_4 >> 4);



fail:
 return VAR_5;
}
