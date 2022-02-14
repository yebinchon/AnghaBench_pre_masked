
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_66__ TYPE_9__ ;
typedef struct TYPE_65__ TYPE_8__ ;
typedef struct TYPE_64__ TYPE_7__ ;
typedef struct TYPE_63__ TYPE_6__ ;
typedef struct TYPE_62__ TYPE_5__ ;
typedef struct TYPE_61__ TYPE_4__ ;
typedef struct TYPE_60__ TYPE_3__ ;
typedef struct TYPE_59__ TYPE_33__ ;
typedef struct TYPE_58__ TYPE_32__ ;
typedef struct TYPE_57__ TYPE_31__ ;
typedef struct TYPE_56__ TYPE_30__ ;
typedef struct TYPE_55__ TYPE_2__ ;
typedef struct TYPE_54__ TYPE_29__ ;
typedef struct TYPE_53__ TYPE_28__ ;
typedef struct TYPE_52__ TYPE_27__ ;
typedef struct TYPE_51__ TYPE_26__ ;
typedef struct TYPE_50__ TYPE_25__ ;
typedef struct TYPE_49__ TYPE_24__ ;
typedef struct TYPE_48__ TYPE_23__ ;
typedef struct TYPE_47__ TYPE_22__ ;
typedef struct TYPE_46__ TYPE_21__ ;
typedef struct TYPE_45__ TYPE_20__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_19__ ;
typedef struct TYPE_42__ TYPE_18__ ;
typedef struct TYPE_41__ TYPE_17__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


struct w83627hf_sio_data {scalar_t__ type; } ;
struct w83627hf_data {int addr; scalar_t__ type; char const* name; int vid; int hwmon_dev; int vrm; int * fan_min; int update_lock; int lock; } ;
struct resource {int start; } ;
struct device {int kobj; } ;
struct platform_device {struct device dev; } ;
struct TYPE_66__ {int dev_attr; } ;
struct TYPE_65__ {int dev_attr; } ;
struct TYPE_64__ {int dev_attr; } ;
struct TYPE_63__ {int dev_attr; } ;
struct TYPE_62__ {int dev_attr; } ;
struct TYPE_61__ {int dev_attr; } ;
struct TYPE_60__ {int dev_attr; } ;
struct TYPE_59__ {int dev_attr; } ;
struct TYPE_58__ {int dev_attr; } ;
struct TYPE_57__ {int dev_attr; } ;
struct TYPE_56__ {int dev_attr; } ;
struct TYPE_55__ {int dev_attr; } ;
struct TYPE_54__ {int dev_attr; } ;
struct TYPE_53__ {int dev_attr; } ;
struct TYPE_52__ {int dev_attr; } ;
struct TYPE_51__ {int dev_attr; } ;
struct TYPE_50__ {int dev_attr; } ;
struct TYPE_49__ {int dev_attr; } ;
struct TYPE_48__ {int dev_attr; } ;
struct TYPE_47__ {int dev_attr; } ;
struct TYPE_46__ {int dev_attr; } ;
struct TYPE_45__ {int dev_attr; } ;
struct TYPE_44__ {int dev_attr; } ;
struct TYPE_43__ {int dev_attr; } ;
struct TYPE_42__ {int dev_attr; } ;
struct TYPE_41__ {int dev_attr; } ;
struct TYPE_40__ {int dev_attr; } ;
struct TYPE_39__ {int dev_attr; } ;
struct TYPE_38__ {int dev_attr; } ;
struct TYPE_37__ {int dev_attr; } ;
struct TYPE_36__ {int dev_attr; } ;
struct TYPE_35__ {int dev_attr; } ;
struct TYPE_34__ {int dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,unsigned long,unsigned long) ;
 struct w83627hf_sio_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *) ;
 struct w83627hf_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int,int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct w83627hf_data*) ;
 TYPE_33__ VAR_8 ;
 TYPE_32__ VAR_9 ;
 TYPE_31__ VAR_10 ;
 TYPE_30__ VAR_11 ;
 TYPE_29__ VAR_12 ;
 TYPE_28__ VAR_13 ;
 TYPE_27__ VAR_14 ;
 TYPE_26__ VAR_15 ;
 TYPE_25__ VAR_16 ;
 TYPE_24__ VAR_17 ;
 TYPE_23__ VAR_18 ;
 TYPE_22__ VAR_19 ;
 TYPE_21__ VAR_20 ;
 TYPE_20__ VAR_21 ;
 TYPE_19__ VAR_22 ;
 TYPE_18__ VAR_23 ;
 TYPE_17__ VAR_24 ;
 TYPE_16__ VAR_25 ;
 TYPE_15__ VAR_26 ;
 TYPE_14__ VAR_27 ;
 TYPE_13__ VAR_28 ;
 TYPE_12__ VAR_29 ;
 TYPE_11__ VAR_30 ;
 TYPE_10__ VAR_31 ;
 TYPE_9__ VAR_32 ;
 TYPE_8__ VAR_33 ;
 TYPE_7__ VAR_34 ;
 TYPE_6__ VAR_35 ;
 TYPE_5__ VAR_36 ;
 TYPE_4__ VAR_37 ;
 TYPE_3__ VAR_38 ;
 TYPE_2__ VAR_39 ;
 TYPE_1__ VAR_40 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 () ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct w83627hf_data*,int ) ;
 int FUNC_17 (struct w83627hf_data*) ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_48)
{
 struct device *VAR_49 = &VAR_48->dev;
 struct w83627hf_sio_data *VAR_50 = FUNC_4(VAR_49);
 struct w83627hf_data *VAR_51;
 struct resource *VAR_52;
 int VAR_53, VAR_54;

 static const char *VAR_55[] = {
  "w83627hf",
  "w83627thf",
  "w83697hf",
  "w83637hf",
  "w83687thf",
 };

 VAR_52 = FUNC_10(VAR_48, VAR_4, 0);
 if (!FUNC_7(VAR_49, VAR_52->start, VAR_5, VAR_0)) {
  FUNC_3(VAR_49, "Failed to request region 0x%lx-0x%lx\n",
   (unsigned long)VAR_52->start,
   (unsigned long)(VAR_52->start + VAR_5 - 1));
  return -VAR_1;
 }

 VAR_51 = FUNC_6(VAR_49, sizeof(struct w83627hf_data), VAR_3);
 if (!VAR_51)
  return -VAR_2;

 VAR_51->addr = VAR_52->start;
 VAR_51->type = VAR_50->type;
 VAR_51->name = VAR_55[VAR_50->type];
 FUNC_9(&VAR_51->lock);
 FUNC_9(&VAR_51->update_lock);
 FUNC_11(VAR_48, VAR_51);


 FUNC_15(VAR_48);


 for (VAR_54 = 0; VAR_54 <= 2; VAR_54++)
  VAR_51->fan_min[VAR_54] = FUNC_16(
     VAR_51, FUNC_2(VAR_54));
 FUNC_17(VAR_51);


 VAR_53 = FUNC_12(&VAR_49->kobj, &VAR_42);
 if (VAR_53)
  return VAR_53;


 if (VAR_51->type == VAR_41 || VAR_51->type == VAR_47)
  if ((VAR_53 = FUNC_5(VAR_49,
    &VAR_20.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_22.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_21.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_18.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_19.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_25.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_27.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_26.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_23.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_24.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_29.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_31.dev_attr)))
   goto error;

 if (VAR_51->type != VAR_47)
  if ((VAR_53 = FUNC_5(VAR_49,
    &VAR_15.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_17.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_16.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_13.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_14.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_11.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_12.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_10.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_8.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_9.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_37.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_38.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_39.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_35.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_36.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_40.dev_attr)))
   goto error;

 if (VAR_51->type != VAR_47 && VAR_51->vid != 0xff) {

  VAR_51->vrm = FUNC_14();

  if ((VAR_53 = FUNC_5(VAR_49, &VAR_6))
   || (VAR_53 = FUNC_5(VAR_49, &VAR_7)))
   goto error;
 }

 if (VAR_51->type == VAR_44 || VAR_51->type == VAR_45
     || VAR_51->type == VAR_46) {
  VAR_53 = FUNC_5(VAR_49, &VAR_32);
  if (VAR_53)
   goto error;
 }

 if (VAR_51->type == VAR_45 || VAR_51->type == VAR_46)
  if ((VAR_53 = FUNC_5(VAR_49,
    &VAR_29.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_31.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_34.dev_attr)))
   goto error;

 if (VAR_51->type != VAR_41)
  if ((VAR_53 = FUNC_5(VAR_49,
    &VAR_28.dev_attr))
   || (VAR_53 = FUNC_5(VAR_49,
    &VAR_30.dev_attr)))
   goto error;

 if (VAR_51->type == VAR_44 || VAR_51->type == VAR_45
     || VAR_51->type == VAR_46) {
  VAR_53 = FUNC_5(VAR_49,
      &VAR_33.dev_attr);
  if (VAR_53)
   goto error;
 }

 VAR_51->hwmon_dev = FUNC_8(VAR_49);
 if (FUNC_0(VAR_51->hwmon_dev)) {
  VAR_53 = FUNC_1(VAR_51->hwmon_dev);
  goto error;
 }

 return 0;

 error:
 FUNC_13(&VAR_49->kobj, &VAR_42);
 FUNC_13(&VAR_49->kobj, &VAR_43);
 return VAR_53;
}
