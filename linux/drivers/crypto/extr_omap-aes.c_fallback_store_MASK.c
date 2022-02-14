
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 size_t FUNC_1 (char const*,int ,long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 long VAR_7;

 VAR_6 = FUNC_1(VAR_4, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;


 if (VAR_7 < 9) {
  FUNC_0(VAR_2, "minimum fallback size 9\n");
  return -VAR_0;
 }

 VAR_1 = VAR_7;

 return VAR_5;
}
