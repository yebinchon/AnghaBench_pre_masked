
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int mdfld_panel_id; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int,int ) ;

int FUNC_1(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;


 VAR_3->mdfld_panel_id = VAR_1;

 FUNC_0(VAR_2, 0, VAR_3->mdfld_panel_id);

 FUNC_0(VAR_2, 1, VAR_0);
 return 0;
}
