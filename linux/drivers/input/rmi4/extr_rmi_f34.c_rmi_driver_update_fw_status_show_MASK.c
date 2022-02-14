
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_driver_data {scalar_t__ f34_container; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct rmi_driver_data* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct rmi_driver_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 if (VAR_4->f34_container)
  VAR_5 = FUNC_1(VAR_4->f34_container);

 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_5);
}
