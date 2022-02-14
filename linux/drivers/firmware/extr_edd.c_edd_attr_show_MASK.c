
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edd_device {int dummy; } ;
struct edd_attribute {int (* show ) (struct edd_device*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct edd_device*,char*) ;
 struct edd_attribute* FUNC_1 (struct attribute*) ;
 struct edd_device* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct kobject * VAR_1, struct attribute *VAR_2, char *VAR_3)
{
 struct edd_device *VAR_4 = FUNC_2(VAR_1);
 struct edd_attribute *VAR_5 = FUNC_1(VAR_2);
 ssize_t VAR_6 = -VAR_0;

 if (VAR_5->show)
  VAR_6 = VAR_5->show(VAR_4, VAR_3);
 return VAR_6;
}
