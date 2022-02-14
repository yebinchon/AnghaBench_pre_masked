
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_1__ post_bit_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {scalar_t__ ber_prev; } ;
struct TYPE_4__ {scalar_t__ scale; scalar_t__ uvalue; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct cx24120_state *VAR_3 = VAR_1->demodulator_priv;
 struct dtv_frontend_properties *VAR_4 = &VAR_1->dtv_property_cache;

 if (VAR_4->post_bit_error.stat[0].scale != VAR_0) {
  *VAR_2 = 0;
  return 0;
 }

 *VAR_2 = VAR_4->post_bit_error.stat[0].uvalue - VAR_3->ber_prev;
 VAR_3->ber_prev = VAR_4->post_bit_error.stat[0].uvalue;

 return 0;
}
