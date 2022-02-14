
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_drm_front_info {int xb_dev; int drm_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_drm_front_info*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xen_drm_front_info *VAR_1)
{
 if (!VAR_1->drm_info)
  return;


 FUNC_1(VAR_1->xb_dev, VAR_0);

 FUNC_0(VAR_1);
}
