
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,struct resource*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct resource *VAR_4;

 VAR_4 = FUNC_5(VAR_3, VAR_1, 0);
 VAR_2 = FUNC_4(&VAR_3->dev, VAR_4);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_3(&VAR_3->dev, "Core Voltage : %d mV\n",
  FUNC_2(VAR_0) * 8);

 return 0;
}
