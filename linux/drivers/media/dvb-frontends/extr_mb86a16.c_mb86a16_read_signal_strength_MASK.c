
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (struct mb86a16_state*,int ,int*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5, u16 *VAR_6)
{
 u8 VAR_7 = 0;
 struct mb86a16_state *VAR_8 = VAR_5->demodulator_priv;

 *VAR_6 = 0;
 if (FUNC_1(VAR_8, VAR_1, &VAR_7) != 2) {
  FUNC_0(VAR_4, VAR_3, 1, "I2C transfer error");
  return -VAR_0;
 }

 *VAR_6 = ((0xff - VAR_7) * 100) / 256;
 FUNC_0(VAR_4, VAR_2, 1, "Signal strength=[%d %%]", (u8) *VAR_6);
 *VAR_6 = (0xffff - 0xff) + VAR_7;

 return 0;
}
