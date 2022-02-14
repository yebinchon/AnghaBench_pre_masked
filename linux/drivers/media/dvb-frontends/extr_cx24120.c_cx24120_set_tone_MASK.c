
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {TYPE_1__* i2c; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4, enum fe_sec_tone_mode VAR_5)
{
 struct cx24120_state *VAR_6 = VAR_4->demodulator_priv;
 struct cx24120_cmd VAR_7;

 FUNC_1(&VAR_6->i2c->dev, "(%d)\n", VAR_5);

 if ((VAR_5 != VAR_3) && (VAR_5 != VAR_2)) {
  FUNC_2("Invalid tone=%d\n", VAR_5);
  return -VAR_1;
 }

 VAR_7.id = VAR_0;
 VAR_7.len = 4;
 VAR_7.arg[0] = 0x00;
 VAR_7.arg[1] = 0x00;
 VAR_7.arg[2] = 0x00;
 VAR_7.arg[3] = (VAR_5 == VAR_3) ? 0x01 : 0x00;

 return FUNC_0(VAR_6, &VAR_7);
}
