
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {scalar_t__ exit; struct drx_demod_instance* demodulator_priv; } ;
struct drx_demod_instance {int firmware; struct drx_demod_instance* my_i2c_dev_addr; struct drx_demod_instance* my_common_attr; struct drx_demod_instance* my_ext_attr; struct drx_demod_instance* demod; } ;
struct drx39xxj_state {int firmware; struct drx39xxj_state* my_i2c_dev_addr; struct drx39xxj_state* my_common_attr; struct drx39xxj_state* my_ext_attr; struct drx39xxj_state* demod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drx_demod_instance*) ;
 int FUNC_1 (struct drx_demod_instance*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct drx39xxj_state *VAR_2 = VAR_1->demodulator_priv;
 struct drx_demod_instance *VAR_3 = VAR_2->demod;


 if (VAR_1->exit != VAR_0)
  FUNC_0(VAR_3);

 FUNC_1(VAR_3->my_ext_attr);
 FUNC_1(VAR_3->my_common_attr);
 FUNC_1(VAR_3->my_i2c_dev_addr);
 FUNC_2(VAR_3->firmware);
 FUNC_1(VAR_3);
 FUNC_1(VAR_2);
}
