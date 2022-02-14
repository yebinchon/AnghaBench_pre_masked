
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
struct input_dev {TYPE_1__* ff; } ;
struct hidpp_ff_private_data {TYPE_11__* hidpp; } ;
struct TYPE_20__ {int attack_level; int attack_length; int fade_level; int fade_length; } ;
struct TYPE_21__ {int start_level; int end_level; TYPE_7__ envelope; } ;
struct TYPE_18__ {int attack_level; int attack_length; int fade_level; int fade_length; } ;
struct TYPE_19__ {int waveform; int magnitude; int offset; int period; int phase; TYPE_5__ envelope; } ;
struct TYPE_16__ {int attack_level; int attack_length; int fade_level; int fade_length; } ;
struct TYPE_17__ {int level; TYPE_3__ envelope; } ;
struct TYPE_12__ {TYPE_9__* condition; TYPE_8__ ramp; TYPE_6__ periodic; TYPE_4__ constant; } ;
struct TYPE_15__ {int length; int delay; } ;
struct ff_effect {int type; int direction; int id; TYPE_10__ u; TYPE_2__ replay; } ;
struct TYPE_22__ {int left_saturation; int left_coeff; int deadband; int center; int right_coeff; int right_saturation; } ;
struct TYPE_14__ {struct hidpp_ff_private_data* private; } ;
struct TYPE_13__ {int hid_dev; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct hidpp_ff_private_data*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_11, struct ff_effect *VAR_12, struct ff_effect *VAR_13)
{
 struct hidpp_ff_private_data *VAR_14 = VAR_11->ff->private;
 u8 VAR_15[20];
 u8 VAR_16;
 int VAR_17;


 VAR_15[2] = VAR_12->replay.length >> 8;
 VAR_15[3] = VAR_12->replay.length & 255;
 VAR_15[4] = VAR_12->replay.delay >> 8;
 VAR_15[5] = VAR_12->replay.delay & 255;

 switch (VAR_12->type) {
 case 139:
  VAR_17 = (VAR_12->u.constant.level * FUNC_1((VAR_12->direction * 360) >> 16)) >> 15;
  VAR_15[1] = VAR_4;
  VAR_15[6] = VAR_17 >> 8;
  VAR_15[7] = VAR_17 & 255;
  VAR_15[8] = VAR_12->u.constant.envelope.attack_level >> 7;
  VAR_15[9] = VAR_12->u.constant.envelope.attack_length >> 8;
  VAR_15[10] = VAR_12->u.constant.envelope.attack_length & 255;
  VAR_15[11] = VAR_12->u.constant.envelope.fade_level >> 7;
  VAR_15[12] = VAR_12->u.constant.envelope.fade_length >> 8;
  VAR_15[13] = VAR_12->u.constant.envelope.fade_length & 255;
  VAR_16 = 14;
  FUNC_0("Uploading constant force level=%d in dir %d = %d\n",
    VAR_12->u.constant.level,
    VAR_12->direction, VAR_17);
  FUNC_0("          envelope attack=(%d, %d ms) fade=(%d, %d ms)\n",
    VAR_12->u.constant.envelope.attack_level,
    VAR_12->u.constant.envelope.attack_length,
    VAR_12->u.constant.envelope.fade_level,
    VAR_12->u.constant.envelope.fade_length);
  break;
 case 135:
 {
  switch (VAR_12->u.periodic.waveform) {
  case 131:
   VAR_15[1] = VAR_7;
   break;
  case 129:
   VAR_15[1] = VAR_8;
   break;
  case 132:
   VAR_15[1] = VAR_6;
   break;
  case 133:
   VAR_15[1] = VAR_5;
   break;
  case 128:
   VAR_15[1] = VAR_9;
   break;
  default:
   FUNC_2(VAR_14->hidpp->hid_dev, "Unexpected periodic waveform type %i!\n", VAR_12->u.periodic.waveform);
   return -VAR_0;
  }
  VAR_17 = (VAR_12->u.periodic.magnitude * FUNC_1((VAR_12->direction * 360) >> 16)) >> 15;
  VAR_15[6] = VAR_12->u.periodic.magnitude >> 8;
  VAR_15[7] = VAR_12->u.periodic.magnitude & 255;
  VAR_15[8] = VAR_12->u.periodic.offset >> 8;
  VAR_15[9] = VAR_12->u.periodic.offset & 255;
  VAR_15[10] = VAR_12->u.periodic.period >> 8;
  VAR_15[11] = VAR_12->u.periodic.period & 255;
  VAR_15[12] = VAR_12->u.periodic.phase >> 8;
  VAR_15[13] = VAR_12->u.periodic.phase & 255;
  VAR_15[14] = VAR_12->u.periodic.envelope.attack_level >> 7;
  VAR_15[15] = VAR_12->u.periodic.envelope.attack_length >> 8;
  VAR_15[16] = VAR_12->u.periodic.envelope.attack_length & 255;
  VAR_15[17] = VAR_12->u.periodic.envelope.fade_level >> 7;
  VAR_15[18] = VAR_12->u.periodic.envelope.fade_length >> 8;
  VAR_15[19] = VAR_12->u.periodic.envelope.fade_length & 255;
  VAR_16 = 20;
  FUNC_0("Uploading periodic force mag=%d/dir=%d, offset=%d, period=%d ms, phase=%d\n",
    VAR_12->u.periodic.magnitude, VAR_12->direction,
    VAR_12->u.periodic.offset,
    VAR_12->u.periodic.period,
    VAR_12->u.periodic.phase);
  FUNC_0("          envelope attack=(%d, %d ms) fade=(%d, %d ms)\n",
    VAR_12->u.periodic.envelope.attack_level,
    VAR_12->u.periodic.envelope.attack_length,
    VAR_12->u.periodic.envelope.fade_level,
    VAR_12->u.periodic.envelope.fade_length);
  break;
 }
 case 134:
  VAR_15[1] = VAR_10;
  VAR_17 = (VAR_12->u.ramp.start_level * FUNC_1((VAR_12->direction * 360) >> 16)) >> 15;
  VAR_15[6] = VAR_17 >> 8;
  VAR_15[7] = VAR_17 & 255;
  VAR_17 = (VAR_12->u.ramp.end_level * FUNC_1((VAR_12->direction * 360) >> 16)) >> 15;
  VAR_15[8] = VAR_17 >> 8;
  VAR_15[9] = VAR_17 & 255;
  VAR_15[10] = VAR_12->u.ramp.envelope.attack_level >> 7;
  VAR_15[11] = VAR_12->u.ramp.envelope.attack_length >> 8;
  VAR_15[12] = VAR_12->u.ramp.envelope.attack_length & 255;
  VAR_15[13] = VAR_12->u.ramp.envelope.fade_level >> 7;
  VAR_15[14] = VAR_12->u.ramp.envelope.fade_length >> 8;
  VAR_15[15] = VAR_12->u.ramp.envelope.fade_length & 255;
  VAR_16 = 16;
  FUNC_0("Uploading ramp force level=%d -> %d in dir %d = %d\n",
    VAR_12->u.ramp.start_level,
    VAR_12->u.ramp.end_level,
    VAR_12->direction, VAR_17);
  FUNC_0("          envelope attack=(%d, %d ms) fade=(%d, %d ms)\n",
    VAR_12->u.ramp.envelope.attack_level,
    VAR_12->u.ramp.envelope.attack_length,
    VAR_12->u.ramp.envelope.fade_level,
    VAR_12->u.ramp.envelope.fade_length);
  break;
 case 137:
 case 136:
 case 130:
 case 138:
  VAR_15[1] = VAR_1[VAR_12->type - 130];
  VAR_15[6] = VAR_12->u.condition[0].left_saturation >> 9;
  VAR_15[7] = (VAR_12->u.condition[0].left_saturation >> 1) & 255;
  VAR_15[8] = VAR_12->u.condition[0].left_coeff >> 8;
  VAR_15[9] = VAR_12->u.condition[0].left_coeff & 255;
  VAR_15[10] = VAR_12->u.condition[0].deadband >> 9;
  VAR_15[11] = (VAR_12->u.condition[0].deadband >> 1) & 255;
  VAR_15[12] = VAR_12->u.condition[0].center >> 8;
  VAR_15[13] = VAR_12->u.condition[0].center & 255;
  VAR_15[14] = VAR_12->u.condition[0].right_coeff >> 8;
  VAR_15[15] = VAR_12->u.condition[0].right_coeff & 255;
  VAR_15[16] = VAR_12->u.condition[0].right_saturation >> 9;
  VAR_15[17] = (VAR_12->u.condition[0].right_saturation >> 1) & 255;
  VAR_16 = 18;
  FUNC_0("Uploading %s force left coeff=%d, left sat=%d, right coeff=%d, right sat=%d\n",
    VAR_2[VAR_12->type - 130],
    VAR_12->u.condition[0].left_coeff,
    VAR_12->u.condition[0].left_saturation,
    VAR_12->u.condition[0].right_coeff,
    VAR_12->u.condition[0].right_saturation);
  FUNC_0("          deadband=%d, center=%d\n",
    VAR_12->u.condition[0].deadband,
    VAR_12->u.condition[0].center);
  break;
 default:
  FUNC_2(VAR_14->hidpp->hid_dev, "Unexpected force type %i!\n", VAR_12->type);
  return -VAR_0;
 }

 return FUNC_3(VAR_14, VAR_12->id, VAR_3, VAR_15, VAR_16);
}
