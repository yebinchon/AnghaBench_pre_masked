
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int cpumask_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int *,int ,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8,
  size_t VAR_9)
{
 cpumask_t VAR_10;
 int VAR_11;
 u8 VAR_12;

 if (FUNC_2(VAR_8, 0, &VAR_12) || VAR_12 != 1)
  return -VAR_0;

 if (VAR_2 == 1)
  return VAR_9;
 VAR_5 = 0;

 FUNC_1();
 VAR_10 = FUNC_0();
 FUNC_3(&VAR_10,
    VAR_3,
    &VAR_11, 1);
 FUNC_5();
 if (VAR_11) {
  FUNC_4("fastsleep_workaround_applyonce change failed while running pnv_fastsleep_workaround_apply");
  goto fail;
 }

 VAR_4 = 0;

 VAR_2 = 1;

 return VAR_9;
fail:
 return -VAR_1;
}
