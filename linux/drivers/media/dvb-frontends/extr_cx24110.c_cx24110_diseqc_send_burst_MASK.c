
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;
typedef enum fe_sec_mini_cmd { ____Placeholder_fe_sec_mini_cmd } fe_sec_mini_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx24110_state*,int) ;
 int FUNC_1 (struct cx24110_state*,int,int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_4,
         enum fe_sec_mini_cmd VAR_5)
{
 int VAR_6, VAR_7;
 struct cx24110_state *VAR_8 = VAR_4->demodulator_priv;
 unsigned long VAR_9;

 if (VAR_5 == VAR_1)
  VAR_7 = 0x00;
 else if (VAR_5 == VAR_2)
  VAR_7 = 0x08;
 else
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_8, 0x77);
 if (!(VAR_6 & 0x04))
  FUNC_1(VAR_8, 0x77, VAR_6 | 0x04);

 VAR_6 = FUNC_0(VAR_8, 0x76);
 FUNC_1(VAR_8, 0x76, ((VAR_6 & 0x90) | 0x40 | VAR_7));
 VAR_9 = VAR_3 + FUNC_2(100);
 while (!FUNC_3(VAR_3, VAR_9) && !(FUNC_0(VAR_8, 0x76) & 0x40))
  ;

 return 0;
}
