
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367ter_state {int ucblocks; } ;
struct stv0367_state {struct stv0367ter_state* ter_state; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct stv0367_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4, u32 *VAR_5)
{
 struct stv0367_state *VAR_6 = VAR_4->demodulator_priv;
 struct stv0367ter_state *VAR_7 = VAR_6->ter_state;
 u32 VAR_8 = 0;


 if (FUNC_0(VAR_6, VAR_3) == 0) {
  VAR_8 =
   ((u32)FUNC_0(VAR_6, VAR_0)
   * (1 << 16))
   + ((u32)FUNC_0(VAR_6, VAR_1)
   * (1 << 8))
   + ((u32)FUNC_0(VAR_6, VAR_2));
  VAR_7->ucblocks = VAR_8;
 }

 (*VAR_5) = VAR_7->ucblocks;

 return 0;
}
