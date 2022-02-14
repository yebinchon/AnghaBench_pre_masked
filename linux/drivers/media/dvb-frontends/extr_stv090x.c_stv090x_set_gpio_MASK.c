
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct stv090x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3, u8 VAR_4, u8 VAR_5,
       u8 VAR_6, u8 VAR_7)
{
 struct stv090x_state *VAR_8 = VAR_3->demodulator_priv;
 u8 VAR_9 = 0;

 FUNC_1(VAR_9, VAR_1, VAR_5);
 FUNC_1(VAR_9, VAR_0, VAR_6);
 FUNC_1(VAR_9, VAR_2, VAR_7);

 return FUNC_2(VAR_8, FUNC_0(VAR_4), VAR_9);
}
