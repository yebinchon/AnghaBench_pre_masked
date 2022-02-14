
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct platform_device *VAR_0,
     struct clk **VAR_1, u32 VAR_2)
{
 FUNC_1(VAR_0->dev.of_node);

 if (!VAR_2 || !VAR_1)
  return;

 do {
  FUNC_0(VAR_1[--VAR_2]);
  VAR_1[VAR_2] = ((void*)0);
 } while (VAR_2);
}
