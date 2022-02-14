
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ symbol_rate_min; scalar_t__ symbol_rate_max; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
struct dtv_frontend_properties {scalar_t__ frequency; int delivery_system; scalar_t__ symbol_rate; } ;
struct dvb_frontend {TYPE_3__ ops; int id; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_4__ {int num; int device; } ;


 int VAR_0 ;





 int FUNC_0 (int ,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 u32 VAR_3;
 u32 VAR_4;


 FUNC_1(VAR_1, &VAR_3, &VAR_4, ((void*)0));
 if ((VAR_3 && VAR_2->frequency < VAR_3) ||
     (VAR_4 && VAR_2->frequency > VAR_4)) {
  FUNC_0(VAR_1->dvb->device, "DVB: adapter %i frontend %i frequency %u out of range (%u..%u)\n",
    VAR_1->dvb->num, VAR_1->id, VAR_2->frequency,
    VAR_3, VAR_4);
  return -VAR_0;
 }


 switch (VAR_2->delivery_system) {
 case 130:
 case 129:
 case 128:
 case 132:
 case 131:
  if ((VAR_1->ops.info.symbol_rate_min &&
       VAR_2->symbol_rate < VAR_1->ops.info.symbol_rate_min) ||
      (VAR_1->ops.info.symbol_rate_max &&
       VAR_2->symbol_rate > VAR_1->ops.info.symbol_rate_max)) {
   FUNC_0(VAR_1->dvb->device, "DVB: adapter %i frontend %i symbol rate %u out of range (%u..%u)\n",
     VAR_1->dvb->num, VAR_1->id, VAR_2->symbol_rate,
     VAR_1->ops.info.symbol_rate_min,
     VAR_1->ops.info.symbol_rate_max);
   return -VAR_0;
  }
 default:
  break;
 }

 return 0;
}
