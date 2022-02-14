
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_private {int bus; } ;
struct kobject {int dummy; } ;
struct bus_attribute {int (* store ) (int ,char const*,size_t) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char const*,size_t) ;
 struct bus_attribute* FUNC_1 (struct attribute*) ;
 struct subsys_private* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0, struct attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct bus_attribute *VAR_4 = FUNC_1(VAR_1);
 struct subsys_private *VAR_5 = FUNC_2(VAR_0);
 ssize_t VAR_6 = 0;

 if (VAR_4->store)
  VAR_6 = VAR_4->store(VAR_5->bus, VAR_2, VAR_3);
 return VAR_6;
}
