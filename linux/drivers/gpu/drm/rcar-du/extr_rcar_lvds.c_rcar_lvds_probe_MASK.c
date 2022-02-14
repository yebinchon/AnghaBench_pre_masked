
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_6__ {int of_node; int * funcs; struct rcar_lvds* driver_private; } ;
struct rcar_lvds {TYPE_2__ bridge; int mmio; int info; TYPE_1__* dev; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 struct rcar_lvds* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct rcar_lvds*) ;
 int VAR_3 ;
 int FUNC_8 (struct rcar_lvds*) ;
 int FUNC_9 (struct rcar_lvds*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct rcar_lvds *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_7(VAR_4, VAR_5);

 VAR_5->dev = &VAR_4->dev;
 VAR_5->info = FUNC_5(&VAR_4->dev);

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->bridge.driver_private = VAR_5;
 VAR_5->bridge.funcs = &VAR_3;
 VAR_5->bridge.of_node = VAR_4->dev.of_node;

 VAR_6 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_5->mmio = FUNC_2(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->mmio))
  return FUNC_1(VAR_5->mmio);

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_4(&VAR_5->bridge);

 return 0;
}
