
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zl10353_state {int ucblocks; } ;
struct dvb_frontend {struct zl10353_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zl10353_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, u32 *VAR_3)
{
 struct zl10353_state *VAR_4 = VAR_2->demodulator_priv;
 u32 VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_4, VAR_1) << 8 |
       FUNC_0(VAR_4, VAR_0);

 VAR_4->ucblocks += VAR_5;
 *VAR_3 = VAR_4->ucblocks;

 return 0;
}
