
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int pid_ctrl_index; int demod_lock; TYPE_1__* pid_ctrl; } ;
struct TYPE_2__ {int onoff; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib9000_state*,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dvb_frontend *VAR_2, u8 VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_2->demodulator_priv;
 u16 VAR_5;
 int VAR_6;

 if ((VAR_4->pid_ctrl_index != -2) && (VAR_4->pid_ctrl_index < 9)) {

  FUNC_2("pid filter cmd postpone\n");
  VAR_4->pid_ctrl_index++;
  VAR_4->pid_ctrl[VAR_4->pid_ctrl_index].cmd = VAR_0;
  VAR_4->pid_ctrl[VAR_4->pid_ctrl_index].onoff = VAR_3;
  return 0;
 }

 if (FUNC_3(&VAR_4->demod_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_0(VAR_4, 294 + 1) & 0xffef;
 VAR_5 |= (VAR_3 & 0x1) << 4;

 FUNC_2("PID filter enabled %d\n", VAR_3);
 VAR_6 = FUNC_1(VAR_4, 294 + 1, VAR_5);
 FUNC_4(&VAR_4->demod_lock);
 return VAR_6;

}
