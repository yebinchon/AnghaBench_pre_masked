
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {scalar_t__ exit; struct drx39xxj_state* demodulator_priv; } ;
struct drx_demod_instance {TYPE_1__* my_common_attr; } ;
struct drx39xxj_state {struct drx_demod_instance* demod; } ;
struct TYPE_2__ {int is_opened; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (struct drx_demod_instance*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct drx39xxj_state *VAR_2 = VAR_1->demodulator_priv;
 struct drx_demod_instance *VAR_3 = VAR_2->demod;
 int VAR_4 = 0;

 if (VAR_1->exit == VAR_0) {

  VAR_3->my_common_attr->is_opened = 0;
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 != 0)
   FUNC_2("drx39xxj_init(): DRX open failed rc=%d!\n", VAR_4);
 } else
  FUNC_0(VAR_1, 1);

 return VAR_4;
}
