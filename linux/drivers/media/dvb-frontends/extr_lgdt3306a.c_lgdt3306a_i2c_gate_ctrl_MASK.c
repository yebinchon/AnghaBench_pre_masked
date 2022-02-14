
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lgdt3306a_state {TYPE_1__* cfg; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;
struct TYPE_2__ {int deny_i2c_rptr; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct lgdt3306a_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_2->cfg->deny_i2c_rptr) {
  FUNC_0("deny_i2c_rptr=%d\n", VAR_2->cfg->deny_i2c_rptr);
  return 0;
 }
 FUNC_0("(%d)\n", VAR_1);


 return FUNC_1(VAR_2, 0x0002, 7, VAR_1 ? 0 : 1);
}
