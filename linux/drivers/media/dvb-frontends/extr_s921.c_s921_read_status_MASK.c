
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int dummy; } ;
struct dvb_frontend {struct s921_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct s921_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5, enum fe_status *VAR_6)
{
 struct s921_state *VAR_7 = VAR_5->demodulator_priv;
 int VAR_8, VAR_9;

 *VAR_6 = 0;

 VAR_9 = FUNC_1(VAR_7, 0x81);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_9 << 8;

 VAR_9 = FUNC_1(VAR_7, 0x82);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 |= VAR_9;

 FUNC_0("status = %04x\n", VAR_8);


 if ((VAR_8 & 0xff) == 0x40) {
  *VAR_6 = VAR_2 |
     VAR_0 |
     VAR_4 |
     VAR_3 |
     VAR_1;
 } else if (VAR_8 & 0x40) {

  *VAR_6 = VAR_2 |
     VAR_0 |
     VAR_4 |
     VAR_3;
 }

 return 0;
}
