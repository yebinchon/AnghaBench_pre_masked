
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xen_drm_front_drm_pipeline {int index; int conn; int pipe; int pflip_to_worker; int width; int height; struct xen_drm_front_drm_info* drm_info; } ;
struct xen_drm_front_drm_info {struct drm_device* drm_dev; } ;
struct xen_drm_front_cfg_connector {int width; int height; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,int *,int *,int const*,int,int *,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int*) ;
 int FUNC_3 (struct xen_drm_front_drm_info*,int *) ;

__attribute__((used)) static int FUNC_4(struct xen_drm_front_drm_info *VAR_2,
        int VAR_3, struct xen_drm_front_cfg_connector *VAR_4,
        struct xen_drm_front_drm_pipeline *VAR_5)
{
 struct drm_device *VAR_6 = VAR_2->drm_dev;
 const u32 *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5->drm_info = VAR_2;
 VAR_5->index = VAR_3;
 VAR_5->height = VAR_4->height;
 VAR_5->width = VAR_4->width;

 FUNC_0(&VAR_5->pflip_to_worker, VAR_1);

 VAR_9 = FUNC_3(VAR_2, &VAR_5->conn);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_2(&VAR_8);

 return FUNC_1(VAR_6, &VAR_5->pipe,
         &VAR_0, VAR_7,
         VAR_8, ((void*)0),
         &VAR_5->conn);
}
