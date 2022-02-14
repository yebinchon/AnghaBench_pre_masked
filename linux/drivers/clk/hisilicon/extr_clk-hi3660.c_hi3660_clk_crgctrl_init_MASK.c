
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_8__ {int clk_num; struct clk** clks; } ;
struct TYPE_9__ {TYPE_1__ clk_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct device_node*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 int FUNC_9 (char*,int,int ) ;

__attribute__((used)) static void FUNC_10(struct device_node *VAR_7)
{
 struct clk **VAR_8;
 int VAR_9;

 if (!VAR_1)
  FUNC_3(VAR_7);


 if (!VAR_1)
  return;

 FUNC_7(VAR_5,
       FUNC_0(VAR_5),
       VAR_1);
 FUNC_6(VAR_4,
          FUNC_0(VAR_4),
          VAR_1);
 FUNC_8(VAR_6,
         FUNC_0(VAR_6),
         VAR_1);
 FUNC_5(VAR_2,
           FUNC_0(VAR_2),
           VAR_1);
 FUNC_4(VAR_3,
      FUNC_0(VAR_3),
      VAR_1);

 VAR_8 = VAR_1->clk_data.clks;
 for (VAR_9 = 0; VAR_9 < VAR_1->clk_data.clk_num; VAR_9++) {
  if (FUNC_1(VAR_8[VAR_9]) && FUNC_2(VAR_8[VAR_9]) != -VAR_0)
   FUNC_9("Failed to register crgctrl clock[%d] err=%ld\n",
          VAR_9, FUNC_2(VAR_8[VAR_9]));
 }
}
