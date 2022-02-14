
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hisi_crg_dev {int clk_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct hisi_crg_dev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_1)
{
 struct hisi_crg_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1->dev.of_node);

 FUNC_1(VAR_0,
    FUNC_0(VAR_0),
    VAR_2->clk_data);
}
