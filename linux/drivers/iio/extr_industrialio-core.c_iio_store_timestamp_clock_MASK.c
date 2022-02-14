
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_8,
      struct device_attribute *VAR_9,
      const char *VAR_10, size_t VAR_11)
{
 clockid_t VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_10, "realtime"))
  VAR_12 = VAR_4;
 else if (FUNC_2(VAR_10, "monotonic"))
  VAR_12 = VAR_1;
 else if (FUNC_2(VAR_10, "monotonic_raw"))
  VAR_12 = VAR_3;
 else if (FUNC_2(VAR_10, "realtime_coarse"))
  VAR_12 = VAR_5;
 else if (FUNC_2(VAR_10, "monotonic_coarse"))
  VAR_12 = VAR_2;
 else if (FUNC_2(VAR_10, "boottime"))
  VAR_12 = VAR_0;
 else if (FUNC_2(VAR_10, "tai"))
  VAR_12 = VAR_6;
 else
  return -VAR_7;

 VAR_13 = FUNC_1(FUNC_0(VAR_8), VAR_12);
 if (VAR_13)
  return VAR_13;

 return VAR_11;
}
