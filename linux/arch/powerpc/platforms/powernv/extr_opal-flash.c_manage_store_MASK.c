
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_3,
       struct kobj_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 uint8_t VAR_7;
 switch (VAR_5[0]) {
 case '0':
  VAR_7 = VAR_2;
  break;
 case '1':
  VAR_7 = VAR_1;
  break;
 default:
  return -VAR_0;
 }


 FUNC_0(VAR_7);
 return VAR_6;
}
