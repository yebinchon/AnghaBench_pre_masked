
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hi3519_crg_data {int clk_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct hi3519_crg_data* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_3)
{
 struct hi3519_crg_data *VAR_4 = FUNC_5(VAR_3);

 FUNC_4(VAR_3->dev.of_node);

 FUNC_2(VAR_1,
    FUNC_0(VAR_2),
    VAR_4->clk_data);
 FUNC_3(VAR_2,
    FUNC_0(VAR_2),
    VAR_4->clk_data);
 FUNC_1(VAR_0,
    FUNC_0(VAR_0),
    VAR_4->clk_data);
}
