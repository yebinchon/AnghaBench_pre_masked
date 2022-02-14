
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct mxl {TYPE_9__* base; int demod; } ;
struct TYPE_17__ {TYPE_7__* stat; } ;
struct TYPE_15__ {TYPE_5__* stat; } ;
struct TYPE_13__ {TYPE_3__* stat; } ;
struct TYPE_11__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {int delivery_system; TYPE_8__ post_bit_count; TYPE_6__ post_bit_error; TYPE_4__ pre_bit_count; TYPE_2__ pre_bit_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct mxl* demodulator_priv; } ;
struct TYPE_18__ {int status_lock; } ;
struct TYPE_16__ {void* uvalue; void* scale; } ;
struct TYPE_14__ {void* uvalue; void* scale; } ;
struct TYPE_12__ {void* uvalue; void* scale; } ;
struct TYPE_10__ {void* uvalue; void* scale; } ;


 void* VAR_0 ;
 int FUNC_0 (struct mxl*,int ) ;
 int FUNC_1 (struct mxl*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;



 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mxl*,scalar_t__,int,int *) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_3)
{
 struct mxl *VAR_4 = VAR_3->demodulator_priv;
 struct dtv_frontend_properties *VAR_5 = &VAR_3->dtv_property_cache;
 u32 VAR_6[8];

 FUNC_3(&VAR_4->base->status_lock);
 FUNC_0(VAR_4, VAR_4->demod);
 FUNC_5(VAR_4,
  (VAR_2 +
   FUNC_2(VAR_4->demod)),
  (4 * sizeof(u32)),
  (u8 *) &VAR_6[0]);
 FUNC_1(VAR_4, VAR_4->demod);

 switch (VAR_5->delivery_system) {
 case 130:
 case 129:
  VAR_5->pre_bit_error.stat[0].scale = VAR_0;
  VAR_5->pre_bit_error.stat[0].uvalue = VAR_6[2];
  VAR_5->pre_bit_count.stat[0].scale = VAR_0;
  VAR_5->pre_bit_count.stat[0].uvalue = VAR_6[3];
  break;
 default:
  break;
 }

 FUNC_5(VAR_4,
  (VAR_1 +
   FUNC_2(VAR_4->demod)),
  (7 * sizeof(u32)),
  (u8 *) &VAR_6[0]);

 switch (VAR_5->delivery_system) {
 case 130:
 case 129:
  VAR_5->post_bit_error.stat[0].scale = VAR_0;
  VAR_5->post_bit_error.stat[0].uvalue = VAR_6[5];
  VAR_5->post_bit_count.stat[0].scale = VAR_0;
  VAR_5->post_bit_count.stat[0].uvalue = VAR_6[6];
  break;
 case 128:
  VAR_5->post_bit_error.stat[0].scale = VAR_0;
  VAR_5->post_bit_error.stat[0].uvalue = VAR_6[1];
  VAR_5->post_bit_count.stat[0].scale = VAR_0;
  VAR_5->post_bit_count.stat[0].uvalue = VAR_6[2];
  break;
 default:
  break;
 }

 FUNC_4(&VAR_4->base->status_lock);

 return 0;
}
