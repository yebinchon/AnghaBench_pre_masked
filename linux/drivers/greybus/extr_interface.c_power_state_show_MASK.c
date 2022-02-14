
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {scalar_t__ active; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 struct gb_interface* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct gb_interface *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->active)
  return FUNC_0(VAR_3, VAR_0, "on\n");
 else
  return FUNC_0(VAR_3, VAR_0, "off\n");
}
