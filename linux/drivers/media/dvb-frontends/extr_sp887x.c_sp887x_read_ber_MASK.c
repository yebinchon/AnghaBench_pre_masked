
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sp887x_state {int dummy; } ;
struct dvb_frontend {struct sp887x_state* demodulator_priv; } ;


 int FUNC_0 (struct sp887x_state*,int) ;
 int FUNC_1 (struct sp887x_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct sp887x_state* VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = (FUNC_0(VAR_2, 0xc08) & 0x3f) |
        (FUNC_0(VAR_2, 0xc07) << 6);
 FUNC_1(VAR_2, 0xc08, 0x000);
 FUNC_1(VAR_2, 0xc07, 0x000);
 if (*VAR_1 >= 0x3fff0)
  *VAR_1 = ~0;

 return 0;
}
