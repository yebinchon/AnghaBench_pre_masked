
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_28__ {TYPE_16__* stat; } ;
struct TYPE_22__ {TYPE_14__* stat; } ;
struct TYPE_20__ {TYPE_12__* stat; } ;
struct TYPE_18__ {TYPE_10__* stat; } ;
struct TYPE_32__ {TYPE_8__* stat; } ;
struct TYPE_30__ {TYPE_6__* stat; } ;
struct TYPE_27__ {TYPE_3__* stat; } ;
struct TYPE_25__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_5__ post_bit_count; TYPE_15__ post_bit_error; TYPE_13__ pre_bit_count; TYPE_11__ pre_bit_error; TYPE_9__ block_count; TYPE_7__ block_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct drxk_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct drxk_state {scalar_t__ m_drxk_state; int fe_status; } ;
typedef int s32 ;
struct TYPE_31__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_29__ {int uvalue; void* scale; } ;
struct TYPE_26__ {int svalue; void* scale; } ;
struct TYPE_24__ {int scale; int uvalue; } ;
struct TYPE_23__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_21__ {scalar_t__ uvalue; void* scale; } ;
struct TYPE_19__ {int uvalue; void* scale; } ;
struct TYPE_17__ {int uvalue; void* scale; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct drxk_state*,scalar_t__*) ;
 int FUNC_1 (struct drxk_state*,int*) ;
 int FUNC_2 (struct drxk_state*,int *) ;
 int FUNC_3 (struct drxk_state*,int ,scalar_t__*) ;
 int FUNC_4 (struct drxk_state*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_17)
{
 struct dtv_frontend_properties *VAR_18 = &VAR_17->dtv_property_cache;
 struct drxk_state *VAR_19 = VAR_17->demodulator_priv;
 int VAR_20;
 u32 VAR_21;
 u16 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 s32 VAR_30;

 if (VAR_19->m_drxk_state == VAR_1)
  return -VAR_4;
 if (VAR_19->m_drxk_state == VAR_2)
  return -VAR_3;


 VAR_19->fe_status = 0;
 FUNC_0(VAR_19, &VAR_21);
 if (VAR_21 == VAR_13)
  VAR_19->fe_status |= 0x1f;
 if (VAR_21 == VAR_5)
  VAR_19->fe_status |= 0x0f;
 if (VAR_21 == VAR_0)
  VAR_19->fe_status |= 0x07;




 FUNC_2(VAR_19, &VAR_18->strength.stat[0].uvalue);
 VAR_18->strength.stat[0].scale = VAR_12;


 if (VAR_21 >= VAR_0) {
  FUNC_1(VAR_19, &VAR_30);
  VAR_18->cnr.stat[0].svalue = VAR_30 * 100;
  VAR_18->cnr.stat[0].scale = VAR_10;
 } else {
  VAR_18->cnr.stat[0].scale = VAR_11;
 }

 if (VAR_21 < VAR_5) {
  VAR_18->block_error.stat[0].scale = VAR_11;
  VAR_18->block_count.stat[0].scale = VAR_11;
  VAR_18->pre_bit_error.stat[0].scale = VAR_11;
  VAR_18->pre_bit_count.stat[0].scale = VAR_11;
  VAR_18->post_bit_error.stat[0].scale = VAR_11;
  VAR_18->post_bit_count.stat[0].scale = VAR_11;
  return 0;
 }
 VAR_20 = FUNC_3(VAR_19, VAR_14, &VAR_22);
 if (VAR_20 < 0)
  goto error;
 VAR_26 = VAR_22;

 VAR_20 = FUNC_3(VAR_19, VAR_15 , &VAR_22);
 if (VAR_20 < 0)
  goto error;
 VAR_27 = VAR_22;


 VAR_20 = FUNC_3(VAR_19, VAR_8, &VAR_22);
 if (VAR_20 < 0)
  goto error;
 VAR_24 = VAR_22;

 VAR_20 = FUNC_3(VAR_19, VAR_7, &VAR_22);
 if (VAR_20 < 0)
  goto error;
 VAR_25 = VAR_22;

 VAR_20 = FUNC_3(VAR_19, VAR_6, &VAR_22);
 if (VAR_20 < 0)
  goto error;
 VAR_28 = VAR_22;

 VAR_20 = FUNC_3(VAR_19, VAR_16, &VAR_22);
 if (VAR_20 < 0)
  goto error;
 VAR_29 = VAR_22;
 FUNC_4(VAR_19, VAR_16, 0);

 VAR_24 *= VAR_25;

 VAR_23 = VAR_28 * 204 * 8;


 VAR_18->block_error.stat[0].scale = VAR_9;
 VAR_18->block_error.stat[0].uvalue += VAR_29;
 VAR_18->block_count.stat[0].scale = VAR_9;
 VAR_18->block_count.stat[0].uvalue += VAR_28;

 VAR_18->pre_bit_error.stat[0].scale = VAR_9;
 VAR_18->pre_bit_error.stat[0].uvalue += VAR_26;
 VAR_18->pre_bit_count.stat[0].scale = VAR_9;
 VAR_18->pre_bit_count.stat[0].uvalue += VAR_27;

 VAR_18->post_bit_error.stat[0].scale = VAR_9;
 VAR_18->post_bit_error.stat[0].uvalue += VAR_24;
 VAR_18->post_bit_count.stat[0].scale = VAR_9;
 VAR_18->post_bit_count.stat[0].uvalue += VAR_23;

error:
 return VAR_20;
}
