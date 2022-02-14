
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int dummy; } ;


 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;

int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct dib0090_state *VAR_4 = VAR_0->tuner_priv;

 FUNC_1(VAR_4, 0x0b, (FUNC_0(VAR_4, 0x0b) & 0xfff8)
   | ((VAR_3 & 1) << 2) | ((VAR_2 & 1) << 1) | (VAR_1 & 1));

 return 0;
}
