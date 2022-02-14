
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;


 int FUNC_0 (struct drx_demod_instance*) ;
 int FUNC_1 (struct drx_demod_instance*,int*) ;
 int FUNC_2 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_3 (struct i2c_device_addr*,int ,int,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct drx_demod_instance*,struct drx_channel*) ;

__attribute__((used)) static int
FUNC_8(struct drx_demod_instance *VAR_11,
   struct drx_channel *VAR_12,
   s32 VAR_13, enum drx_lock_status *VAR_14)
{
 struct drxj_data *VAR_15 = VAR_11->my_ext_attr;
 struct i2c_device_addr *VAR_16 = VAR_11->my_i2c_dev_addr;
 struct drx39xxj_state *VAR_17 = VAR_16->user_data;
 struct dtv_frontend_properties *VAR_18 = &VAR_17->frontend.dtv_property_cache;
 int VAR_19;
 u32 VAR_20 = 130;
 u32 VAR_21 = 0;
 u32 VAR_22 = 0;
 u32 VAR_23 = 0;
 u16 VAR_24 = 0;


 *VAR_14 = VAR_8;
 VAR_21 = FUNC_4(VAR_10);
 VAR_20 = 130;
 do {
  VAR_19 = FUNC_1(VAR_11, VAR_14);
  if (VAR_19 != 0) {
   FUNC_6("error %d\n", VAR_19);
   goto rw_error;
  }

  switch (VAR_20) {
  case 130:
   if (*VAR_14 == VAR_0) {
    VAR_19 = FUNC_0(VAR_11);
    if (VAR_19 != 0) {
     FUNC_6("error %d\n", VAR_19);
     goto rw_error;
    }
    if (VAR_18->cnr.stat[0].svalue > 20800) {
     VAR_20 = 131;

     VAR_23 += VAR_1;
     VAR_22 = FUNC_4(VAR_10);
    }
   }
   break;
  case 131:
   if ((*VAR_14 == VAR_0) &&
       ((FUNC_4(VAR_10) - VAR_22) >
        VAR_2)) {
    VAR_19 = FUNC_2(VAR_11->my_i2c_dev_addr, VAR_9, &VAR_24, 0);
    if (VAR_19 != 0) {
     FUNC_6("error %d\n", VAR_19);
     goto rw_error;
    }
    VAR_19 = FUNC_3(VAR_11->my_i2c_dev_addr, VAR_9, VAR_24 | 0x1, 0);
    if (VAR_19 != 0) {
     FUNC_6("error %d\n", VAR_19);
     goto rw_error;
    }
    VAR_20 = 128;
    FUNC_5(10);
   }
   break;
  case 128:
   if (*VAR_14 == VAR_0) {
    if (VAR_12->mirror == VAR_5) {

     VAR_19 = FUNC_2(VAR_11->my_i2c_dev_addr, VAR_9, &VAR_24, 0);
     if (VAR_19 != 0) {
      FUNC_6("error %d\n", VAR_19);
      goto rw_error;
     }
     VAR_19 = FUNC_3(VAR_11->my_i2c_dev_addr, VAR_9, VAR_24 & 0xFFFE, 0);
     if (VAR_19 != 0) {
      FUNC_6("error %d\n", VAR_19);
      goto rw_error;
     }

     VAR_15->mirror = VAR_6;
     VAR_19 = FUNC_7(VAR_11, VAR_12);
     if (VAR_19 != 0) {
      FUNC_6("error %d\n", VAR_19);
      goto rw_error;
     }
     VAR_20 = 129;

     VAR_21 = VAR_22 =
         FUNC_4(VAR_10);
     VAR_23 = 0;
    } else {

     VAR_21 =
         FUNC_4(VAR_10) -
         VAR_3 - VAR_23;
    }
   }
   break;
  case 129:
   if ((*VAR_14 == VAR_0) &&
       ((FUNC_4(VAR_10) - VAR_22) >
        VAR_2)) {
    VAR_19 = FUNC_0(VAR_11);
    if (VAR_19 != 0) {
     FUNC_6("error %d\n", VAR_19);
     goto rw_error;
    }
    if (VAR_18->cnr.stat[0].svalue > 20800) {
     VAR_19 = FUNC_2(VAR_11->my_i2c_dev_addr, VAR_9, &VAR_24, 0);
     if (VAR_19 != 0) {
      FUNC_6("error %d\n", VAR_19);
      goto rw_error;
     }
     VAR_19 = FUNC_3(VAR_11->my_i2c_dev_addr, VAR_9, VAR_24 | 0x1, 0);
     if (VAR_19 != 0) {
      FUNC_6("error %d\n", VAR_19);
      goto rw_error;
     }

     VAR_21 =
         FUNC_4(VAR_10) -
         VAR_3 - VAR_23;
    }
   }
   break;
  default:
   break;
  }
  FUNC_5(10);
 } while
     ((*VAR_14 != VAR_4) &&
      (*VAR_14 != VAR_7) &&
      ((FUNC_4(VAR_10) - VAR_21) <
       (VAR_3 + VAR_23))
     );


 return 0;
rw_error:
 return VAR_19;
}
