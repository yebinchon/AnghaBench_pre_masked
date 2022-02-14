
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int u32 ;
typedef unsigned long u16 ;
struct i2c_device_addr {struct drx39xxj_state* user_data; } ;
struct TYPE_32__ {TYPE_6__* stat; } ;
struct TYPE_30__ {TYPE_4__* stat; } ;
struct TYPE_24__ {TYPE_17__* stat; } ;
struct TYPE_23__ {TYPE_14__* stat; } ;
struct TYPE_21__ {TYPE_12__* stat; } ;
struct TYPE_19__ {TYPE_10__* stat; } ;
struct TYPE_34__ {TYPE_8__* stat; } ;
struct TYPE_28__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_7__ cnr; TYPE_5__ post_bit_count; TYPE_16__ post_bit_error; TYPE_15__ pre_bit_count; TYPE_13__ pre_bit_error; TYPE_11__ block_count; TYPE_9__ block_error; TYPE_3__ strength; } ;
struct drxj_data {int standard; } ;
struct drx_demod_instance {struct drxj_data* my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct TYPE_26__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct drx39xxj_state {TYPE_1__ frontend; } ;
typedef enum drx_standard { ____Placeholder_drx_standard } drx_standard ;
typedef enum drx_lock_status { ____Placeholder_drx_lock_status } drx_lock_status ;
struct TYPE_33__ {int uvalue; void* scale; } ;
struct TYPE_31__ {unsigned long svalue; void* scale; } ;
struct TYPE_29__ {int uvalue; void* scale; } ;
struct TYPE_27__ {unsigned long uvalue; void* scale; } ;
struct TYPE_25__ {int uvalue; void* scale; } ;
struct TYPE_22__ {int uvalue; void* scale; } ;
struct TYPE_20__ {int uvalue; void* scale; } ;
struct TYPE_18__ {int uvalue; void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct drx_demod_instance*) ;
 int FUNC_1 (struct drx_demod_instance*,int *) ;
 int FUNC_2 (struct drx_demod_instance*,unsigned long*) ;
 int FUNC_3 (struct i2c_device_addr*,int *,int *) ;
 int FUNC_4 (struct i2c_device_addr*,int *,int *) ;
 int FUNC_5 (struct i2c_device_addr*,int *,int *) ;
 int FUNC_6 (struct i2c_device_addr*,unsigned long*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(struct drx_demod_instance *VAR_7,
   enum drx_lock_status VAR_8)
{
 struct i2c_device_addr *VAR_9 = VAR_7->my_i2c_dev_addr;
 struct drxj_data *VAR_10 = VAR_7->my_ext_attr;
 struct drx39xxj_state *VAR_11 = VAR_9->user_data;
 struct dtv_frontend_properties *VAR_12 = &VAR_11->frontend.dtv_property_cache;
 enum drx_standard VAR_13 = VAR_10->standard;
 int VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19, VAR_20 = 0;

 VAR_14 = FUNC_2(VAR_7, &VAR_20);
 if (VAR_14 < 0) {
  FUNC_7("error getting signal strength %d\n", VAR_14);
  VAR_12->strength.stat[0].scale = VAR_5;
 } else {
  VAR_12->strength.stat[0].scale = VAR_6;
  VAR_12->strength.stat[0].uvalue = 65535UL * VAR_20/ 100;
 }

 switch (VAR_13) {
 case 131:







  if (VAR_8 != VAR_0 && VAR_8 != VAR_1) {
   VAR_12->pre_bit_count.stat[0].scale = VAR_5;
   VAR_12->pre_bit_error.stat[0].scale = VAR_5;
   VAR_12->post_bit_count.stat[0].scale = VAR_5;
   VAR_12->post_bit_error.stat[0].scale = VAR_5;
   VAR_12->block_count.stat[0].scale = VAR_5;
   VAR_12->block_error.stat[0].scale = VAR_5;
   VAR_12->cnr.stat[0].scale = VAR_5;
  } else {
   VAR_14 = FUNC_5(VAR_9, &VAR_17, &VAR_18);
   if (VAR_14 != 0) {
    FUNC_7("error %d getting UCB\n", VAR_14);
    VAR_12->block_error.stat[0].scale = VAR_5;
   } else {
    VAR_12->block_error.stat[0].scale = VAR_3;
    VAR_12->block_error.stat[0].uvalue += VAR_17;
    VAR_12->block_count.stat[0].scale = VAR_3;
    VAR_12->block_count.stat[0].uvalue += VAR_18;
   }


   VAR_14 = FUNC_4(VAR_9, &VAR_15, &VAR_16);
   if (VAR_14 != 0) {
    FUNC_7("error %d getting pre-ber\n", VAR_14);
    VAR_12->pre_bit_error.stat[0].scale = VAR_5;
   } else {
    VAR_12->pre_bit_error.stat[0].scale = VAR_3;
    VAR_12->pre_bit_error.stat[0].uvalue += VAR_15;
    VAR_12->pre_bit_count.stat[0].scale = VAR_3;
    VAR_12->pre_bit_count.stat[0].uvalue += VAR_16;
   }

   VAR_14 = FUNC_3(VAR_9, &VAR_15, &VAR_16);
   if (VAR_14 != 0) {
    FUNC_7("error %d getting post-ber\n", VAR_14);
    VAR_12->post_bit_error.stat[0].scale = VAR_5;
   } else {
    VAR_12->post_bit_error.stat[0].scale = VAR_3;
    VAR_12->post_bit_error.stat[0].uvalue += VAR_15;
    VAR_12->post_bit_count.stat[0].scale = VAR_3;
    VAR_12->post_bit_count.stat[0].uvalue += VAR_16;
   }
   VAR_14 = FUNC_6(VAR_9, &VAR_19);
   if (VAR_14 != 0) {
    FUNC_7("error %d getting MER\n", VAR_14);
    VAR_12->cnr.stat[0].scale = VAR_5;
   } else {
    VAR_12->cnr.stat[0].svalue = VAR_19 * 100;
    VAR_12->cnr.stat[0].scale = VAR_4;
   }
  }
  break;

 case 130:
 case 129:
 case 128:
  VAR_14 = FUNC_0(VAR_7);
  if (VAR_14 != 0) {
   FUNC_7("error %d\n", VAR_14);
   goto rw_error;
  }
  break;

 default:
  return -VAR_2;
 }

 return 0;
rw_error:
 return VAR_14;
}
