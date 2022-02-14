
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mtk_uart_apdmadev {int ddev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtk_uart_apdmadev*) ;
 int FUNC_2 (int ) ;
 struct mtk_uart_apdmadev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct mtk_uart_apdmadev *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_0->dev.of_node);

 FUNC_1(VAR_1);

 FUNC_0(&VAR_1->ddev);

 FUNC_4(&VAR_0->dev);

 return 0;
}
