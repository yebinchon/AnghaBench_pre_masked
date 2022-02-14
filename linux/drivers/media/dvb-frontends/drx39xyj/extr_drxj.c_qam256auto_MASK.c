
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i2c_device_addr {struct drx39xxj_state* user_data; } ;
struct TYPE_6__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_3__ cnr; } ;
struct drxj_data {int mirror; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; struct drxj_data* my_ext_attr; } ;
struct drx_channel {int mirror; } ;
struct TYPE_4__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct drx39xxj_state {TYPE_1__ frontend; } ;
typedef int s32 ;
typedef enum drx_lock_status { ____Placeholder_drx_lock_status } drx_lock_status ;
struct TYPE_5__ {int svalue; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (struct drx_demod_instance*) ;
 int FUNC_1 (struct drx_demod_instance*,int*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct drx_demod_instance*,struct drx_channel*) ;

__attribute__((used)) static int
FUNC_6(struct drx_demod_instance *VAR_10,
    struct drx_channel *VAR_11,
    s32 VAR_12, enum drx_lock_status *VAR_13)
{
 struct drxj_data *VAR_14 = VAR_10->my_ext_attr;
 struct i2c_device_addr *VAR_15 = VAR_10->my_i2c_dev_addr;
 struct drx39xxj_state *VAR_16 = VAR_15->user_data;
 struct dtv_frontend_properties *VAR_17 = &VAR_16->frontend.dtv_property_cache;
 int VAR_18;
 u32 VAR_19 = 129;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 u32 VAR_22 = VAR_1;


 *VAR_13 = VAR_8;
 VAR_20 = FUNC_2(VAR_9);
 VAR_19 = 129;
 do {
  VAR_18 = FUNC_1(VAR_10, VAR_13);
  if (VAR_18 != 0) {
   FUNC_4("error %d\n", VAR_18);
   goto rw_error;
  }
  switch (VAR_19) {
  case 129:
   if (*VAR_13 == VAR_0) {
    VAR_18 = FUNC_0(VAR_10);
    if (VAR_18 != 0) {
     FUNC_4("error %d\n", VAR_18);
     goto rw_error;
    }
    if (VAR_17->cnr.stat[0].svalue > 26800) {
     VAR_19 = 130;
     VAR_22 += VAR_1;
     VAR_21 = FUNC_2(VAR_9);
    }
   }
   break;
  case 130:
   if (*VAR_13 == VAR_0) {
    if ((VAR_11->mirror == VAR_5) &&
        ((FUNC_2(VAR_9) - VAR_21) >
         VAR_2)) {
     VAR_14->mirror = VAR_6;
     VAR_18 = FUNC_5(VAR_10, VAR_11);
     if (VAR_18 != 0) {
      FUNC_4("error %d\n", VAR_18);
      goto rw_error;
     }
     VAR_19 = 128;

     VAR_20 = FUNC_2(VAR_9);
     VAR_22 = -VAR_3 / 2;
    }
   }
   break;
  case 128:
   break;
  default:
   break;
  }
  FUNC_3(10);
 } while
     ((*VAR_13 < VAR_4) &&
      (*VAR_13 != VAR_7) &&
      ((FUNC_2(VAR_9) - VAR_20) <
       (VAR_3 + VAR_22)));

 return 0;
rw_error:
 return VAR_18;
}
