
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct k8temp_data {int swap_core_select; int temp_offset; int sensorsp; int update_lock; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int x86_model; int x86_stepping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct device* FUNC_3 (int *,char*,struct k8temp_data*,int *,int *) ;
 struct k8temp_data* FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct pci_dev*,int ,int*) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_8,
      const struct pci_device_id *VAR_9)
{
 u8 VAR_10;
 u32 VAR_11;
 u8 VAR_12, VAR_13;
 struct k8temp_data *VAR_14;
 struct device *VAR_15;

 VAR_14 = FUNC_4(&VAR_8->dev, sizeof(struct k8temp_data), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_12 = VAR_6.x86_model;
 VAR_13 = VAR_6.x86_stepping;


 if ((VAR_12 == 4 && VAR_13 == 0) ||
     (VAR_12 == 5 && VAR_13 <= 1))
  return -VAR_0;





 if (VAR_12 >= 0x40) {
  VAR_14->swap_core_select = 1;
  FUNC_2(&VAR_8->dev,
    "Temperature readouts might be wrong - check erratum #141\n");
 }






 if (FUNC_5(VAR_12))
  VAR_14->temp_offset = 21000;

 FUNC_7(VAR_8, VAR_3, &VAR_10);
 VAR_10 &= ~(VAR_5 | VAR_4);
 FUNC_9(VAR_8, VAR_3, VAR_10);
 FUNC_7(VAR_8, VAR_3, &VAR_10);

 if (VAR_10 & (VAR_5 | VAR_4)) {
  FUNC_1(&VAR_8->dev, "Configuration bit(s) stuck at 1!\n");
  return -VAR_0;
 }

 VAR_10 |= (VAR_5 | VAR_4);
 FUNC_9(VAR_8, VAR_3, VAR_10);


 FUNC_7(VAR_8, VAR_3, &VAR_14->sensorsp);

 if (VAR_14->sensorsp & VAR_5) {
  VAR_10 &= ~VAR_4;
  FUNC_9(VAR_8, VAR_3, VAR_10);
  FUNC_8(VAR_8, VAR_3, &VAR_11);
  VAR_10 |= VAR_4;
  if (!((VAR_11 >> 16) & 0xff))
   VAR_14->sensorsp &= ~VAR_5;
 }

 if (VAR_14->sensorsp & VAR_4) {
  VAR_10 &= ~VAR_5;
  FUNC_9(VAR_8, VAR_3, VAR_10);
  FUNC_8(VAR_8, VAR_3, &VAR_11);
  if (!((VAR_11 >> 16) & 0xff))
   VAR_14->sensorsp &= ~VAR_4;
 }

 FUNC_6(&VAR_14->update_lock);

 VAR_15 = FUNC_3(&VAR_8->dev,
        "k8temp",
        VAR_14,
        &VAR_7,
        ((void*)0));

 return FUNC_0(VAR_15);
}
