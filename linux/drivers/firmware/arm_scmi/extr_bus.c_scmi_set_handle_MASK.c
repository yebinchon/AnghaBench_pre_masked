
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_device {int dev; int handle; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct scmi_device *VAR_0)
{
 VAR_0->handle = FUNC_0(&VAR_0->dev);
}
