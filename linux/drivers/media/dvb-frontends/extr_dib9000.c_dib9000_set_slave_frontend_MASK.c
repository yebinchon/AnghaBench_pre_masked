
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {struct dvb_frontend** fe; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(struct dvb_frontend *VAR_2, struct dvb_frontend *VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5 = 1;

 while ((VAR_5 < VAR_1) && (VAR_4->fe[VAR_5] != ((void*)0)))
  VAR_5++;
 if (VAR_5 < VAR_1) {
  FUNC_0("set slave fe %p to index %i\n", VAR_3, VAR_5);
  VAR_4->fe[VAR_5] = VAR_3;
  return 0;
 }

 FUNC_0("too many slave frontend\n");
 return -VAR_0;
}
