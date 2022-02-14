
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int * name; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {int num_resources; TYPE_1__ dev; struct resource* resource; } ;
struct omap_hwmod {int flags; } ;
struct omap_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct omap_device*) ;
 int FUNC_1 (struct omap_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct omap_hwmod** FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct omap_hwmod**) ;
 int FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,char*,int,char const**) ;
 struct omap_device* FUNC_10 (struct platform_device*,struct omap_hwmod**,int) ;
 int FUNC_11 (struct platform_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct omap_hwmod* FUNC_12 (char const*) ;
 int FUNC_13 (int *,struct device_node*,struct resource*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct omap_hwmod **VAR_8;
 struct omap_device *VAR_9;
 struct omap_hwmod *VAR_10;
 struct device_node *VAR_11 = VAR_7->dev.of_node;
 struct resource VAR_12;
 const char *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;
 bool VAR_17 = 0, VAR_18 = 0;

 VAR_14 = FUNC_8(VAR_11, "ti,hwmods");
 if (VAR_14 <= 0) {
  FUNC_2(&VAR_7->dev, "No 'hwmods' to build omap_device\n");
  return -VAR_1;
 }


 VAR_16 = FUNC_9(VAR_11, "ti,hwmods", 0, &VAR_13);
 if (!VAR_16 && (!FUNC_15("dma_system", VAR_13, 10) ||
       !FUNC_15("dma", VAR_13, 3)))
  VAR_18 = 1;


 if (!VAR_18 &&
     !FUNC_13(((void*)0), VAR_11, &VAR_12))
  return -VAR_1;

 VAR_8 = FUNC_6(VAR_14, sizeof(struct omap_hwmod *), VAR_3);
 if (!VAR_8) {
  VAR_16 = -VAR_2;
  goto odbfd_exit;
 }

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  FUNC_9(VAR_11, "ti,hwmods", VAR_15, &VAR_13);
  VAR_10 = FUNC_12(VAR_13);
  if (!VAR_10) {
   FUNC_3(&VAR_7->dev, "Cannot lookup hwmod '%s'\n",
    VAR_13);
   VAR_16 = -VAR_0;
   goto odbfd_exit1;
  }
  VAR_8[VAR_15] = VAR_10;
  if (VAR_10->flags & VAR_4)
   VAR_17 = 1;
 }

 VAR_9 = FUNC_10(VAR_7, VAR_8, VAR_14);
 if (FUNC_0(VAR_9)) {
  FUNC_3(&VAR_7->dev, "Cannot allocate omap_device for :%s\n",
   VAR_13);
  VAR_16 = FUNC_1(VAR_9);
  goto odbfd_exit1;
 }


 for (VAR_15 = 0; VAR_15 < VAR_7->num_resources; VAR_15++) {
  struct resource *VAR_19 = &VAR_7->resource[VAR_15];

  if (VAR_19->name == ((void*)0))
   VAR_19->name = FUNC_4(&VAR_7->dev);
 }

 if (!VAR_18) {
  FUNC_5(&VAR_7->dev, &VAR_6);
  if (VAR_17) {
   FUNC_11(VAR_7);
   FUNC_14(&VAR_7->dev);
  }
 }

odbfd_exit1:
 FUNC_7(VAR_8);
odbfd_exit:

 if (VAR_16)
  FUNC_5(&VAR_7->dev, &VAR_5);

 return VAR_16;
}
