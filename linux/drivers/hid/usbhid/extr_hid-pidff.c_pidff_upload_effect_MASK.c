
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pidff_device {int hid; TYPE_6__* block_load; scalar_t__* pid_id; int * type_id; } ;
struct input_dev {TYPE_1__* ff; } ;
struct TYPE_10__ {int envelope; } ;
struct TYPE_9__ {int envelope; int waveform; } ;
struct TYPE_8__ {int envelope; } ;
struct TYPE_11__ {TYPE_4__ ramp; TYPE_3__ periodic; TYPE_2__ constant; } ;
struct ff_effect {size_t id; int type; TYPE_5__ u; } ;
struct TYPE_12__ {scalar_t__* value; } ;
struct TYPE_7__ {struct pidff_device* private; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_3 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_4 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_7 (struct ff_effect*,struct ff_effect*) ;
 int FUNC_8 (struct pidff_device*,int ) ;
 int FUNC_9 (struct pidff_device*,struct ff_effect*) ;
 int FUNC_10 (struct pidff_device*,struct ff_effect*) ;
 int FUNC_11 (struct pidff_device*,struct ff_effect*) ;
 int FUNC_12 (struct pidff_device*,int *) ;
 int FUNC_13 (struct pidff_device*,struct ff_effect*) ;
 int FUNC_14 (struct pidff_device*,struct ff_effect*) ;

__attribute__((used)) static int FUNC_15(struct input_dev *VAR_13, struct ff_effect *VAR_14,
          struct ff_effect *VAR_15)
{
 struct pidff_device *VAR_16 = VAR_13->ff->private;
 int VAR_17;
 int VAR_18;

 VAR_16->block_load[VAR_3].value[0] = 0;
 if (VAR_15) {
  VAR_16->block_load[VAR_3].value[0] =
   VAR_16->pid_id[VAR_14->id];
 }

 switch (VAR_14->type) {
 case 139:
  if (!VAR_15) {
   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_1]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_3(VAR_14, VAR_15))
   FUNC_10(VAR_16, VAR_14);
  if (!VAR_15 ||
      FUNC_5(&VAR_14->u.constant.envelope,
     &VAR_15->u.constant.envelope))
   FUNC_12(VAR_16,
     &VAR_14->u.constant.envelope);
  break;

 case 135:
  if (!VAR_15) {
   switch (VAR_14->u.periodic.waveform) {
   case 129:
    VAR_17 = VAR_11;
    break;
   case 128:
    VAR_17 = VAR_12;
    break;
   case 131:
    VAR_17 = VAR_9;
    break;
   case 132:
    VAR_17 = VAR_8;
    break;
   case 133:
    VAR_17 = VAR_7;
    break;
   default:
    FUNC_1(VAR_16->hid, "invalid waveform\n");
    return -VAR_0;
   }

   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_17]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_6(VAR_14, VAR_15))
   FUNC_13(VAR_16, VAR_14);
  if (!VAR_15 ||
      FUNC_5(&VAR_14->u.periodic.envelope,
     &VAR_15->u.periodic.envelope))
   FUNC_12(VAR_16,
     &VAR_14->u.periodic.envelope);
  break;

 case 134:
  if (!VAR_15) {
   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_6]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_7(VAR_14, VAR_15))
   FUNC_14(VAR_16, VAR_14);
  if (!VAR_15 ||
      FUNC_5(&VAR_14->u.ramp.envelope,
     &VAR_15->u.ramp.envelope))
   FUNC_12(VAR_16,
     &VAR_14->u.ramp.envelope);
  break;

 case 130:
  if (!VAR_15) {
   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_10]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_2(VAR_14, VAR_15))
   FUNC_9(VAR_16, VAR_14);
  break;

 case 137:
  if (!VAR_15) {
   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_4]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_2(VAR_14, VAR_15))
   FUNC_9(VAR_16, VAR_14);
  break;

 case 138:
  if (!VAR_15) {
   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_2]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_2(VAR_14, VAR_15))
   FUNC_9(VAR_16, VAR_14);
  break;

 case 136:
  if (!VAR_15) {
   VAR_18 = FUNC_8(VAR_16,
     VAR_16->type_id[VAR_5]);
   if (VAR_18)
    return VAR_18;
  }
  if (!VAR_15 || FUNC_4(VAR_14, VAR_15))
   FUNC_11(VAR_16, VAR_14);
  if (!VAR_15 || FUNC_2(VAR_14, VAR_15))
   FUNC_9(VAR_16, VAR_14);
  break;

 default:
  FUNC_1(VAR_16->hid, "invalid type\n");
  return -VAR_0;
 }

 if (!VAR_15)
  VAR_16->pid_id[VAR_14->id] =
      VAR_16->block_load[VAR_3].value[0];

 FUNC_0(VAR_16->hid, "uploaded\n");

 return 0;
}
