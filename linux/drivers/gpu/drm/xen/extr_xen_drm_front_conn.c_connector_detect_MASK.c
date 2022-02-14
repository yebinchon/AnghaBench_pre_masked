
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_drm_front_drm_pipeline {int conn_connected; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_connector {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct xen_drm_front_drm_pipeline* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_2,
       struct drm_modeset_acquire_ctx *VAR_3,
       bool VAR_4)
{
 struct xen_drm_front_drm_pipeline *VAR_5 =
   FUNC_1(VAR_2);

 if (FUNC_0(VAR_2->dev))
  VAR_5->conn_connected = 0;

 return VAR_5->conn_connected ? VAR_0 :
   VAR_1;
}
