
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv {int dummy; } ;
struct TYPE_3__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_1__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv* demodulator_priv; } ;
typedef int s32 ;
struct TYPE_4__ {int svalue; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv*,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2)
{
 struct stv *VAR_3 = VAR_2->demodulator_priv;
 struct dtv_frontend_properties *VAR_4 = &VAR_2->dtv_property_cache;
 s32 VAR_5;

 if (!FUNC_0(VAR_3, &VAR_5)) {
  VAR_4->cnr.stat[0].scale = VAR_0;
  VAR_4->cnr.stat[0].svalue = 100 * VAR_5;
 } else {
  VAR_4->cnr.stat[0].scale = VAR_1;
 }

 return 0;
}
