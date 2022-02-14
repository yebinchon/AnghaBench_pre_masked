
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
  u16 *VAR_1, u16 *VAR_2, u16 *VAR_3, u16 *VAR_4)
{
 struct dib7000p_state *VAR_5 = VAR_0->demodulator_priv;

 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_0(VAR_5, 394);
 if (VAR_2 != ((void*)0))
  *VAR_2 = FUNC_0(VAR_5, 392);
 if (VAR_3 != ((void*)0))
  *VAR_3 = FUNC_0(VAR_5, 393);
 if (VAR_4 != ((void*)0))
  *VAR_4 = FUNC_0(VAR_5, 397);

 return 0;
}
