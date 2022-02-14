
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int id; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned long*) ;
 long FUNC_1 (int ,int ,unsigned long*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
   struct device_attribute *VAR_4, const char *VAR_5,
   size_t VAR_6)
{
 unsigned long VAR_7;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5, "%lu", &VAR_7);
 if (VAR_9 != 1)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_3->id, VAR_2, &VAR_7);
 if (VAR_8)
  return -VAR_1;

 return VAR_6;
}
