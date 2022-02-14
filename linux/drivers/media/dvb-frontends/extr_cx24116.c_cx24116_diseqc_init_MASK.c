
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24116_state* demodulator_priv; } ;
struct TYPE_2__ {int* args; int len; } ;
struct cx24116_state {TYPE_1__ dsec_cmd; } ;
struct cx24116_cmd {int* args; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct dvb_frontend*,struct cx24116_cmd*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_11)
{
 struct cx24116_state *VAR_12 = VAR_11->demodulator_priv;
 struct cx24116_cmd VAR_13;
 int VAR_14;


 VAR_13.args[0x00] = VAR_0;
 VAR_13.args[0x01] = 0x00;
 VAR_13.args[0x02] = 0x10;
 VAR_13.args[0x03] = 0x00;
 VAR_13.args[0x04] = 0x8f;
 VAR_13.args[0x05] = 0x28;
 VAR_13.args[0x06] = (VAR_10 == VAR_9) ? 0x00 : 0x01;
 VAR_13.args[0x07] = 0x01;
 VAR_13.len = 0x08;
 VAR_14 = FUNC_0(VAR_11, &VAR_13);
 if (VAR_14 != 0)
  return VAR_14;


 VAR_12->dsec_cmd.args[0x00] = VAR_1;


 VAR_12->dsec_cmd.args[VAR_5] = VAR_6;


 VAR_12->dsec_cmd.args[VAR_2] = 0x02;
 VAR_12->dsec_cmd.args[VAR_3] = 0x00;

 VAR_12->dsec_cmd.args[VAR_4] = 0x00;


 VAR_12->dsec_cmd.args[VAR_7] = 0x00;


 VAR_12->dsec_cmd.len = VAR_8;

 return 0;
}
