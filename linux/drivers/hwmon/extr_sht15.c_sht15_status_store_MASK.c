
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht15_data {int val_status; int read_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sht15_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sht15_data*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct sht15_data *VAR_7 = FUNC_0(VAR_2);
 long VAR_8;
 u8 VAR_9;

 if (FUNC_1(VAR_4, 10, &VAR_8))
  return -VAR_0;

 FUNC_2(&VAR_7->read_lock);
 VAR_9 = VAR_7->val_status & 0x07;
 if (!!VAR_8)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;

 VAR_6 = FUNC_4(VAR_7, VAR_9);
 FUNC_3(&VAR_7->read_lock);

 return VAR_6 ? VAR_6 : VAR_5;
}
