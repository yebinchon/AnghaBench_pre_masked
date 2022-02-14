
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_driver {int dummy; } ;
struct scmi_device_id {int dummy; } ;
struct scmi_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct scmi_device_id* FUNC_0 (struct scmi_device*,struct scmi_driver*) ;
 struct scmi_device* FUNC_1 (struct device*) ;
 struct scmi_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct scmi_driver *VAR_2 = FUNC_2(VAR_1);
 struct scmi_device *VAR_3 = FUNC_1(VAR_0);
 const struct scmi_device_id *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  return 1;

 return 0;
}
