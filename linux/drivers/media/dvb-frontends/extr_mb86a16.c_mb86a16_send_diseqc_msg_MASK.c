
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_9,
       struct dvb_diseqc_master_cmd *VAR_10)
{
 struct mb86a16_state *VAR_11 = VAR_9->demodulator_priv;
 int VAR_12;
 u8 VAR_13;

 if (FUNC_1(VAR_11, VAR_2, VAR_3) < 0)
  goto err;
 if (FUNC_1(VAR_11, VAR_4, 0x00) < 0)
  goto err;
 if (FUNC_1(VAR_11, VAR_7, 0x04) < 0)
  goto err;

 VAR_13 = 0x18;

 if (VAR_10->msg_len > 5 || VAR_10->msg_len < 4)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_10->msg_len; VAR_12++) {
  if (FUNC_1(VAR_11, VAR_13, VAR_10->msg[VAR_12]) < 0)
   goto err;

  VAR_13++;
 }
 VAR_12 += 0x90;

 FUNC_2(10);

 if (FUNC_1(VAR_11, VAR_2, VAR_12) < 0)
  goto err;
 if (FUNC_1(VAR_11, VAR_4, VAR_5) < 0)
  goto err;

 return 0;

err:
 FUNC_0(VAR_8, VAR_6, 1, "I2C transfer error");
 return -VAR_1;
}
