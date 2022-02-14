
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_device {int dev; int id; int handle; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct scmi_device *VAR_1)
{
 FUNC_2(VAR_1->handle);
 FUNC_1(&VAR_0, VAR_1->id);
 FUNC_0(&VAR_1->dev);
}
