
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int div_sync_wait; scalar_t__ reg_offs; scalar_t__ div_state; scalar_t__ div_force_off; } ;


 int FUNC_0 (struct dib7000m_state*,scalar_t__,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dib7000m_state *VAR_2 = VAR_0->demodulator_priv;

 if (VAR_2->div_force_off) {
  FUNC_1("diversity combination deactivated - forced by COFDM parameters\n");
  VAR_1 = 0;
 }
 VAR_2->div_state = (u8)VAR_1;

 if (VAR_1) {
  FUNC_0(VAR_2, 263 + VAR_2->reg_offs, 6);
  FUNC_0(VAR_2, 264 + VAR_2->reg_offs, 6);
  FUNC_0(VAR_2, 266 + VAR_2->reg_offs, (VAR_2->div_sync_wait << 4) | (1 << 2) | (2 << 0));
 } else {
  FUNC_0(VAR_2, 263 + VAR_2->reg_offs, 1);
  FUNC_0(VAR_2, 264 + VAR_2->reg_offs, 0);
  FUNC_0(VAR_2, 266 + VAR_2->reg_offs, 0);
 }

 return 0;
}
