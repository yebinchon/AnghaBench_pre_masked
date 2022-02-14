
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int dev; int rpm_enabled; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct clk_core *VAR_0)
{
 if (!VAR_0->rpm_enabled)
  return;

 FUNC_0(VAR_0->dev);
}
