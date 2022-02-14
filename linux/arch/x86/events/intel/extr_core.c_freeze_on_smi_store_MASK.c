
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {unsigned long attr_freeze_on_smi; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 size_t FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long*,int) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
       struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 unsigned long VAR_8;
 ssize_t VAR_9;

 VAR_9 = FUNC_1(VAR_6, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 > 1)
  return -VAR_0;

 FUNC_2(&VAR_2);

 if (VAR_3.attr_freeze_on_smi == VAR_8)
  goto done;

 VAR_3.attr_freeze_on_smi = VAR_8;

 FUNC_0();
 FUNC_4(VAR_1, &VAR_8, 1);
 FUNC_5();
done:
 FUNC_3(&VAR_2);

 return VAR_7;
}
