
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m88rs2000_state {TYPE_1__* config; } ;
struct inittab {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ inittab; } ;


 int FUNC_0 (char*) ;
 struct inittab* VAR_0 ;
 int FUNC_1 (struct m88rs2000_state*,struct inittab*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct m88rs2000_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 FUNC_0("m88rs2000: init chip\n");

 if (VAR_2->config->inittab)
  VAR_3 = FUNC_1(VAR_2,
    (struct inittab *)VAR_2->config->inittab);
 else
  VAR_3 = FUNC_1(VAR_2, VAR_0);

 return VAR_3;
}
