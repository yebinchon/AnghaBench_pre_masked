
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83781d_data {unsigned long pwm2_enable; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w83781d_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct w83781d_data*,int ) ;
 int FUNC_5 (struct w83781d_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct w83781d_data *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, 10, &VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_7->update_lock);

 switch (VAR_8) {
 case 0:
 case 1:
  VAR_9 = FUNC_4(VAR_7, VAR_2);
  FUNC_5(VAR_7, VAR_2,
        (VAR_9 & 0xf7) | (VAR_8 << 3));

  VAR_9 = FUNC_4(VAR_7, VAR_1);
  FUNC_5(VAR_7, VAR_1,
        (VAR_9 & 0xef) | (!VAR_8 << 4));

  VAR_7->pwm2_enable = VAR_8;
  break;

 default:
  FUNC_3(&VAR_7->update_lock);
  return -VAR_0;
 }

 FUNC_3(&VAR_7->update_lock);
 return VAR_6;
}
