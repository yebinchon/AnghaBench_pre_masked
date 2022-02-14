
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt352_state {int dummy; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt352_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_2, u32* VAR_3)
{
 struct mt352_state* VAR_4 = VAR_2->demodulator_priv;

 *VAR_3 = (FUNC_0 (VAR_4, VAR_1) << 8) |
      (FUNC_0 (VAR_4, VAR_0));

 return 0;
}
