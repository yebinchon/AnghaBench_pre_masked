
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_device {int oper_speed; int dev; } ;


 int FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct bcm_device *VAR_0)
{
 FUNC_0(VAR_0->dev, "max-speed", &VAR_0->oper_speed);
 return 0;
}
