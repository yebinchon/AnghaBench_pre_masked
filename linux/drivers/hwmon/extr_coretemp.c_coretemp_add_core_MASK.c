
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct platform_device*,unsigned int,int) ;
 int FUNC_1 (int *,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct platform_device *VAR_0, unsigned int VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2))
  FUNC_1(&VAR_0->dev, "Adding Core %u failed\n", VAR_1);
}
