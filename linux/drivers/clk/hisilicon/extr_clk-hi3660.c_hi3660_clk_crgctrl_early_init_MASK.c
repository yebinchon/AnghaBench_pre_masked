
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_5__ {int * clks; } ;
struct TYPE_6__ {TYPE_1__ clk_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (struct device_node*,int) ;
 int FUNC_3 (int ,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7) +
   FUNC_0(VAR_5) +
   FUNC_0(VAR_4) +
   FUNC_0(VAR_6) +
   FUNC_0(VAR_2) +
   FUNC_0(VAR_3);
 int VAR_10;

 VAR_1 = FUNC_2(VAR_8, VAR_9);
 if (!VAR_1)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  VAR_1->clk_data.clks[VAR_10] = FUNC_1(-VAR_0);

 FUNC_3(VAR_7,
         FUNC_0(VAR_7),
         VAR_1);
}
