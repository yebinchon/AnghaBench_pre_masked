
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_panel* panel; } ;
struct fsl_dcu_drm_device {int encoder; TYPE_1__ connector; int np; } ;
struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (int *,struct drm_bridge*,int *) ;
 int FUNC_3 (int ,int ,int ,struct drm_panel**,struct drm_bridge**) ;
 int FUNC_4 (struct fsl_dcu_drm_device*,struct drm_panel*) ;
 struct drm_panel* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;

int FUNC_8(struct fsl_dcu_drm_device *VAR_0)
{
 struct device_node *VAR_1;
 struct drm_panel *VAR_2;
 struct drm_bridge *VAR_3;
 int VAR_4;


 VAR_1 = FUNC_7(VAR_0->np, "fsl,panel", 0);
 if (VAR_1) {
  VAR_0->connector.panel = FUNC_5(VAR_1);
  FUNC_6(VAR_1);
  if (FUNC_0(VAR_0->connector.panel))
   return FUNC_1(VAR_0->connector.panel);

  return FUNC_4(VAR_0, VAR_0->connector.panel);
 }

 VAR_4 = FUNC_3(VAR_0->np, 0, 0, &VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_2) {
  VAR_0->connector.panel = VAR_2;
  return FUNC_4(VAR_0, VAR_2);
 }

 return FUNC_2(&VAR_0->encoder, VAR_3, ((void*)0));
}
