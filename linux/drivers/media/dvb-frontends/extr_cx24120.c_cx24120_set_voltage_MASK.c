
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {TYPE_1__* i2c; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
          enum fe_sec_voltage VAR_3)
{
 struct cx24120_state *VAR_4 = VAR_2->demodulator_priv;
 struct cx24120_cmd VAR_5;

 FUNC_1(&VAR_4->i2c->dev, "(%d)\n", VAR_3);

 VAR_5.id = VAR_0;
 VAR_5.len = 2;
 VAR_5.arg[0] = 0x00;
 VAR_5.arg[1] = (VAR_3 == VAR_1) ? 0x01 : 0x00;

 return FUNC_0(VAR_4, &VAR_5);
}
