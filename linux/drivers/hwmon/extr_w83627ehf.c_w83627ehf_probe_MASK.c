
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_20__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u8 ;
struct w83627ehf_sio_data {size_t kind; int sioreg; } ;
struct w83627ehf_data {int bank; int in_num; int pwm_num; int have_temp; int* reg_temp_config; int* temp_src; int in6_skip; int have_temp_offset; int temp3_val_only; int has_fan_div; int* REG_FAN_STEP_OUTPUT; int vrm; int vid; int has_fan; int has_fan_min; int hwmon_dev; scalar_t__* reg_temp_hyst; scalar_t__* reg_temp_over; void* temp_label; int * pwm_enable; int * pwm_enable_orig; int name; int scale_in; int REG_FAN_MAX_OUTPUT; void* REG_FAN_STOP_TIME; void* REG_FAN_STOP_OUTPUT; void* REG_FAN_START_OUTPUT; void* REG_FAN_MIN; void* REG_FAN; void* REG_TARGET; void* REG_PWM; void* fan_from_reg_min; void* fan_from_reg; int * reg_temp; int update_lock; int lock; scalar_t__ addr; } ;
struct sensor_device_attribute {size_t index; int dev_attr; } ;
struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_42__ {int dev_attr; } ;
struct TYPE_41__ {int dev_attr; } ;
struct TYPE_40__ {int dev_attr; } ;
struct TYPE_39__ {int dev_attr; } ;
struct TYPE_38__ {int dev_attr; } ;
struct TYPE_37__ {int dev_attr; } ;
struct TYPE_36__ {int dev_attr; } ;
struct TYPE_35__ {int dev_attr; } ;
struct TYPE_34__ {int dev_attr; } ;
struct TYPE_33__ {int dev_attr; } ;
struct TYPE_32__ {int dev_attr; } ;
struct TYPE_31__ {int dev_attr; } ;
struct TYPE_30__ {int dev_attr; } ;
struct TYPE_29__ {int dev_attr; } ;
struct TYPE_28__ {int dev_attr; } ;
struct TYPE_27__ {int dev_attr; } ;
struct TYPE_26__ {int dev_attr; } ;
struct TYPE_25__ {int dev_attr; } ;
struct TYPE_24__ {int dev_attr; } ;
struct TYPE_23__ {int dev_attr; } ;
struct TYPE_22__ {int dev_attr; } ;


 int FUNC_0 (struct sensor_device_attribute*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int* VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;
 int* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int* VAR_31 ;
 int* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 int* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_3 (struct device*,char*,unsigned long,scalar_t__) ;
 struct w83627ehf_sio_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,int *) ;
 struct w83627ehf_data* FUNC_8 (struct device*,int,int ) ;
 scalar_t__ VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (int *) ;

 void* VAR_45 ;

 void* VAR_46 ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct w83627ehf_data*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__,int ) ;
 int VAR_47 ;
 int VAR_48 ;
 TYPE_21__* VAR_49 ;
 TYPE_20__* VAR_50 ;
 TYPE_19__* VAR_51 ;
 TYPE_18__* VAR_52 ;
 TYPE_17__* VAR_53 ;
 TYPE_16__* VAR_54 ;
 TYPE_15__* VAR_55 ;
 TYPE_14__* VAR_56 ;
 TYPE_13__* VAR_57 ;
 TYPE_12__* VAR_58 ;
 TYPE_11__* VAR_59 ;
 TYPE_10__* VAR_60 ;
 struct sensor_device_attribute* VAR_61 ;
 struct sensor_device_attribute* VAR_62 ;
 struct sensor_device_attribute* VAR_63 ;
 struct sensor_device_attribute* VAR_64 ;
 TYPE_9__* VAR_65 ;
 TYPE_8__* VAR_66 ;
 TYPE_7__* VAR_67 ;
 TYPE_6__* VAR_68 ;
 TYPE_5__* VAR_69 ;
 TYPE_4__* VAR_70 ;
 TYPE_3__* VAR_71 ;
 TYPE_2__* VAR_72 ;
 TYPE_1__* VAR_73 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (struct w83627ehf_data*,int,int) ;
 size_t VAR_74 ;
 int FUNC_23 (struct w83627ehf_sio_data*,struct w83627ehf_data*) ;
 int * VAR_75 ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct w83627ehf_data*,int const) ;
 int FUNC_26 (struct w83627ehf_data*,int) ;
 int FUNC_27 (struct w83627ehf_data*,int) ;
 int FUNC_28 (struct device*,struct w83627ehf_data*) ;
 int FUNC_29 (struct device*,struct w83627ehf_data*) ;



 void* VAR_76 ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_77)
{
 struct device *VAR_78 = &VAR_77->dev;
 struct w83627ehf_sio_data *VAR_79 = FUNC_4(VAR_78);
 struct w83627ehf_data *VAR_80;
 struct resource *VAR_81;
 u8 VAR_82;
 int VAR_83, VAR_84 = 0;

 VAR_81 = FUNC_11(VAR_77, VAR_5, 0);
 if (!FUNC_15(VAR_81->start, VAR_4, VAR_0)) {
  VAR_84 = -VAR_1;
  FUNC_3(VAR_78, "Failed to request region 0x%lx-0x%lx\n",
   (unsigned long)VAR_81->start,
   (unsigned long)VAR_81->start + VAR_4 - 1);
  goto exit;
 }

 VAR_80 = FUNC_8(&VAR_77->dev, sizeof(struct w83627ehf_data),
       VAR_3);
 if (!VAR_80) {
  VAR_84 = -VAR_2;
  goto exit_release;
 }

 VAR_80->addr = VAR_81->start;
 FUNC_10(&VAR_80->lock);
 FUNC_10(&VAR_80->update_lock);
 VAR_80->name = VAR_75[VAR_79->kind];
 VAR_80->bank = 0xff;
 FUNC_12(VAR_77, VAR_80);


 VAR_80->in_num = (VAR_79->kind == VAR_74) ? 10 : 9;

 switch (VAR_79->kind) {
 default:
  VAR_80->pwm_num = 4;
  break;
 case 129:
 case 128:
 case 132:
 case 131:
  VAR_80->pwm_num = 3;
  break;
 case 130:
  VAR_80->pwm_num = 2;
  break;
 }


 VAR_80->have_temp = 0x07;


 if (VAR_79->kind == 132 || VAR_79->kind == 131) {
  int VAR_85 = 0;






  for (VAR_83 = 0; VAR_83 < VAR_21; VAR_83++) {
   u8 VAR_86;

   VAR_80->reg_temp[VAR_83] = VAR_15[VAR_83];
   VAR_80->reg_temp_over[VAR_83] = VAR_18[VAR_83];
   VAR_80->reg_temp_hyst[VAR_83] = VAR_17[VAR_83];
   VAR_80->reg_temp_config[VAR_83] = VAR_16[VAR_83];

   VAR_86 = FUNC_26(VAR_80,
         VAR_19[VAR_83]);
   VAR_86 &= 0x1f;
   if (VAR_86 && !(VAR_85 & (1 << VAR_86))) {
    VAR_80->have_temp |= 1 << VAR_83;
    VAR_85 |= 1 << VAR_86;
   }

   VAR_80->temp_src[VAR_83] = VAR_86;
   if (VAR_83 > 0 && VAR_80->temp_src[0] != 1
       && VAR_80->temp_src[VAR_83] == 1)
    FUNC_22(VAR_80, 0, VAR_83);
   if (VAR_83 > 1 && VAR_80->temp_src[1] != 2
       && VAR_80->temp_src[VAR_83] == 2)
    FUNC_22(VAR_80, 1, VAR_83);
   if (VAR_83 > 2 && VAR_80->temp_src[2] != 3
       && VAR_80->temp_src[VAR_83] == 3)
    FUNC_22(VAR_80, 2, VAR_83);
  }
  if (VAR_79->kind == 131) {
   if (VAR_80->temp_src[2] == 3) {
    u8 VAR_87;

    if (VAR_80->reg_temp_config[2])
     VAR_87 = FUNC_26(VAR_80,
      VAR_80->reg_temp_config[2]);
    else
     VAR_87 = 0;

    if (VAR_87 & 0x01)
     VAR_80->have_temp &= ~(1 << 2);
    else
     VAR_80->in6_skip = 1;
   }
   VAR_80->temp_label = VAR_46;
  } else {
   VAR_80->temp_label = VAR_45;
  }
  VAR_80->have_temp_offset = VAR_80->have_temp & 0x07;
  for (VAR_83 = 0; VAR_83 < 3; VAR_83++) {
   if (VAR_80->temp_src[VAR_83] > 3)
    VAR_80->have_temp_offset &= ~(1 << VAR_83);
  }
 } else if (VAR_79->kind == 128) {
  u8 VAR_88;

  FUNC_27(VAR_80, 4);





  VAR_88 = FUNC_26(VAR_80, 0x4a);
  VAR_80->temp_src[0] = VAR_88 >> 5;
  VAR_88 = FUNC_26(VAR_80, 0x49);
  VAR_80->temp_src[1] = VAR_88 & 0x07;
  VAR_80->temp_src[2] = (VAR_88 >> 4) & 0x07;







  VAR_88 = FUNC_26(VAR_80, 0x7d);
  VAR_88 &= 0x07;
  if (VAR_88 != VAR_80->temp_src[0] && VAR_88 != VAR_80->temp_src[1]
      && VAR_88 != VAR_80->temp_src[2]) {
   VAR_80->temp_src[3] = VAR_88;
   VAR_80->have_temp |= 1 << 3;
  }





  VAR_88 = FUNC_26(VAR_80, VAR_37[2]);
  if (VAR_80->temp_src[2] == 2 && (VAR_88 & 0x01))
   VAR_80->have_temp &= ~(1 << 2);

  if ((VAR_80->temp_src[2] == 2 && (VAR_80->have_temp & (1 << 2)))
      || (VAR_80->temp_src[3] == 2 && (VAR_80->have_temp & (1 << 3))))
   VAR_80->in6_skip = 1;

  VAR_80->temp_label = VAR_76;
  VAR_80->have_temp_offset = VAR_80->have_temp & 0x07;
  for (VAR_83 = 0; VAR_83 < 3; VAR_83++) {
   if (VAR_80->temp_src[VAR_83] > 2)
    VAR_80->have_temp_offset &= ~(1 << VAR_83);
  }
 } else if (VAR_79->kind == 130) {
  u8 VAR_89;

  FUNC_27(VAR_80, 3);





  VAR_80->temp_src[0] = 0;
  VAR_89 = FUNC_26(VAR_80, 0x49) & 0x07;

  if (VAR_89 == 0)
   VAR_80->temp_src[1] = 1;
  else if (VAR_89 >= 2 && VAR_89 <= 5)
   VAR_80->temp_src[1] = VAR_89 + 2;
  else
   VAR_80->have_temp &= ~(1 << 1);
  VAR_89 = FUNC_26(VAR_80, 0x4a);
  VAR_80->temp_src[2] = VAR_89 >> 5;





  if (VAR_80->temp_src[2] == 2 || VAR_80->temp_src[2] == 3 ||
      VAR_80->temp_src[2] == VAR_80->temp_src[0] ||
      ((VAR_80->have_temp & (1 << 1)) &&
       VAR_80->temp_src[2] == VAR_80->temp_src[1]))
   VAR_80->have_temp &= ~(1 << 2);
  else
   VAR_80->temp3_val_only = 1;

  VAR_80->in6_skip = 1;

  VAR_80->temp_label = VAR_76;
  VAR_80->have_temp_offset = VAR_80->have_temp & 0x03;
  for (VAR_83 = 0; VAR_83 < 3; VAR_83++) {
   if (VAR_80->temp_src[VAR_83] > 1)
    VAR_80->have_temp_offset &= ~(1 << VAR_83);
  }
 } else {
  FUNC_27(VAR_80, 3);



  if (VAR_79->kind == 129) {
   u8 VAR_90;





   VAR_90 = FUNC_26(VAR_80,
      VAR_37[2]);
   if (VAR_90 & 0x01)
    VAR_80->have_temp &= ~(1 << 2);
   else
    VAR_80->in6_skip = 1;
  }
  VAR_80->have_temp_offset = VAR_80->have_temp & 0x07;
 }

 if (VAR_79->kind == 132) {
  VAR_80->has_fan_div = 1;
  VAR_80->fan_from_reg = VAR_43;
  VAR_80->fan_from_reg_min = VAR_44;
  VAR_80->REG_PWM = VAR_13;
  VAR_80->REG_TARGET = VAR_14;
  VAR_80->REG_FAN = VAR_6;
  VAR_80->REG_FAN_MIN = VAR_29;
  VAR_80->REG_FAN_START_OUTPUT = VAR_9;
  VAR_80->REG_FAN_STOP_OUTPUT = VAR_11;
  VAR_80->REG_FAN_STOP_TIME = VAR_12;
  VAR_80->REG_FAN_MAX_OUTPUT = VAR_8;
  VAR_80->REG_FAN_STEP_OUTPUT = VAR_10;
 } else if (VAR_79->kind == 131) {
  VAR_80->has_fan_div = 0;
  VAR_80->fan_from_reg = VAR_42;
  VAR_80->fan_from_reg_min = VAR_42;
  VAR_80->REG_PWM = VAR_13;
  VAR_80->REG_TARGET = VAR_14;
  VAR_80->REG_FAN = VAR_6;
  VAR_80->REG_FAN_MIN = VAR_20;
  VAR_80->REG_FAN_START_OUTPUT = VAR_9;
  VAR_80->REG_FAN_STOP_OUTPUT = VAR_11;
  VAR_80->REG_FAN_STOP_TIME = VAR_12;
 } else if (VAR_79->kind == 128) {
  VAR_80->has_fan_div = 1;
  VAR_80->fan_from_reg = VAR_44;
  VAR_80->fan_from_reg_min = VAR_44;
  VAR_80->REG_PWM = VAR_35;
  VAR_80->REG_TARGET = VAR_36;
  VAR_80->REG_FAN = VAR_26;
  VAR_80->REG_FAN_MIN = VAR_29;
  VAR_80->REG_FAN_START_OUTPUT = VAR_30;
  VAR_80->REG_FAN_STOP_OUTPUT = VAR_33;
  VAR_80->REG_FAN_STOP_TIME = VAR_34;
  VAR_80->REG_FAN_MAX_OUTPUT =
    VAR_28;
  VAR_80->REG_FAN_STEP_OUTPUT =
    VAR_32;
 } else {
  VAR_80->has_fan_div = 1;
  VAR_80->fan_from_reg = VAR_44;
  VAR_80->fan_from_reg_min = VAR_44;
  VAR_80->REG_PWM = VAR_35;
  VAR_80->REG_TARGET = VAR_36;
  VAR_80->REG_FAN = VAR_26;
  VAR_80->REG_FAN_MIN = VAR_29;
  VAR_80->REG_FAN_START_OUTPUT = VAR_30;
  VAR_80->REG_FAN_STOP_OUTPUT = VAR_33;
  VAR_80->REG_FAN_STOP_TIME = VAR_34;
  VAR_80->REG_FAN_MAX_OUTPUT =
    VAR_27;
  VAR_80->REG_FAN_STEP_OUTPUT =
    VAR_31;
 }


 if (VAR_79->kind == 130)
  VAR_80->scale_in = VAR_48;
 else
  VAR_80->scale_in = VAR_47;


 FUNC_25(VAR_80, VAR_79->kind);

 VAR_80->vrm = FUNC_21();

 VAR_84 = FUNC_16(VAR_79->sioreg);
 if (VAR_84)
  goto exit_release;


 if (VAR_79->kind == 129 || VAR_79->kind == 128 ||
     VAR_79->kind == 132 || VAR_79->kind == 131) {





  FUNC_20(VAR_79->sioreg, VAR_38);
  VAR_80->vid = FUNC_18(VAR_79->sioreg, 0xe3);
  VAR_84 = FUNC_7(VAR_78, &VAR_39);
  if (VAR_84) {
   FUNC_17(VAR_79->sioreg);
   goto exit_release;
  }
 } else if (VAR_79->kind != 130) {
  FUNC_20(VAR_79->sioreg, VAR_25);
  if (FUNC_18(VAR_79->sioreg, VAR_23) & 0x80) {







   if (VAR_79->kind == VAR_74) {
    VAR_82 = FUNC_18(VAR_79->sioreg,
             VAR_22);
    if ((VAR_82 & 0x08) && VAR_80->vrm == 90) {
     FUNC_6(VAR_78,
       "Setting VID input voltage to TTL\n");
     FUNC_19(VAR_79->sioreg,
           VAR_22,
           VAR_82 & ~0x08);
    } else if (!(VAR_82 & 0x08)
        && VAR_80->vrm == 100) {
     FUNC_6(VAR_78,
       "Setting VID input voltage to VRM10\n");
     FUNC_19(VAR_79->sioreg,
           VAR_22,
           VAR_82 | 0x08);
    }
   }

   VAR_80->vid = FUNC_18(VAR_79->sioreg,
      VAR_24);
   if (VAR_79->kind == VAR_74)
    VAR_80->vid &= 0x3f;

   VAR_84 = FUNC_7(VAR_78, &VAR_39);
   if (VAR_84) {
    FUNC_17(VAR_79->sioreg);
    goto exit_release;
   }
  } else {
   FUNC_5(VAR_78,
     "VID pins in output mode, CPU VID not available\n");
  }
 }

 if (VAR_41 &&
     (VAR_79->kind == 132 || VAR_79->kind == 131)) {
  u8 VAR_91;

  FUNC_20(VAR_79->sioreg, VAR_25);
  VAR_91 = FUNC_18(VAR_79->sioreg, VAR_7);
  if (VAR_79->kind == 131)
   FUNC_19(VAR_79->sioreg, VAR_7,
         0x3e | VAR_91);
  else
   FUNC_19(VAR_79->sioreg, VAR_7,
         0x1e | VAR_91);
  FUNC_13("Enabled fan debounce for chip %s\n", VAR_80->name);
 }

 FUNC_23(VAR_79, VAR_80);

 FUNC_17(VAR_79->sioreg);


 FUNC_28(VAR_78, VAR_80);


 FUNC_29(VAR_78, VAR_80);
 for (VAR_83 = 0; VAR_83 < VAR_80->pwm_num; VAR_83++)
  VAR_80->pwm_enable_orig[VAR_83] = VAR_80->pwm_enable[VAR_83];


 for (VAR_83 = 0; VAR_83 < FUNC_0(VAR_61); VAR_83++) {
  VAR_84 = FUNC_7(VAR_78, &VAR_61[VAR_83].dev_attr);
  if (VAR_84)
   goto exit_remove;
 }

 for (VAR_83 = 0; VAR_83 < FUNC_0(VAR_64); VAR_83++) {
  struct sensor_device_attribute *VAR_92 =
    &VAR_64[VAR_83];
  if (VAR_80->REG_FAN_STEP_OUTPUT &&
      VAR_80->REG_FAN_STEP_OUTPUT[VAR_92->index] != 0xff) {
   VAR_84 = FUNC_7(VAR_78, &VAR_92->dev_attr);
   if (VAR_84)
    goto exit_remove;
  }
 }

 if ((VAR_80->has_fan & (1 << 2)) && VAR_80->pwm_num >= 3)
  for (VAR_83 = 0; VAR_83 < FUNC_0(VAR_62); VAR_83++) {
   VAR_84 = FUNC_7(VAR_78,
     &VAR_62[VAR_83].dev_attr);
   if (VAR_84)
    goto exit_remove;
  }
 if ((VAR_80->has_fan & (1 << 3)) && VAR_80->pwm_num >= 4)
  for (VAR_83 = 0; VAR_83 < FUNC_0(VAR_63); VAR_83++) {
   VAR_84 = FUNC_7(VAR_78,
     &VAR_63[VAR_83].dev_attr);
   if (VAR_84)
    goto exit_remove;
  }

 for (VAR_83 = 0; VAR_83 < VAR_80->in_num; VAR_83++) {
  if ((VAR_83 == 6) && VAR_80->in6_skip)
   continue;
  if ((VAR_84 = FUNC_7(VAR_78, &VAR_55[VAR_83].dev_attr))
   || (VAR_84 = FUNC_7(VAR_78,
    &VAR_54[VAR_83].dev_attr))
   || (VAR_84 = FUNC_7(VAR_78,
    &VAR_57[VAR_83].dev_attr))
   || (VAR_84 = FUNC_7(VAR_78,
    &VAR_56[VAR_83].dev_attr)))
   goto exit_remove;
 }

 for (VAR_83 = 0; VAR_83 < 5; VAR_83++) {
  if (VAR_80->has_fan & (1 << VAR_83)) {
   if ((VAR_84 = FUNC_7(VAR_78,
     &VAR_52[VAR_83].dev_attr))
    || (VAR_84 = FUNC_7(VAR_78,
     &VAR_50[VAR_83].dev_attr)))
    goto exit_remove;
   if (VAR_79->kind != 131) {
    VAR_84 = FUNC_7(VAR_78,
      &VAR_51[VAR_83].dev_attr);
    if (VAR_84)
     goto exit_remove;
   }
   if (VAR_80->has_fan_min & (1 << VAR_83)) {
    VAR_84 = FUNC_7(VAR_78,
      &VAR_53[VAR_83].dev_attr);
    if (VAR_84)
     goto exit_remove;
   }
   if (VAR_83 < VAR_80->pwm_num &&
    ((VAR_84 = FUNC_7(VAR_78,
     &VAR_58[VAR_83].dev_attr))
    || (VAR_84 = FUNC_7(VAR_78,
     &VAR_60[VAR_83].dev_attr))
    || (VAR_84 = FUNC_7(VAR_78,
     &VAR_59[VAR_83].dev_attr))
    || (VAR_84 = FUNC_7(VAR_78,
     &VAR_65[VAR_83].dev_attr))
    || (VAR_84 = FUNC_7(VAR_78,
     &VAR_73[VAR_83].dev_attr))))
    goto exit_remove;
  }
 }

 for (VAR_83 = 0; VAR_83 < VAR_21; VAR_83++) {
  if (!(VAR_80->have_temp & (1 << VAR_83)))
   continue;
  VAR_84 = FUNC_7(VAR_78, &VAR_67[VAR_83].dev_attr);
  if (VAR_84)
   goto exit_remove;
  if (VAR_80->temp_label) {
   VAR_84 = FUNC_7(VAR_78,
       &VAR_68[VAR_83].dev_attr);
   if (VAR_84)
    goto exit_remove;
  }
  if (VAR_83 == 2 && VAR_80->temp3_val_only)
   continue;
  if (VAR_80->reg_temp_over[VAR_83]) {
   VAR_84 = FUNC_7(VAR_78,
    &VAR_69[VAR_83].dev_attr);
   if (VAR_84)
    goto exit_remove;
  }
  if (VAR_80->reg_temp_hyst[VAR_83]) {
   VAR_84 = FUNC_7(VAR_78,
    &VAR_70[VAR_83].dev_attr);
   if (VAR_84)
    goto exit_remove;
  }
  if (VAR_83 > 2)
   continue;
  if ((VAR_84 = FUNC_7(VAR_78,
    &VAR_66[VAR_83].dev_attr))
   || (VAR_84 = FUNC_7(VAR_78,
    &VAR_72[VAR_83].dev_attr)))
   goto exit_remove;
  if (VAR_80->have_temp_offset & (1 << VAR_83)) {
   VAR_84 = FUNC_7(VAR_78,
       &VAR_71[VAR_83].dev_attr);
   if (VAR_84)
    goto exit_remove;
  }
 }

 VAR_84 = FUNC_7(VAR_78, &VAR_49[0].dev_attr);
 if (VAR_84)
  goto exit_remove;

 if (VAR_79->kind == 131) {
  VAR_84 = FUNC_7(VAR_78, &VAR_49[1].dev_attr);
  if (VAR_84)
   goto exit_remove;
 }

 VAR_84 = FUNC_7(VAR_78, &VAR_40);
 if (VAR_84)
  goto exit_remove;

 VAR_80->hwmon_dev = FUNC_9(VAR_78);
 if (FUNC_1(VAR_80->hwmon_dev)) {
  VAR_84 = FUNC_2(VAR_80->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_24(VAR_78);
exit_release:
 FUNC_14(VAR_81->start, VAR_4);
exit:
 return VAR_84;
}
