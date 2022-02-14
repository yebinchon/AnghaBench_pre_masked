
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u32 ;
struct mxl {TYPE_1__* base; int demod; } ;
struct TYPE_13__ {TYPE_10__* stat; } ;
struct TYPE_22__ {TYPE_8__* stat; } ;
struct TYPE_20__ {TYPE_6__* stat; } ;
struct TYPE_18__ {TYPE_4__* stat; } ;
struct TYPE_16__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_11__ post_bit_count; TYPE_9__ post_bit_error; TYPE_7__ pre_bit_count; TYPE_5__ pre_bit_error; TYPE_3__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct mxl* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_21__ {void* scale; } ;
struct TYPE_19__ {void* scale; } ;
struct TYPE_17__ {void* scale; } ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_14__ {int status_lock; } ;
struct TYPE_12__ {void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct mxl*,int ) ;
 int FUNC_1 (struct mxl*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct mxl*,scalar_t__,int*) ;
 int FUNC_7 (struct dvb_frontend*) ;
 int FUNC_8 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_4, enum fe_status *VAR_5)
{
 struct mxl *VAR_6 = VAR_4->demodulator_priv;
 struct dtv_frontend_properties *VAR_7 = &VAR_4->dtv_property_cache;
 u32 VAR_8 = 0;

 FUNC_3(&VAR_6->base->status_lock);
 FUNC_0(VAR_6, VAR_6->demod);
 FUNC_6(VAR_6, (VAR_3 +
        FUNC_2(VAR_6->demod)),
        &VAR_8);
 FUNC_1(VAR_6, VAR_6->demod);
 FUNC_4(&VAR_6->base->status_lock);

 *VAR_5 = (VAR_8 == 1) ? 0x1f : 0;




 FUNC_7(VAR_4);

 if (*VAR_5 & VAR_0)
  FUNC_8(VAR_4);
 else
  VAR_7->cnr.stat[0].scale = VAR_2;

 if (*VAR_5 & VAR_1)
  FUNC_5(VAR_4);
 else {
  VAR_7->pre_bit_error.stat[0].scale = VAR_2;
  VAR_7->pre_bit_count.stat[0].scale = VAR_2;
  VAR_7->post_bit_error.stat[0].scale = VAR_2;
  VAR_7->post_bit_count.stat[0].scale = VAR_2;
 }

 return 0;
}
