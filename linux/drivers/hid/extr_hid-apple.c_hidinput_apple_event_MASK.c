
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct input_dev {int led; int key; } ;
struct hid_usage {int type; scalar_t__ code; } ;
struct hid_device {int product; scalar_t__ country; } ;
struct apple_sc {int fn_on; int quirks; int pressed_numlock; } ;
struct apple_key_translation {int flags; scalar_t__ to; scalar_t__ from; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct apple_key_translation* FUNC_0 (struct apple_key_translation const*,scalar_t__) ;
 struct apple_key_translation* VAR_7 ;
 struct apple_key_translation const* VAR_8 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_9 ;
 struct apple_sc* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct input_dev*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 struct apple_key_translation* VAR_11 ;
 struct apple_key_translation* VAR_12 ;
 struct apple_key_translation const* VAR_13 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_14 ;
 struct apple_key_translation const* VAR_15 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_16, struct input_dev *VAR_17,
  struct hid_usage *VAR_18, __s32 VAR_19)
{
 struct apple_sc *VAR_20 = FUNC_2(VAR_16);
 const struct apple_key_translation *VAR_21, *VAR_22;
 bool VAR_23;
 u16 VAR_24 = 0;

 if (VAR_18->code == VAR_3) {
  VAR_20->fn_on = !!VAR_19;
  FUNC_3(VAR_17, VAR_18->type, VAR_18->code, VAR_19);
  return 1;
 }

 if (VAR_9) {
  if (VAR_16->product >= VAR_6 &&
    VAR_16->product <= VAR_5)
   VAR_22 = VAR_11;
  else if (VAR_16->product < 0x21d || VAR_16->product >= 0x300)
   VAR_22 = VAR_12;
  else
   VAR_22 = VAR_7;

  VAR_21 = FUNC_0 (VAR_22, VAR_18->code);

  if (VAR_21) {
   if (FUNC_5(VAR_21->from, VAR_17->key))
    VAR_24 = VAR_21->from;
   else if (FUNC_5(VAR_21->to, VAR_17->key))
    VAR_24 = VAR_21->to;

   if (!VAR_24) {
    if (VAR_21->flags & VAR_0) {
     switch (VAR_9) {
     case 1:
      VAR_23 = !VAR_20->fn_on;
      break;
     case 2:
      VAR_23 = VAR_20->fn_on;
      break;
     default:

      VAR_23 = 0;
     }
    } else {
     VAR_23 = VAR_20->fn_on;
    }

    VAR_24 = VAR_23 ? VAR_21->to : VAR_21->from;
   }

   FUNC_3(VAR_17, VAR_18->type, VAR_24, VAR_19);
   return 1;
  }

  if (VAR_20->quirks & VAR_1 &&
    (FUNC_5(VAR_18->code, VAR_20->pressed_numlock) ||
    FUNC_5(VAR_4, VAR_17->led))) {
   VAR_21 = FUNC_0(VAR_13,
     VAR_18->code);

   if (VAR_21) {
    if (VAR_19)
     FUNC_4(VAR_18->code,
       VAR_20->pressed_numlock);
    else
     FUNC_1(VAR_18->code,
       VAR_20->pressed_numlock);

    FUNC_3(VAR_17, VAR_18->type, VAR_21->to,
      VAR_19);
   }

   return 1;
  }
 }

 if (VAR_10) {
  if (VAR_16->country == VAR_2) {
   VAR_21 = FUNC_0(VAR_8, VAR_18->code);
   if (VAR_21) {
    FUNC_3(VAR_17, VAR_18->type, VAR_21->to, VAR_19);
    return 1;
   }
  }
 }

 if (VAR_14) {
  VAR_21 = FUNC_0(VAR_15, VAR_18->code);
  if (VAR_21) {
   FUNC_3(VAR_17, VAR_18->type, VAR_21->to, VAR_19);
   return 1;
  }
 }

 return 0;
}
