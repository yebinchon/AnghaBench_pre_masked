
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct hwspinlock_device*) ;

int FUNC_2(struct device *VAR_2,
    struct hwspinlock_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
        VAR_0, VAR_3);
 FUNC_0(VAR_4);

 return VAR_4;
}
