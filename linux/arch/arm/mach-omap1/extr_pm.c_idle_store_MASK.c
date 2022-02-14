
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned short VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,unsigned short*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3, struct kobj_attribute *VAR_4,
     const char * VAR_5, size_t VAR_6)
{
 unsigned short VAR_7;
 if (FUNC_2(VAR_5, "%hu", &VAR_7) != 1 ||
     (VAR_7 != 0 && VAR_7 != 1) ||
     (VAR_7 != 0 && !FUNC_0(VAR_0))) {
  FUNC_1("idle_sleep_store: Invalid value\n");
  return -VAR_1;
 }
 VAR_2 = VAR_7;
 return VAR_6;
}
