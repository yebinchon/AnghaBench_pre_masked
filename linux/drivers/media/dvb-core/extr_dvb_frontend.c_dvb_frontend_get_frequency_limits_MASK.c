
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ frequency_min_hz; scalar_t__ frequency_max_hz; scalar_t__ frequency_tolerance_hz; } ;
struct TYPE_6__ {scalar_t__ frequency_min_hz; scalar_t__ frequency_max_hz; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_10__ {TYPE_4__ info; TYPE_2__ tuner_ops; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {TYPE_5__ ops; TYPE_3__* dvb; int id; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_8__ {int device; int num; } ;






 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dvb_frontend *VAR_1,
           u32 *VAR_2, u32 *VAR_3,
           u32 *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_1->dtv_property_cache;
 u32 VAR_6 = VAR_1->ops.tuner_ops.info.frequency_min_hz;
 u32 VAR_7 = VAR_1->ops.tuner_ops.info.frequency_max_hz;
 u32 VAR_8 = VAR_1->ops.info.frequency_min_hz;
 u32 VAR_9 = VAR_1->ops.info.frequency_max_hz;

 *VAR_2 = FUNC_2(VAR_8, VAR_6);

 if (VAR_9 == 0)
  *VAR_3 = VAR_7;
 else if (VAR_7 == 0)
  *VAR_3 = VAR_9;
 else
  *VAR_3 = FUNC_3(VAR_9, VAR_7);

 if (*VAR_2 == 0 || *VAR_3 == 0)
  FUNC_1(VAR_1->dvb->device,
    "DVB: adapter %i frontend %u frequency limits undefined - fix the driver\n",
    VAR_1->dvb->num, VAR_1->id);

 FUNC_0(VAR_1->dvb->device, "frequency interval: tuner: %u...%u, frontend: %u...%u",
  VAR_6, VAR_7, VAR_8, VAR_9);


 switch (VAR_5->delivery_system) {
 case 131:
 case 130:
 case 128:
 case 129:
  *VAR_2 /= VAR_0;
  *VAR_3 /= VAR_0;
  if (VAR_4)
   *VAR_4 = VAR_1->ops.info.frequency_tolerance_hz / VAR_0;

  break;
 default:
  if (VAR_4)
   *VAR_4 = VAR_1->ops.info.frequency_tolerance_hz;
  break;
 }
}
