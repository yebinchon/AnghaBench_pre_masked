
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;
struct cx24110_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend* VAR_2,
       struct dvb_diseqc_master_cmd *VAR_3)
{
 int VAR_4, VAR_5;
 struct cx24110_state *VAR_6 = VAR_2->demodulator_priv;
 unsigned long VAR_7;

 if (VAR_3->msg_len < 3 || VAR_3->msg_len > 6)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->msg_len; VAR_4++)
  FUNC_1(VAR_6, 0x79 + VAR_4, VAR_3->msg[VAR_4]);

 VAR_5 = FUNC_0(VAR_6, 0x77);
 if (VAR_5 & 0x04) {
  FUNC_1(VAR_6, 0x77, VAR_5 & ~0x04);
  FUNC_3(30);
 }

 VAR_5 = FUNC_0(VAR_6, 0x76);

 FUNC_1(VAR_6, 0x76, ((VAR_5 & 0x90) | 0x40) | ((VAR_3->msg_len-3) & 3));
 VAR_7 = VAR_1 + FUNC_2(100);
 while (!FUNC_4(VAR_1, VAR_7) && !(FUNC_0(VAR_6, 0x76) & 0x40))
  ;

 return 0;
}
