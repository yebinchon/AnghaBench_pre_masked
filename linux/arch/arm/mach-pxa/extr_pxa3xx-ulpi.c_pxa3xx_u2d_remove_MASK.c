
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct pxa3xx_u2d_platform_data {int (* exit ) (TYPE_2__*) ;} ;
struct TYPE_5__ {struct pxa3xx_u2d_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int clk; int mmio_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct pxa3xx_u2d_platform_data *VAR_3 = VAR_2->dev.platform_data;
 struct resource *VAR_4;

 if (FUNC_1()) {
  FUNC_7();
  FUNC_6();
 }

 if (VAR_3->exit)
  VAR_3->exit(&VAR_2->dev);

 FUNC_5(VAR_2, ((void*)0));
 FUNC_2(VAR_1->mmio_base);
 VAR_4 = FUNC_4(VAR_2, VAR_0, 0);
 FUNC_8(VAR_4->start, FUNC_9(VAR_4));

 FUNC_0(VAR_1->clk);

 FUNC_3(VAR_1);

 return 0;
}
