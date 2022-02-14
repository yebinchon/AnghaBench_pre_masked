
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {int dummy; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;
typedef enum fe_sec_mini_cmd { ____Placeholder_fe_sec_mini_cmd } fe_sec_mini_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct stv*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4, enum fe_sec_mini_cmd VAR_5)
{
 struct stv *VAR_6 = VAR_4->demodulator_priv;
 u8 VAR_7;

 if (VAR_5 == VAR_3) {
  FUNC_0(VAR_0, 3);
  VAR_7 = 0x00;
 } else {
  FUNC_0(VAR_0, 2);
  VAR_7 = 0xFF;
 }

 FUNC_0(VAR_2, 1);
 FUNC_2(VAR_6, 0x40, 0x00);
 FUNC_1(VAR_1, VAR_7);
 FUNC_0(VAR_2, 0);
 FUNC_2(VAR_6, 0x20, 0x20);

 return 0;
}
