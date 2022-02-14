
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct exynos_dpi {int panel_node; struct videomode* vm; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct videomode*) ;
 struct videomode* FUNC_1 (struct device*,int,int ) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,struct videomode*,int ) ;
 int FUNC_4 (struct device_node*,int ,int ) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct exynos_dpi *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct device_node *VAR_7;

 VAR_4->panel_node = FUNC_4(VAR_6, VAR_2, 0);

 VAR_7 = FUNC_2(VAR_6, "display-timings");
 if (VAR_7) {
  struct videomode *VAR_8;
  int VAR_9;

  FUNC_5(VAR_7);

  VAR_8 = FUNC_1(VAR_5, sizeof(*VAR_4->vm), VAR_3);
  if (!VAR_8)
   return -VAR_1;

  VAR_9 = FUNC_3(VAR_6, VAR_8, 0);
  if (VAR_9 < 0) {
   FUNC_0(VAR_5, VAR_8);
   return VAR_9;
  }

  VAR_4->vm = VAR_8;

  return 0;
 }

 if (!VAR_4->panel_node)
  return -VAR_0;

 return 0;
}
