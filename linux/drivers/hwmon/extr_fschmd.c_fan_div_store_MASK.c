
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fschmd_data {size_t kind; int* fan_ripple; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned long) ;
 struct fschmd_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 u8 VAR_6;
 int VAR_7 = FUNC_8(VAR_3)->index;
 struct fschmd_data *VAR_8 = FUNC_1(VAR_2);

 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch (VAR_9) {
 case 2:
  VAR_9 = 1;
  break;
 case 4:
  VAR_9 = 2;
  break;
 case 8:
  VAR_9 = 3;
  break;
 default:
  FUNC_0(VAR_2,
   "fan_div value %lu not supported. Choose one of 2, 4 or 8!\n",
   VAR_9);
  return -VAR_0;
 }

 FUNC_5(&VAR_8->update_lock);

 VAR_6 = FUNC_2(FUNC_7(VAR_2),
  VAR_1[VAR_8->kind][VAR_7]);


 VAR_6 &= ~0x03;
 VAR_6 |= VAR_9;

 FUNC_3(FUNC_7(VAR_2),
  VAR_1[VAR_8->kind][VAR_7], VAR_6);

 VAR_8->fan_ripple[VAR_7] = VAR_6;

 FUNC_6(&VAR_8->update_lock);

 return VAR_5;
}
