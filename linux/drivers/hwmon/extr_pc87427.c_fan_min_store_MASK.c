
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pc87427_data {int* address; int lock; int * fan_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct pc87427_data* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_6,
        struct device_attribute *VAR_7,
        const char *VAR_8, size_t VAR_9)
{
 struct pc87427_data *VAR_10 = FUNC_1(VAR_6);
 int VAR_11 = FUNC_8(VAR_7)->index;
 unsigned long VAR_12;
 int VAR_13 = VAR_10->address[VAR_2];

 if (FUNC_3(VAR_8, 10, &VAR_12) < 0)
  return -VAR_0;

 FUNC_4(&VAR_10->lock);
 FUNC_6(FUNC_0(VAR_11), VAR_13 + VAR_3);





 FUNC_6(0, VAR_13 + VAR_5);
 VAR_10->fan_min[VAR_11] = FUNC_2(VAR_12);
 FUNC_7(VAR_10->fan_min[VAR_11], VAR_13 + VAR_4);
 FUNC_6(VAR_1, VAR_13 + VAR_5);
 FUNC_5(&VAR_10->lock);

 return VAR_9;
}
