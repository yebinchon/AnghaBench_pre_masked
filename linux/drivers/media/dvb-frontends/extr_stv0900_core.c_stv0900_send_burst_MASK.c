
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int dummy; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;
typedef enum fe_sec_mini_cmd { ____Placeholder_fe_sec_mini_cmd } fe_sec_mini_cmd ;


 int VAR_0 ;


 int FUNC_0 (struct stv0900_internal*,int*,int,int) ;
 int FUNC_1 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
         enum fe_sec_mini_cmd VAR_2)
{
 struct stv0900_state *VAR_3 = VAR_1->demodulator_priv;
 struct stv0900_internal *VAR_4 = VAR_3->internal;
 enum fe_stv0900_demod_num VAR_5 = VAR_3->demod;
 u8 VAR_6;


 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_4, VAR_0, 3);
  VAR_6 = 0x00;
  FUNC_0(VAR_4, &VAR_6, 1, VAR_3->demod);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_0, 2);
  VAR_6 = 0xff;
  FUNC_0(VAR_4, &VAR_6, 1, VAR_3->demod);
  break;
 }

 return 0;
}
