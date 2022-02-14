
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_driver {int (* remove ) (struct scmi_device*) ;} ;
struct scmi_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct scmi_device*) ;
 struct scmi_device* FUNC_1 (struct device*) ;
 struct scmi_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct scmi_driver *VAR_1 = FUNC_2(VAR_0->driver);
 struct scmi_device *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1->remove)
  VAR_1->remove(VAR_2);

 return 0;
}
