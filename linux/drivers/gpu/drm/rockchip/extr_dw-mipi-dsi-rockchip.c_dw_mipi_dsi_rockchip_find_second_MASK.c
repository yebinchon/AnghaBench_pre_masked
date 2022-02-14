
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int compatible; } ;
struct dw_mipi_dsi_rockchip {TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; TYPE_1__* driver; } ;
struct TYPE_3__ {int of_match_table; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 struct device_node* FUNC_1 (struct device_node*,int *,int ) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,int,int ) ;
 struct of_device_id* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct platform_device*) ;
 struct dw_mipi_dsi_rockchip* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static struct device
*FUNC_8(struct dw_mipi_dsi_rockchip *VAR_1)
{
 const struct of_device_id *VAR_2;
 struct device_node *VAR_3 = ((void*)0), *VAR_4;

 VAR_2 = FUNC_4(VAR_1->dev->driver->of_match_table, VAR_1->dev);

 VAR_4 = FUNC_3(VAR_1->dev->of_node, 1, 0);
 if (!VAR_4)
  return ((void*)0);

 while ((VAR_3 = FUNC_1(VAR_3, ((void*)0),
            VAR_2->compatible))) {
  struct device_node *VAR_5;


  if (VAR_3 == VAR_1->dev->of_node)
   continue;

  VAR_5 = FUNC_3(VAR_3, 1, 0);
  if (!VAR_5)
   continue;


  if (VAR_5 == VAR_4) {
   struct dw_mipi_dsi_rockchip *VAR_6;
   struct platform_device *VAR_7;

   VAR_7 = FUNC_2(VAR_3);






   FUNC_5(VAR_5);
   FUNC_5(VAR_3);
   FUNC_5(VAR_4);

   if (!VAR_7)
    return FUNC_0(-VAR_0);

   VAR_6 = FUNC_7(VAR_7);
   if (!VAR_6) {
    FUNC_6(VAR_7);
    return FUNC_0(-VAR_0);
   }

   return &VAR_7->dev;
  }

  FUNC_5(VAR_5);
 }

 FUNC_5(VAR_4);

 return ((void*)0);
}
