
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct platform_device {int dev; } ;
struct abituguru3_data {char* sysfs_names; TYPE_6__* sysfs_attr; int hwmon_dev; TYPE_1__* sensors; int update_lock; int addr; } ;
struct TYPE_16__ {int id; TYPE_1__* sensors; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_13__ {TYPE_2__ attr; } ;
struct TYPE_15__ {TYPE_4__ dev_attr; } ;
struct TYPE_14__ {int index; TYPE_4__ dev_attr; } ;
struct TYPE_12__ {int start; } ;
struct TYPE_10__ {int type; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_8__* VAR_9 ;
 int FUNC_3 (struct abituguru3_data*,int ,int ,int,scalar_t__*) ;
 TYPE_7__* VAR_10 ;
 TYPE_6__** VAR_11 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 struct abituguru3_data* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned int VAR_12 ;
 TYPE_3__* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct abituguru3_data*) ;
 int FUNC_12 (char*,unsigned int,int ) ;
 int FUNC_13 (char*,unsigned int) ;
 int VAR_13 ;
 int FUNC_14 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_14)
{
 const int VAR_15[3] = { 10, 8, 7 };
 int VAR_16[3] = { 0, 1, 1 };
 struct abituguru3_data *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24 = -VAR_5;
 char *VAR_25;
 u8 VAR_26[2];
 u16 VAR_27;

 VAR_17 = FUNC_7(&VAR_14->dev, sizeof(struct abituguru3_data),
       VAR_7);
 if (!VAR_17)
  return -VAR_6;

 VAR_17->addr = FUNC_10(VAR_14, VAR_8, 0)->start;
 FUNC_9(&VAR_17->update_lock);
 FUNC_11(VAR_14, VAR_17);


 VAR_18 = FUNC_3(VAR_17, VAR_2, VAR_0,
       2, VAR_26);
 if (VAR_18 != 2)
  goto abituguru3_probe_error;


 if (!FUNC_4(&VAR_14->dev))
  goto abituguru3_probe_error;


 VAR_27 = ((u16)VAR_26[0] << 8) | (u16)VAR_26[1];
 for (VAR_18 = 0; VAR_9[VAR_18].id; VAR_18++)
  if (VAR_9[VAR_18].id == VAR_27)
   break;
 if (!VAR_9[VAR_18].id) {
  FUNC_12("error unknown motherboard ID: %04X. %s\n",
         (unsigned int)VAR_27, VAR_13);
  goto abituguru3_probe_error;
 }
 VAR_17->sensors = VAR_9[VAR_18].sensors;

 FUNC_13("found Abit uGuru3, motherboard ID: %04X\n", (unsigned int)VAR_27);


 VAR_23 = 0;
 VAR_25 = VAR_17->sysfs_names;
 VAR_22 = VAR_3;
 for (VAR_18 = 0; VAR_17->sensors[VAR_18].name; VAR_18++) {

  if (VAR_18 >= VAR_1) {
   FUNC_12("Fatal error motherboard has more sensors then ABIT_UGURU3_MAX_NO_SENSORS. %s %s\n",
          VAR_12, VAR_13);
   VAR_24 = -VAR_4;
   goto abituguru3_probe_error;
  }
  VAR_20 = VAR_17->sensors[VAR_18].type;
  for (VAR_19 = 0; VAR_19 < VAR_15[VAR_20]; VAR_19++) {
   VAR_21 = FUNC_14(VAR_25, VAR_22,
    VAR_11[VAR_20][VAR_19].dev_attr.attr.
    name, VAR_16[VAR_20]) + 1;
   VAR_17->sysfs_attr[VAR_23] =
    VAR_11[VAR_20][VAR_19];
   VAR_17->sysfs_attr[VAR_23].dev_attr.attr.name =
    VAR_25;
   VAR_17->sysfs_attr[VAR_23].index = VAR_18;
   VAR_25 += VAR_21;
   VAR_22 -= VAR_21;
   VAR_23++;
  }
  VAR_16[VAR_20]++;
 }

 if (VAR_22 < 0) {
  FUNC_12("Fatal error ran out of space for sysfs attr names. %s %s\n",
         VAR_12, VAR_13);
  VAR_24 = -VAR_4;
  goto abituguru3_probe_error;
 }


 for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++)
  if (FUNC_5(&VAR_14->dev,
    &VAR_17->sysfs_attr[VAR_18].dev_attr))
   goto abituguru3_probe_error;
 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_10); VAR_18++)
  if (FUNC_5(&VAR_14->dev,
    &VAR_10[VAR_18].dev_attr))
   goto abituguru3_probe_error;

 VAR_17->hwmon_dev = FUNC_8(&VAR_14->dev);
 if (FUNC_1(VAR_17->hwmon_dev)) {
  VAR_24 = FUNC_2(VAR_17->hwmon_dev);
  goto abituguru3_probe_error;
 }

 return 0;

abituguru3_probe_error:
 for (VAR_18 = 0; VAR_17->sysfs_attr[VAR_18].dev_attr.attr.name; VAR_18++)
  FUNC_6(&VAR_14->dev, &VAR_17->sysfs_attr[VAR_18].dev_attr);
 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_10); VAR_18++)
  FUNC_6(&VAR_14->dev,
   &VAR_10[VAR_18].dev_attr);
 return VAR_24;
}
