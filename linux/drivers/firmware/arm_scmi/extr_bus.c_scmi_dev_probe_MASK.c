
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_driver {int (* probe ) (struct scmi_device*) ;} ;
struct scmi_device_id {int dummy; } ;
struct scmi_device {int handle; int protocol_id; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scmi_device_id* FUNC_0 (struct scmi_device*,struct scmi_driver*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scmi_device*) ;
 struct scmi_device* FUNC_3 (struct device*) ;
 struct scmi_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct scmi_driver *VAR_3 = FUNC_4(VAR_2->driver);
 struct scmi_device *VAR_4 = FUNC_3(VAR_2);
 const struct scmi_device_id *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (!VAR_4->handle)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4->protocol_id, VAR_4->handle);
 if (VAR_6)
  return VAR_6;

 return VAR_3->probe(VAR_4);
}
