
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_dmadev {int desc_pool; scalar_t__ ll123_supported; int legacy; int ddev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,struct omap_dmadev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct omap_dmadev*) ;
 int FUNC_5 (struct omap_dmadev*,int ,int ) ;
 struct omap_dmadev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct omap_dmadev *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 if (VAR_1->dev.of_node)
  FUNC_3(VAR_1->dev.of_node);

 VAR_3 = FUNC_7(VAR_1, 1);
 FUNC_0(&VAR_1->dev, VAR_3, VAR_2);

 FUNC_1(&VAR_2->ddev);

 if (!VAR_2->legacy) {

  FUNC_5(VAR_2, VAR_0, 0);
 }

 if (VAR_2->ll123_supported)
  FUNC_2(VAR_2->desc_pool);

 FUNC_4(VAR_2);

 return 0;
}
