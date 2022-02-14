
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ves1x93_state {int dummy; } ;
struct dvb_frontend {struct ves1x93_state* demodulator_priv; } ;


 int FUNC_0 (struct ves1x93_state*,int) ;
 int FUNC_1 (struct ves1x93_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct ves1x93_state* VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = FUNC_0 (VAR_2, 0x18) & 0x7f;

 if (*VAR_1 == 0x7f)
  *VAR_1 = 0xffffffff;

 FUNC_1 (VAR_2, 0x18, 0x00);
 FUNC_1 (VAR_2, 0x18, 0x80);

 return 0;
}
