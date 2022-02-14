
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int dummy; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
struct dvb_diseqc_slave_reply {int msg_len; int * msg; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;
 int FUNC_2 (struct stv0900_internal*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3,
    struct dvb_diseqc_slave_reply *VAR_4)
{
 struct stv0900_state *VAR_5 = VAR_3->demodulator_priv;
 struct stv0900_internal *VAR_6 = VAR_5->internal;
 enum fe_stv0900_demod_num VAR_7 = VAR_5->demod;
 s32 VAR_8 = 0;

 VAR_4->msg_len = 0;

 while ((FUNC_1(VAR_6, VAR_2) != 1) && (VAR_8 < 10)) {
  FUNC_0(10);
  VAR_8++;
 }

 if (FUNC_1(VAR_6, VAR_2)) {
  VAR_4->msg_len = FUNC_1(VAR_6, VAR_1);

  for (VAR_8 = 0; VAR_8 < VAR_4->msg_len; VAR_8++)
   VAR_4->msg[VAR_8] = FUNC_2(VAR_6, VAR_0);
 }

 return 0;
}
