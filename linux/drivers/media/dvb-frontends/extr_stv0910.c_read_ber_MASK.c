
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct stv {int dummy; } ;
struct TYPE_8__ {TYPE_3__* stat; } ;
struct TYPE_6__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ pre_bit_count; TYPE_2__ pre_bit_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv* demodulator_priv; } ;
struct TYPE_7__ {void* uvalue; void* scale; } ;
struct TYPE_5__ {void* uvalue; void* scale; } ;


 void* VAR_0 ;
 int FUNC_0 (struct stv*,void**,void**) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 struct stv *VAR_2 = VAR_1->demodulator_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_2, &VAR_4, &VAR_5);

 VAR_3->pre_bit_error.stat[0].scale = VAR_0;
 VAR_3->pre_bit_error.stat[0].uvalue = VAR_4;
 VAR_3->pre_bit_count.stat[0].scale = VAR_0;
 VAR_3->pre_bit_count.stat[0].uvalue = VAR_5;

 return 0;
}
