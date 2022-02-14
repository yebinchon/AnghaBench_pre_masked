
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock_ops {int dummy; } ;
struct hwspinlock_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct hwspinlock_device**) ;
 struct hwspinlock_device** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct hwspinlock_device**) ;
 int FUNC_3 (struct hwspinlock_device*,struct device*,struct hwspinlock_ops const*,int,int) ;

int FUNC_4(struct device *VAR_3,
         struct hwspinlock_device *VAR_4,
         const struct hwspinlock_ops *VAR_5,
         int VAR_6, int VAR_7)
{
 struct hwspinlock_device **VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_2, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_4, VAR_3, VAR_5, VAR_6, VAR_7);
 if (!VAR_9) {
  *VAR_8 = VAR_4;
  FUNC_0(VAR_3, VAR_8);
 } else {
  FUNC_2(VAR_8);
 }

 return VAR_9;
}
