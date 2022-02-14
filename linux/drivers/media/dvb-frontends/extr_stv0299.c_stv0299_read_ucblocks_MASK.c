
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0299_state {scalar_t__ errmode; int ucblocks; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct stv0299_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_2, u32* VAR_3)
{
 struct stv0299_state* VAR_4 = VAR_2->demodulator_priv;

 if (VAR_4->errmode != VAR_1)
  return -VAR_0;

 VAR_4->ucblocks += FUNC_0(VAR_4, 0x1e);
 VAR_4->ucblocks += (FUNC_0(VAR_4, 0x1d) << 8);
 *VAR_3 = VAR_4->ucblocks;

 return 0;
}
