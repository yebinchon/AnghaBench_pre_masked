
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rmi_device*,int) ;
 int FUNC_2 (struct rmi_device*) ;

int FUNC_3(struct rmi_device *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_0->dev, "Failed to suspend functions: %d\n",
   VAR_2);

 FUNC_1(VAR_0, VAR_1);
 return VAR_2;
}
