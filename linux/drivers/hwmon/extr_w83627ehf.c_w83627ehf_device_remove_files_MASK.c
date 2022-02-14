
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


struct w83627ehf_data {int* REG_FAN_STEP_OUTPUT; int in_num; int pwm_num; int have_temp; scalar_t__ temp3_val_only; scalar_t__ in6_skip; } ;
struct sensor_device_attribute {size_t index; int dev_attr; } ;
struct device {int dummy; } ;
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
 struct w83627ehf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 TYPE_21__* VAR_3 ;
 TYPE_20__* VAR_4 ;
 TYPE_19__* VAR_5 ;
 TYPE_18__* VAR_6 ;
 TYPE_17__* VAR_7 ;
 TYPE_16__* VAR_8 ;
 TYPE_15__* VAR_9 ;
 TYPE_14__* VAR_10 ;
 TYPE_13__* VAR_11 ;
 TYPE_12__* VAR_12 ;
 TYPE_11__* VAR_13 ;
 TYPE_10__* VAR_14 ;
 struct sensor_device_attribute* VAR_15 ;
 struct sensor_device_attribute* VAR_16 ;
 struct sensor_device_attribute* VAR_17 ;
 struct sensor_device_attribute* VAR_18 ;
 TYPE_9__* VAR_19 ;
 TYPE_8__* VAR_20 ;
 TYPE_7__* VAR_21 ;
 TYPE_6__* VAR_22 ;
 TYPE_5__* VAR_23 ;
 TYPE_4__* VAR_24 ;
 TYPE_3__* VAR_25 ;
 TYPE_2__* VAR_26 ;
 TYPE_1__* VAR_27 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_28)
{




 int VAR_29;
 struct w83627ehf_data *VAR_30 = FUNC_1(VAR_28);

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_15); VAR_29++)
  FUNC_2(VAR_28, &VAR_15[VAR_29].dev_attr);
 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_18); VAR_29++) {
  struct sensor_device_attribute *VAR_31 =
    &VAR_18[VAR_29];
  if (VAR_30->REG_FAN_STEP_OUTPUT &&
      VAR_30->REG_FAN_STEP_OUTPUT[VAR_31->index] != 0xff)
   FUNC_2(VAR_28, &VAR_31->dev_attr);
 }
 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_16); VAR_29++)
  FUNC_2(VAR_28, &VAR_16[VAR_29].dev_attr);
 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_17); VAR_29++)
  FUNC_2(VAR_28, &VAR_17[VAR_29].dev_attr);
 for (VAR_29 = 0; VAR_29 < VAR_30->in_num; VAR_29++) {
  if ((VAR_29 == 6) && VAR_30->in6_skip)
   continue;
  FUNC_2(VAR_28, &VAR_9[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_8[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_11[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_10[VAR_29].dev_attr);
 }
 for (VAR_29 = 0; VAR_29 < 5; VAR_29++) {
  FUNC_2(VAR_28, &VAR_6[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_4[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_5[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_7[VAR_29].dev_attr);
 }
 for (VAR_29 = 0; VAR_29 < VAR_30->pwm_num; VAR_29++) {
  FUNC_2(VAR_28, &VAR_12[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_14[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_13[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_19[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_27[VAR_29].dev_attr);
 }
 for (VAR_29 = 0; VAR_29 < VAR_0; VAR_29++) {
  if (!(VAR_30->have_temp & (1 << VAR_29)))
   continue;
  FUNC_2(VAR_28, &VAR_21[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_22[VAR_29].dev_attr);
  if (VAR_29 == 2 && VAR_30->temp3_val_only)
   continue;
  FUNC_2(VAR_28, &VAR_23[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_24[VAR_29].dev_attr);
  if (VAR_29 > 2)
   continue;
  FUNC_2(VAR_28, &VAR_20[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_26[VAR_29].dev_attr);
  FUNC_2(VAR_28, &VAR_25[VAR_29].dev_attr);
 }

 FUNC_2(VAR_28, &VAR_3[0].dev_attr);
 FUNC_2(VAR_28, &VAR_3[1].dev_attr);

 FUNC_2(VAR_28, &VAR_2);
 FUNC_2(VAR_28, &VAR_1);
}
