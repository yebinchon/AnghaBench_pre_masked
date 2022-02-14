
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int demod_lock; struct dvb_frontend** fe; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_2, u16 * VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5;
 u32 VAR_6;

 if (FUNC_3(&VAR_4->demod_lock) < 0) {
  FUNC_1("could not get the lock\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_2);
 for (VAR_5 = 1; (VAR_5 < VAR_1) && (VAR_4->fe[VAR_5] != ((void*)0)); VAR_5++)
  VAR_6 += FUNC_0(VAR_4->fe[VAR_5]);

 if ((VAR_6 >> 16) != 0) {
  VAR_6 = 10 * FUNC_2(VAR_6 >> 16);
  *VAR_3 = VAR_6 / ((1 << 24) / 10);
 } else
  *VAR_3 = 0;

 FUNC_4(&VAR_4->demod_lock);

 return 0;
}
