
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int dev; int rpm_enabled; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct clk_core *VAR_0)
{
 int VAR_1;

 if (!VAR_0->rpm_enabled)
  return 0;

 VAR_1 = FUNC_0(VAR_0->dev);
 return VAR_1 < 0 ? VAR_1 : 0;
}
