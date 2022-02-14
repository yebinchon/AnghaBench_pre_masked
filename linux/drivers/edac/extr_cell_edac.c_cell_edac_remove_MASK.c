
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mem_ctl_info {int dummy; } ;


 struct mem_ctl_info* FUNC_0 (int *) ;
 int FUNC_1 (struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct mem_ctl_info *VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  FUNC_1(VAR_1);
 return 0;
}
