
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_device_addr {int dummy; } ;
struct drxuio_data {int member_1; int value; int member_0; } ;
struct drxuio_cfg {scalar_t__ member_1; int member_0; } ;
struct drxj_data {int standard; scalar_t__ uio_sma_tx_mode; int reset_pkt_err_acc; int mirror; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct drx_channel {int bandwidth; scalar_t__ symbolrate; int constellation; int interleavemode; int mirror; } ;
typedef scalar_t__ s32 ;
typedef enum drx_standard { ____Placeholder_drx_standard } drx_standard ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;

 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct drx_demod_instance*,struct drxuio_cfg*) ;
 int FUNC_1 (struct drx_demod_instance*,struct drxuio_data*) ;
 int FUNC_2 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct drx_demod_instance*,struct drx_channel*,scalar_t__) ;
 int FUNC_5 (struct drx_demod_instance*,struct drx_channel*,scalar_t__) ;
 int FUNC_6 (struct drx_demod_instance*) ;

__attribute__((used)) static int
FUNC_7(struct drx_demod_instance *VAR_11, struct drx_channel *VAR_12)
{
 int VAR_13;
 s32 VAR_14 = 0;
 struct drxj_data *VAR_15 = ((void*)0);
 struct i2c_device_addr *VAR_16 = ((void*)0);
 enum drx_standard VAR_17 = 128;

 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;


 if ((VAR_11 == ((void*)0)) || (VAR_12 == ((void*)0)))
  return -VAR_7;

 VAR_16 = VAR_11->my_i2c_dev_addr;
 VAR_15 = (struct drxj_data *) VAR_11->my_ext_attr;
 VAR_17 = VAR_15->standard;


 switch (VAR_17) {
 case 132:

 case 131:
 case 130:
 case 129:

  break;
 case 128:
 default:
  return -VAR_7;
 }


 if ((VAR_17 == 130) ||
     (VAR_17 == 132) ||
     (VAR_17 == VAR_4)) {
  switch (VAR_12->bandwidth) {
  case 161:
  case 158:
   VAR_12->bandwidth = 161;
   break;
  case 159:
  case 160:
  default:
   return -VAR_7;
  }
 }






 if ((VAR_17 == 131) ||
     (VAR_17 == 129)) {
  struct drxuio_cfg VAR_22 = { VAR_5, VAR_6 };
  int VAR_23 = 0;

  VAR_23 = (VAR_17 == 131) ? 115 : 113;
  VAR_18 = VAR_1;
  VAR_19 = VAR_0;

  VAR_13 = FUNC_0(VAR_11, &VAR_22);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }

  if (VAR_12->symbolrate < VAR_18 ||
      VAR_12->symbolrate > VAR_19) {
   return -VAR_7;
  }

  switch (VAR_12->constellation) {
  case 155:
  case 153:
  case 152:
  case 156:
  case 154:
   VAR_20 = VAR_12->symbolrate * VAR_23;
   VAR_21 = VAR_20 / 100;

   if ((VAR_20 % 100) >= 50)
    VAR_21++;

   if (VAR_21 <= 6100000) {
    VAR_12->bandwidth = 161;
   } else if ((VAR_21 > 6100000)
       && (VAR_21 <= 7100000)) {
    VAR_12->bandwidth = 160;
   } else if (VAR_21 > 7100000) {
    VAR_12->bandwidth = 159;
   }
   break;
  default:
   return -VAR_7;
  }
 }




 if (VAR_17 == 130) {
  switch (VAR_12->constellation) {
  case 157:
  case 154:
  case 152:
   break;
  default:
   return -VAR_7;
  }

  switch (VAR_12->interleavemode) {
  case 148:
  case 147:
  case 146:
  case 135:
  case 145:
  case 137:
  case 144:
  case 138:
  case 143:
  case 134:
  case 142:
  case 141:
  case 140:
  case 139:
  case 136:
  case 150:
  case 149:
  case 133:
  case 151:
   break;
  default:
   return -VAR_7;
  }
 }

 if ((VAR_15->uio_sma_tx_mode) == VAR_6) {

  struct drxuio_data VAR_24 = { VAR_5, 0 };

  switch (VAR_12->bandwidth) {
  case 159:
   VAR_24 = 1;
   break;
  case 160:
   VAR_24 = 0;
   break;
  case 161:
   VAR_24 = 0;
   break;
  case 158:
  default:
   return -VAR_7;
  }

  VAR_13 = FUNC_1(VAR_11, &VAR_24);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }
 }

 VAR_13 = FUNC_2(VAR_16, VAR_10, VAR_9, 0);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }

 VAR_14 = 0;


 switch (VAR_17) {
 case 132:
  if (VAR_12->mirror == VAR_2)
   VAR_15->mirror = VAR_3;
  else
   VAR_15->mirror = VAR_12->mirror;
  VAR_13 = FUNC_6(VAR_11);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }
  VAR_13 = FUNC_4(VAR_11, VAR_12, VAR_14);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }
  break;

 case 131:
 case 130:
 case 129:
  VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_14);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }
  break;

 case 128:
 default:
  return -VAR_8;
 }


 VAR_15->reset_pkt_err_acc = 1;

 return 0;
rw_error:
 return VAR_13;
}
