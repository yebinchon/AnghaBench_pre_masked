
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct k8temp_data {int swap_core_select; long temp_offset; int update_lock; } ;
struct device {int parent; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ) ;
 struct k8temp_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int *) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct device *VAR_3, enum hwmon_sensor_types VAR_4,
     u32 VAR_5, int VAR_6, long *VAR_7)
{
 struct k8temp_data *VAR_8 = FUNC_1(VAR_3);
 struct pci_dev *VAR_9 = FUNC_7(VAR_3->parent);
 int VAR_10, VAR_11;
 u32 VAR_12;
 u8 VAR_13;

 VAR_10 = (VAR_6 >> 1) & 1;
 VAR_11 = VAR_6 & 1;

 VAR_10 ^= VAR_8->swap_core_select;

 FUNC_2(&VAR_8->update_lock);
 FUNC_4(VAR_9, VAR_0, &VAR_13);
 VAR_13 &= ~(VAR_2 | VAR_1);
 if (VAR_10)
  VAR_13 |= VAR_1;
 if (VAR_11)
  VAR_13 |= VAR_2;
 FUNC_6(VAR_9, VAR_0, VAR_13);
 FUNC_5(VAR_9, VAR_0, &VAR_12);
 FUNC_3(&VAR_8->update_lock);

 *VAR_7 = FUNC_0(VAR_12) + VAR_8->temp_offset;

 return 0;
}
