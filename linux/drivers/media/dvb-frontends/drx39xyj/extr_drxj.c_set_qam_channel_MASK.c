
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxj_data {int constellation; void* mirror; int standard; } ;
struct drx_demod_instance {int my_i2c_dev_addr; scalar_t__ my_ext_attr; } ;
struct drx_channel {int constellation; void* mirror; } ;
typedef int s32 ;
typedef enum drx_lock_status { ____Placeholder_drx_lock_status } drx_lock_status ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct drx_demod_instance*,struct drx_channel*,int ,int*) ;
 int FUNC_4 (struct drx_demod_instance*,struct drx_channel*,int ,int*) ;
 int FUNC_5 (struct drx_demod_instance*,struct drx_channel*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct drx_demod_instance *VAR_12,
        struct drx_channel *VAR_13, s32 VAR_14)
{
 struct drxj_data *VAR_15 = ((void*)0);
 int VAR_16;
 enum drx_lock_status VAR_17 = VAR_3;
 bool VAR_18 = 0;


 VAR_15 = (struct drxj_data *) VAR_12->my_ext_attr;


 switch (VAR_13->constellation) {
 case 131:
 case 129:
 case 132:
  return -VAR_6;
 case 128:
 case 130:
  if (VAR_15->standard != VAR_4)
   return -VAR_6;

  VAR_15->constellation = VAR_13->constellation;
  if (VAR_13->mirror == VAR_1)
   VAR_15->mirror = VAR_2;
  else
   VAR_15->mirror = VAR_13->mirror;

  VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_14, VAR_7);
  if (VAR_16 != 0) {
   FUNC_2("error %d\n", VAR_16);
   goto rw_error;
  }

  if (VAR_13->constellation == 128)
   VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_14,
           &VAR_17);
  else
   VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14,
     &VAR_17);
  if (VAR_16 != 0) {
   FUNC_2("error %d\n", VAR_16);
   goto rw_error;
  }
  break;
 case 133:
  if (VAR_15->standard == VAR_4) {
   u16 VAR_19 = 0;

   VAR_18 = 1;


   VAR_13->constellation = 130;
   VAR_15->constellation = 130;
   if (VAR_13->mirror == VAR_1)
    VAR_15->mirror = VAR_2;
   else
    VAR_15->mirror = VAR_13->mirror;
   VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_14,
         VAR_7);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14,
     &VAR_17);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }

   if (VAR_17 >= VAR_0) {
    VAR_13->constellation = 133;
    break;
   }


   VAR_13->constellation = 128;
   VAR_15->constellation = 128;
   if (VAR_13->mirror == VAR_1)
    VAR_15->mirror = VAR_2;
   else
    VAR_15->mirror = VAR_13->mirror;

   VAR_16 = FUNC_0(VAR_12->my_i2c_dev_addr,
           VAR_10,
           &VAR_19, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_1(VAR_12->my_i2c_dev_addr,
            VAR_10,
            VAR_19 & ~VAR_9, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_1(VAR_12->my_i2c_dev_addr,
            VAR_11,
            0x2, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }

   VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_14,
         VAR_8);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_1(VAR_12->my_i2c_dev_addr,
            VAR_10,
            VAR_19, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }

   VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_14,
           &VAR_17);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }

   VAR_13->constellation = 133;
  } else if (VAR_15->standard == VAR_5) {
   u16 VAR_20 = 0;

   VAR_13->constellation = 128;
   VAR_15->constellation = 128;
   VAR_18 = 1;

   if (VAR_13->mirror == VAR_1)
    VAR_15->mirror = VAR_2;
   else
    VAR_15->mirror = VAR_13->mirror;
   VAR_16 = FUNC_0(VAR_12->my_i2c_dev_addr,
           VAR_10,
           &VAR_20, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_1(VAR_12->my_i2c_dev_addr,
            VAR_10,
            VAR_20 & ~VAR_9, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_1(VAR_12->my_i2c_dev_addr,
            VAR_11,
            0x2, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }

   VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_14,
         VAR_8);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_1(VAR_12->my_i2c_dev_addr,
            VAR_10,
            VAR_20, 0);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_14,
           &VAR_17);
   if (VAR_16 != 0) {
    FUNC_2("error %d\n", VAR_16);
    goto rw_error;
   }
   VAR_13->constellation = 133;
  } else {
   return -VAR_6;
  }
  break;
 default:
  return -VAR_6;
 }

 return 0;
rw_error:

 if (VAR_18)
  VAR_13->constellation = 133;
 return VAR_16;
}
