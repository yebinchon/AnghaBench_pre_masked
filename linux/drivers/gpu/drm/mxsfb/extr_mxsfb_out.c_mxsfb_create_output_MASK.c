
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ polled; int dpms; } ;
struct mxsfb_drm_private {struct drm_panel* panel; TYPE_2__ connector; } ;
struct drm_panel {int dummy; } ;
struct drm_device {TYPE_1__* dev; struct mxsfb_drm_private* dev_private; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (struct drm_device*,TYPE_2__*,int *,int ) ;
 int FUNC_2 (int ,int ,int ,struct drm_panel**,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct drm_device *VAR_4)
{
 struct mxsfb_drm_private *VAR_5 = VAR_4->dev_private;
 struct drm_panel *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4->dev->of_node, 0, 0, &VAR_6, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_5->connector.dpms = VAR_1;
 VAR_5->connector.polled = 0;
 FUNC_0(&VAR_5->connector,
   &VAR_3);
 VAR_7 = FUNC_1(VAR_4, &VAR_5->connector,
     &VAR_2,
     VAR_0);
 if (!VAR_7)
  VAR_5->panel = VAR_6;

 return VAR_7;
}
