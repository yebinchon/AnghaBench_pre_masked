
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int key; } ;
struct hid_usage {scalar_t__ type; scalar_t__ hat_min; scalar_t__ hat_max; int hat_dir; int code; int hid; size_t usage_index; } ;
struct hid_field {int logical_minimum; int logical_maximum; int flags; size_t maxusage; int* value; TYPE_1__* hidinput; } ;
struct hid_device {unsigned int quirks; } ;
typedef int __s32 ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_3__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__* VAR_21 ;
 int FUNC_3 (struct hid_usage*,struct input_dev*,int) ;
 int FUNC_4 (struct hid_device*,int) ;
 int FUNC_5 (struct input_dev*,scalar_t__,int,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int,int ) ;

void FUNC_8(struct hid_device *VAR_22, struct hid_field *VAR_23, struct hid_usage *VAR_24, __s32 VAR_25)
{
 struct input_dev *VAR_26;
 unsigned *VAR_27 = &VAR_22->quirks;

 if (!VAR_24->type)
  return;

 if (VAR_24->type == VAR_6) {
  FUNC_4(VAR_22, VAR_25);
  return;
 }

 if (!VAR_23->hidinput)
  return;

 VAR_26 = VAR_23->hidinput->input;

 if (VAR_24->hat_min < VAR_24->hat_max || VAR_24->hat_dir) {
  int VAR_28 = VAR_24->hat_dir;
  if (!VAR_28)
   VAR_28 = (VAR_25 - VAR_24->hat_min) * 8 / (VAR_24->hat_max - VAR_24->hat_min + 1) + 1;
  if (VAR_28 < 0 || VAR_28 > 8) VAR_28 = 0;
  FUNC_5(VAR_26, VAR_24->type, VAR_24->code , VAR_21[VAR_28].x);
  FUNC_5(VAR_26, VAR_24->type, VAR_24->code + 1, VAR_21[VAR_28].y);
  return;
 }

 if (VAR_24->hid == (VAR_14 | 0x003c)) {
  *VAR_27 = VAR_25 ? (*VAR_27 | VAR_12) : (*VAR_27 & ~VAR_12);
  return;
 }

 if (VAR_24->hid == (VAR_14 | 0x0032)) {
  if (VAR_25) {
   FUNC_5(VAR_26, VAR_24->type, (*VAR_27 & VAR_12) ? VAR_1 : VAR_24->code, 1);
   return;
  }
  FUNC_5(VAR_26, VAR_24->type, VAR_24->code, 0);
  FUNC_5(VAR_26, VAR_24->type, VAR_1, 0);
  return;
 }

 if (VAR_24->hid == (VAR_14 | 0x0030) && (*VAR_27 & VAR_13)) {
  int VAR_29 = VAR_23->logical_minimum;
  int VAR_30 = VAR_23->logical_maximum;
  FUNC_5(VAR_26, VAR_4, VAR_2, VAR_25 > VAR_29 + ((VAR_30 - VAR_29) >> 3));
 }

 if (VAR_24->hid == (VAR_15 | 0x83UL)) {
  FUNC_2("Maximum Effects - %d\n",VAR_25);
  return;
 }

 if (VAR_24->hid == (VAR_15 | 0x7fUL)) {
  FUNC_2("PID Pool Report\n");
  return;
 }

 if ((VAR_24->type == VAR_4) && (VAR_24->code == 0))
  return;

 if ((VAR_24->type == VAR_7) && (VAR_24->code == VAR_20 ||
     VAR_24->code == VAR_19)) {
  FUNC_3(VAR_24, VAR_26, VAR_25);
  return;
 }

 if ((VAR_24->type == VAR_3) && (VAR_23->flags & VAR_10) &&
   (VAR_24->code == VAR_0)) {
  int VAR_31 = FUNC_0(VAR_25);
  int VAR_32 = VAR_25 > 0 ? VAR_17 : VAR_16;
  int VAR_33;

  for (VAR_33 = 0; VAR_33 < VAR_31; VAR_33++) {
   FUNC_5(VAR_26, VAR_4, VAR_32, 1);
   FUNC_6(VAR_26);
   FUNC_5(VAR_26, VAR_4, VAR_32, 0);
   FUNC_6(VAR_26);
  }
  return;
 }
 if ((VAR_23->flags & VAR_11) &&
     (VAR_23->logical_minimum < VAR_23->logical_maximum)) {
  if (VAR_23->flags & VAR_9 &&
      (VAR_25 < VAR_23->logical_minimum ||
       VAR_25 > VAR_23->logical_maximum)) {
   FUNC_2("Ignoring out-of-range value %x\n", VAR_25);
   return;
  }
  VAR_25 = FUNC_1(VAR_25,
         VAR_23->logical_minimum,
         VAR_23->logical_maximum);
 }
 if (!(VAR_23->flags & (VAR_10 |
                       VAR_8)) &&
         (VAR_23->flags & VAR_11) &&
     VAR_24->usage_index < VAR_23->maxusage &&
     VAR_25 == VAR_23->value[VAR_24->usage_index])
  return;


 if (VAR_24->type == VAR_4 &&
     (!FUNC_7(VAR_24->code, VAR_26->key)) == VAR_25)
  FUNC_5(VAR_26, VAR_5, VAR_18, VAR_24->hid);

 FUNC_5(VAR_26, VAR_24->type, VAR_24->code, VAR_25);

 if ((VAR_23->flags & VAR_10) &&
     VAR_24->type == VAR_4 && VAR_25) {
  FUNC_6(VAR_26);
  FUNC_5(VAR_26, VAR_24->type, VAR_24->code, 0);
 }
}
