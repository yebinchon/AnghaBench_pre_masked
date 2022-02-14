
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24117_state* demodulator_priv; } ;
struct TYPE_2__ {int* args; int len; } ;
struct cx24117_state {TYPE_1__ dsec_cmd; scalar_t__ demod; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_8)
{
 struct cx24117_state *VAR_9 = VAR_8->demodulator_priv;


 VAR_9->dsec_cmd.args[0] = VAR_0;


 VAR_9->dsec_cmd.args[VAR_5] = VAR_9->demod ? 0 : 1;


 VAR_9->dsec_cmd.args[VAR_4] = VAR_6;


 VAR_9->dsec_cmd.args[VAR_1] = 0x02;
 VAR_9->dsec_cmd.args[VAR_2] = 0x00;


 VAR_9->dsec_cmd.args[VAR_3] = 0x00;


 VAR_9->dsec_cmd.args[VAR_7] = 0x00;


 VAR_9->dsec_cmd.len = 7;

 return 0;
}
