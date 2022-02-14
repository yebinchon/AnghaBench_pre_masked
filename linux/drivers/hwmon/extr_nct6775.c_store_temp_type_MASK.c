
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct nct6775_data {unsigned long* temp_type; int DIODE_MASK; int update_lock; int REG_DIODE; int REG_VBAT; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nct6775_data*,int ) ;
 struct nct6775_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct nct6775_data*,int ,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nct6775_data *VAR_5 = FUNC_4(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_0(VAR_3, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 != 1 && VAR_8 != 3 && VAR_8 != 4)
  return -VAR_0;

 FUNC_1(&VAR_5->update_lock);

 VAR_5->temp_type[VAR_7] = VAR_8;
 VAR_12 = 0x02 << VAR_7;
 VAR_13 = VAR_5->DIODE_MASK << VAR_7;
 VAR_10 = FUNC_3(VAR_5, VAR_5->REG_VBAT) & ~VAR_12;
 VAR_11 = FUNC_3(VAR_5, VAR_5->REG_DIODE) & ~VAR_13;
 switch (VAR_8) {
 case 1:
  VAR_10 |= VAR_12;
  VAR_11 |= VAR_13;
  break;
 case 3:
  VAR_10 |= VAR_13;
  break;
 case 4:
  break;
 }
 FUNC_5(VAR_5, VAR_5->REG_VBAT, VAR_10);
 FUNC_5(VAR_5, VAR_5->REG_DIODE, VAR_11);

 FUNC_2(&VAR_5->update_lock);
 return VAR_4;
}
