
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpiod_data {unsigned char irq_flags; int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {unsigned char flags; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 struct gpiod_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 size_t FUNC_3 (struct device*,unsigned char) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct gpiod_data *VAR_6 = FUNC_1(VAR_2);
 unsigned char VAR_7;
 ssize_t VAR_8 = VAR_5;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
  if (FUNC_6(VAR_1[VAR_9].name, VAR_4))
   break;
 }

 if (VAR_9 == FUNC_0(VAR_1))
  return -VAR_0;

 VAR_7 = VAR_1[VAR_9].flags;

 FUNC_4(&VAR_6->mutex);

 if (VAR_7 == VAR_6->irq_flags) {
  VAR_8 = VAR_5;
  goto out_unlock;
 }

 if (VAR_6->irq_flags)
  FUNC_2(VAR_2);

 if (VAR_7) {
  VAR_8 = FUNC_3(VAR_2, VAR_7);
  if (!VAR_8)
   VAR_8 = VAR_5;
 }

out_unlock:
 FUNC_5(&VAR_6->mutex);

 return VAR_8;
}
