
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device_enum_ext {int (* set ) (struct counter_device*,scalar_t__) ;int num_items; int items; } ;
struct counter_device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (struct counter_device*,scalar_t__) ;

ssize_t FUNC_2(struct counter_device *VAR_1, void *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 const struct counter_device_enum_ext *const VAR_5 = VAR_2;
 ssize_t VAR_6;
 int VAR_7;

 if (!VAR_5->set)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5->items, VAR_5->num_items, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = VAR_5->set(VAR_1, VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_4;
}
