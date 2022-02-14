
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct drx39xxj_state* demodulator_priv; } ;
struct drx_demod_instance {int dummy; } ;
struct drx39xxj_state {struct drx_demod_instance* demod; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
typedef enum drx_lock_status { ____Placeholder_drx_lock_status } drx_lock_status ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drx_demod_instance*,int*) ;
 int FUNC_1 (struct drx_demod_instance*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5, enum fe_status *VAR_6)
{
 struct drx39xxj_state *VAR_7 = VAR_5->demodulator_priv;
 struct drx_demod_instance *VAR_8 = VAR_7->demod;
 int VAR_9;
 enum drx_lock_status VAR_10;

 *VAR_6 = 0;

 VAR_9 = FUNC_0(VAR_8, &VAR_10);
 if (VAR_9 != 0) {
  FUNC_2("drx39xxj: could not get lock status!\n");
  *VAR_6 = 0;
 }

 switch (VAR_10) {
 case 129:
  *VAR_6 = 0;
  FUNC_2("drx says NEVER_LOCK\n");
  break;
 case 128:
  *VAR_6 = 0;
  break;
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  *VAR_6 = VAR_2
      | VAR_0 | VAR_4 | VAR_3;
  break;
 case 139:
  *VAR_6 = VAR_2
      | VAR_0
      | VAR_4 | VAR_3 | VAR_1;
  break;
 default:
  FUNC_2("Lock state unknown %d\n", VAR_10);
 }
 FUNC_1(VAR_8, VAR_10);

 return 0;
}
