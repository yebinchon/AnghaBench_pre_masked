
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_private {int class; } ;
struct kobject {int dummy; } ;
struct class_attribute {int (* show ) (int ,struct class_attribute*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct class_attribute*,char*) ;
 struct class_attribute* FUNC_1 (struct attribute*) ;
 struct subsys_private* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
          char *VAR_3)
{
 struct class_attribute *VAR_4 = FUNC_1(VAR_2);
 struct subsys_private *VAR_5 = FUNC_2(VAR_1);
 ssize_t VAR_6 = -VAR_0;

 if (VAR_4->show)
  VAR_6 = VAR_4->show(VAR_5->class, VAR_4, VAR_3);
 return VAR_6;
}
