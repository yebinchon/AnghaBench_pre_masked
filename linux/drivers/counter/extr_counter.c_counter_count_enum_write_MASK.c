
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device {int dummy; } ;
struct counter_count_enum_ext {int (* set ) (struct counter_device*,struct counter_count*,scalar_t__) ;int num_items; int items; } ;
struct counter_count {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (struct counter_device*,struct counter_count*,scalar_t__) ;

ssize_t FUNC_2(struct counter_device *VAR_1,
     struct counter_count *VAR_2, void *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 const struct counter_count_enum_ext *const VAR_6 = VAR_3;
 ssize_t VAR_7;
 int VAR_8;

 if (!VAR_6->set)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->items, VAR_6->num_items, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = VAR_6->set(VAR_1, VAR_2, VAR_7);
 if (VAR_8)
  return VAR_8;

 return VAR_5;
}
