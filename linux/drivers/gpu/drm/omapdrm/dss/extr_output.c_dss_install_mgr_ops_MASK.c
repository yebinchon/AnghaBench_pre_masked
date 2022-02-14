
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_drm_private {int dummy; } ;
struct dss_mgr_ops {int dummy; } ;
struct dss_device {struct omap_drm_private* mgr_ops_priv; struct dss_mgr_ops const* mgr_ops; } ;


 int VAR_0 ;

int FUNC_0(struct dss_device *VAR_1,
   const struct dss_mgr_ops *VAR_2,
   struct omap_drm_private *VAR_3)
{
 if (VAR_1->mgr_ops)
  return -VAR_0;

 VAR_1->mgr_ops = VAR_2;
 VAR_1->mgr_ops_priv = VAR_3;

 return 0;
}
