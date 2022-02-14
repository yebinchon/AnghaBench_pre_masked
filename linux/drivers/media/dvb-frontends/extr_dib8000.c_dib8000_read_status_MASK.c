
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {struct dvb_frontend** fe; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dib8000_state*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_6, enum fe_status *VAR_7)
{
 struct dib8000_state *VAR_8 = VAR_6->demodulator_priv;
 u16 VAR_9 = 0, VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_1(VAR_6);
 for (VAR_11 = 1; (VAR_11 < VAR_5) && (VAR_8->fe[VAR_11] != ((void*)0)); VAR_11++)
  VAR_9 |= FUNC_1(VAR_8->fe[VAR_11]);

 *VAR_7 = 0;

 if (((VAR_10 >> 13) & 1) || ((VAR_9 >> 13) & 1))
  *VAR_7 |= VAR_2;

 if (((VAR_10 >> 8) & 1) || ((VAR_9 >> 8) & 1))
  *VAR_7 |= VAR_0;

 if ((((VAR_10 >> 1) & 0xf) == 0xf) || (((VAR_9 >> 1) & 0xf) == 0xf))
  *VAR_7 |= VAR_3;

 if ((((VAR_10 >> 12) & 1) || ((VAR_9 >> 12) & 1)) && ((VAR_10 >> 5) & 7))
  *VAR_7 |= VAR_1;

 if (((VAR_10 >> 12) & 1) || ((VAR_9 >> 12) & 1)) {
  VAR_10 = FUNC_2(VAR_8, 554);
  if (VAR_10 & 0x01)
   *VAR_7 |= VAR_4;

  VAR_10 = FUNC_2(VAR_8, 555);
  if (VAR_10 & 0x01)
   *VAR_7 |= VAR_4;

  VAR_10 = FUNC_2(VAR_8, 556);
  if (VAR_10 & 0x01)
   *VAR_7 |= VAR_4;
 }
 FUNC_0(VAR_6, *VAR_7);

 return 0;
}
