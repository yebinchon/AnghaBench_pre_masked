
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_drm_front_drm_pipeline {int conn_connected; } ;
struct xen_drm_front_drm_info {int drm_dev; } ;
struct drm_connector {int polled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_connector*,int *) ;
 int FUNC_1 (int ,struct drm_connector*,int *,int ) ;
 struct xen_drm_front_drm_pipeline* FUNC_2 (struct drm_connector*) ;

int FUNC_3(struct xen_drm_front_drm_info *VAR_5,
       struct drm_connector *VAR_6)
{
 struct xen_drm_front_drm_pipeline *VAR_7 =
   FUNC_2(VAR_6);

 FUNC_0(VAR_6, &VAR_4);

 VAR_7->conn_connected = 1;

 VAR_6->polled = VAR_0 |
   VAR_1;

 return FUNC_1(VAR_5->drm_dev, VAR_6,
      &VAR_3, VAR_2);
}
