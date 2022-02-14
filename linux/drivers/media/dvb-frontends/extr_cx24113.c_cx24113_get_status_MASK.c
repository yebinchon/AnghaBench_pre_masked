
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_frontend {struct cx24113_state* tuner_priv; } ;
struct cx24113_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct cx24113_state *VAR_3 = VAR_1->tuner_priv;
 u8 VAR_4 = (FUNC_0(VAR_3, 0x10) & 0x02) >> 1;
 if (VAR_4)
  *VAR_2 |= VAR_0;
 FUNC_1("PLL locked: %d\n", VAR_4);
 return 0;
}
