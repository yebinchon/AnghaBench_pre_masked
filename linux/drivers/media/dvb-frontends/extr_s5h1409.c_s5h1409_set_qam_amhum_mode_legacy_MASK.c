
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5h1409_state {int is_qam_locked; } ;
struct dvb_frontend {struct s5h1409_state* demodulator_priv; } ;


 int FUNC_0 (struct s5h1409_state*,int) ;
 int FUNC_1 (struct s5h1409_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct s5h1409_state *VAR_1 = VAR_0->demodulator_priv;
 u16 VAR_2;

 if (VAR_1->is_qam_locked)
  return;


 VAR_2 = FUNC_0(VAR_1, 0xf0);

 if ((VAR_2 >> 13) & 0x1) {

  VAR_1->is_qam_locked = 1;
  VAR_2 &= 0xff;

  FUNC_1(VAR_1, 0x96, 0x00c);
  if ((VAR_2 < 0x38) || (VAR_2 > 0x68)) {
   FUNC_1(VAR_1, 0x93, 0x3332);
   FUNC_1(VAR_1, 0x9e, 0x2c37);
  } else {
   FUNC_1(VAR_1, 0x93, 0x3130);
   FUNC_1(VAR_1, 0x9e, 0x2836);
  }

 } else {
  FUNC_1(VAR_1, 0x96, 0x0008);
  FUNC_1(VAR_1, 0x93, 0x3332);
  FUNC_1(VAR_1, 0x9e, 0x2c37);
 }
}
