
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dpi {int encoder; TYPE_1__* pdev; } ;
struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct drm_bridge*,int *) ;
 int FUNC_1 (int ,int ,int ,struct drm_panel**,struct drm_bridge**) ;
 struct drm_bridge* FUNC_2 (struct drm_panel*,int ) ;

__attribute__((used)) static int FUNC_3(struct vc4_dpi *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;
 struct drm_panel *VAR_4;
 struct drm_bridge *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->of_node, 0, 0,
       &VAR_4, &VAR_5);
 if (VAR_6) {



  if (VAR_6 == -VAR_1)
   return 0;
  else
   return VAR_6;
 }

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_4, VAR_0);

 return FUNC_0(VAR_2->encoder, VAR_5, ((void*)0));
}
