
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {int demod_lock; int ** fe; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dib9000_state*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_7, enum fe_status *VAR_8)
{
 struct dib9000_state *VAR_9 = VAR_7->demodulator_priv;
 u8 VAR_10;
 u16 VAR_11 = 0, VAR_12 = 0;

 if (FUNC_3(&VAR_9->demod_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return -VAR_0;
 }
 for (VAR_10 = 1; (VAR_10 < VAR_6) && (VAR_9->fe[VAR_10] != ((void*)0)); VAR_10++)
  VAR_12 |= FUNC_0(VAR_9->fe[VAR_10]);

 VAR_11 = FUNC_1(VAR_9, 535);

 *VAR_8 = 0;

 if ((VAR_11 & 0x8000) || (VAR_12 & 0x8000))
  *VAR_8 |= VAR_3;
 if ((VAR_11 & 0x3000) || (VAR_12 & 0x3000))
  *VAR_8 |= VAR_1;
 if ((VAR_11 & 0x0100) || (VAR_12 & 0x0100))
  *VAR_8 |= VAR_5;
 if (((VAR_11 & 0x0038) == 0x38) || ((VAR_12 & 0x0038) == 0x38))
  *VAR_8 |= VAR_4;
 if ((VAR_11 & 0x0008) || (VAR_12 & 0x0008))
  *VAR_8 |= VAR_2;

 FUNC_4(&VAR_9->demod_lock);

 return 0;
}
