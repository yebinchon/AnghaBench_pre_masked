
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 s32 VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_5, 0, &VAR_7) == 0) {

  if (VAR_7 < 0)
   return -VAR_0;
 } else {
  if (FUNC_2(VAR_5, "auto"))
   VAR_7 = VAR_2;
  else if (FUNC_2(VAR_5, "any"))
   VAR_7 = VAR_1;
  else
   return -VAR_0;
 }
 VAR_8 = FUNC_0(VAR_3, VAR_7);
 return VAR_8 < 0 ? VAR_8 : VAR_6;
}
