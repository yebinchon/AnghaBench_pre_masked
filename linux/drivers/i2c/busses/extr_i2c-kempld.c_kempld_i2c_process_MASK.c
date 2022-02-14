
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kempld_i2c_data {scalar_t__ state; int pos; scalar_t__ nmsgs; struct i2c_msg* msg; struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;
struct i2c_msg {int flags; int addr; int* buf; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_0 (struct i2c_msg*) ;
 void* FUNC_1 (struct kempld_device_data*,int ) ;
 int FUNC_2 (struct kempld_device_data*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct kempld_i2c_data *VAR_28)
{
 struct kempld_device_data *VAR_29 = VAR_28->pld;
 u8 VAR_30 = FUNC_1(VAR_29, VAR_19);
 struct i2c_msg *VAR_31 = VAR_28->msg;
 u8 VAR_32;


 if (VAR_30 & VAR_16)
  return -VAR_1;

 if (VAR_28->state == VAR_22 || VAR_28->state == VAR_23) {

  FUNC_2(VAR_29, VAR_17, VAR_4);
  if (VAR_28->state == VAR_23)
   return -VAR_2;
  return 0;
 }


 if (VAR_30 & VAR_13) {
  VAR_28->state = VAR_23;
  FUNC_2(VAR_29, VAR_17, VAR_8);
  return -VAR_0;
 }

 if (VAR_28->state == VAR_24) {
  if (VAR_30 & VAR_14)
   return -VAR_1;

  VAR_28->state = VAR_20;
 }

 if (VAR_28->state == VAR_20) {

  if (VAR_28->msg->flags & VAR_12) {
   VAR_32 = 0xf0 | ((VAR_28->msg->addr >> 7) & 0x6);

   VAR_32 |= (VAR_28->msg->flags & VAR_11) ? 1 : 0;
   VAR_28->state = VAR_21;
  } else {
   VAR_32 = FUNC_0(VAR_28->msg);
   VAR_28->state = VAR_26;
  }

  FUNC_2(VAR_29, VAR_18, VAR_32);
  FUNC_2(VAR_29, VAR_17, VAR_7);

  return 0;
 }


 if (VAR_28->state == VAR_21) {
  FUNC_2(VAR_29, VAR_18, VAR_28->msg->addr & 0xff);
  FUNC_2(VAR_29, VAR_17, VAR_9);

  VAR_28->state = VAR_26;
  return 0;
 }

 if (VAR_28->state == VAR_26 || VAR_28->state == VAR_27) {
  VAR_28->state = (VAR_31->flags & VAR_11) ? VAR_25 : VAR_27;

  if (VAR_30 & VAR_15) {
   VAR_28->state = VAR_23;
   FUNC_2(VAR_29, VAR_17, VAR_8);
   return -VAR_3;
  }
 } else {
  VAR_31->buf[VAR_28->pos++] = FUNC_1(VAR_29, VAR_18);
 }

 if (VAR_28->pos >= VAR_31->len) {
  VAR_28->nmsgs--;
  VAR_28->msg++;
  VAR_28->pos = 0;
  VAR_31 = VAR_28->msg;

  if (VAR_28->nmsgs) {
   if (!(VAR_31->flags & VAR_10)) {
    VAR_28->state = VAR_20;
    return 0;
   } else {
    VAR_28->state = (VAR_31->flags & VAR_11)
     ? VAR_25 : VAR_27;
   }
  } else {
   VAR_28->state = VAR_22;
   FUNC_2(VAR_29, VAR_17, VAR_8);
   return 0;
  }
 }

 if (VAR_28->state == VAR_25) {
  FUNC_2(VAR_29, VAR_17, VAR_28->pos == (VAR_31->len - 1) ?
         VAR_6 : VAR_5);
 } else {
  FUNC_2(VAR_29, VAR_18, VAR_31->buf[VAR_28->pos++]);
  FUNC_2(VAR_29, VAR_17, VAR_9);
 }

 return 0;
}
