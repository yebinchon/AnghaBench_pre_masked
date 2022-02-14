
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int msg; } ;
struct cx24120_state {TYPE_1__* i2c; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_1 (struct cx24120_state*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int*,int *,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_4,
       struct dvb_diseqc_master_cmd *VAR_5)
{
 struct cx24120_state *VAR_6 = VAR_4->demodulator_priv;
 struct cx24120_cmd VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6->i2c->dev, "\n");

 VAR_7.id = VAR_0;
 VAR_7.len = 11;
 VAR_7.arg[0] = 0x00;
 VAR_7.arg[1] = 0x00;
 VAR_7.arg[2] = 0x03;
 VAR_7.arg[3] = 0x16;
 VAR_7.arg[4] = 0x28;
 VAR_7.arg[5] = 0x01;
 VAR_7.arg[6] = 0x01;
 VAR_7.arg[7] = 0x14;
 VAR_7.arg[8] = 0x19;
 VAR_7.arg[9] = 0x14;
 VAR_7.arg[10] = 0x1e;

 if (FUNC_0(VAR_6, &VAR_7)) {
  FUNC_3("send 1st message(0x%x) failed\n", VAR_7.id);
  return -VAR_2;
 }

 VAR_7.id = VAR_1;
 VAR_7.len = VAR_5->msg_len + 6;
 VAR_7.arg[0] = 0x00;
 VAR_7.arg[1] = 0x01;
 VAR_7.arg[2] = 0x02;
 VAR_7.arg[3] = 0x00;
 VAR_7.arg[4] = 0x00;
 VAR_7.arg[5] = VAR_5->msg_len;

 FUNC_4(&VAR_7.arg[6], &VAR_5->msg, VAR_5->msg_len);

 if (FUNC_0(VAR_6, &VAR_7)) {
  FUNC_3("send 2nd message(0x%x) failed\n", VAR_7.id);
  return -VAR_2;
 }

 VAR_8 = 500;
 do {
  if (!(FUNC_1(VAR_6, 0x93) & 0x01)) {
   FUNC_2(&VAR_6->i2c->dev, "diseqc sequence sent\n");
   return 0;
  }
  FUNC_5(20);
  VAR_8 -= 20;
 } while (VAR_8);

 FUNC_3("Too long waiting for diseqc.\n");
 return -VAR_3;
}
