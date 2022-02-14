
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_drm_front_cfg {int num_connectors; struct xen_drm_front_info* front_info; } ;
struct xen_drm_front_info {struct xen_drm_front_cfg cfg; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct xen_drm_front_info*,struct xen_drm_front_cfg*) ;
 int FUNC_2 (struct xen_drm_front_info*) ;
 int FUNC_3 (struct xen_drm_front_info*) ;

__attribute__((used)) static int FUNC_4(struct xen_drm_front_info *VAR_0)
{
 struct xen_drm_front_cfg *VAR_1 = &VAR_0->cfg;
 int VAR_2;

 VAR_1->front_info = VAR_0;
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0("Have %d connector(s)\n", VAR_1->num_connectors);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_3(VAR_0);
}
