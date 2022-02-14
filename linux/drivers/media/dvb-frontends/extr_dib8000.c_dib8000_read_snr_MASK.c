
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {struct dvb_frontend** fe; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u16 * VAR_2)
{
 struct dib8000_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 for (VAR_4 = 1; (VAR_4 < VAR_0) && (VAR_3->fe[VAR_4] != ((void*)0)); VAR_4++)
  VAR_5 += FUNC_0(VAR_3->fe[VAR_4]);

 if ((VAR_5 >> 16) != 0) {
  VAR_5 = 10*FUNC_1(VAR_5>>16);
  *VAR_2 = VAR_5 / ((1 << 24) / 10);
 }
 else
  *VAR_2 = 0;

 return 0;
}
