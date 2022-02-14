
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_drm_pipeline {int conn_connected; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xen_drm_front_drm_pipeline*) ;
 struct xen_drm_front_drm_pipeline* FUNC_4 (struct drm_simple_display_pipe*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xen_drm_front_drm_pipeline*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_simple_display_pipe *VAR_0)
{
 struct xen_drm_front_drm_pipeline *VAR_1 =
   FUNC_4(VAR_0);
 int VAR_2 = 0, VAR_3;

 if (FUNC_1(VAR_0->crtc.dev, &VAR_3)) {
  VAR_2 = FUNC_6(VAR_1, 0, 0, 0, 0, 0,
          FUNC_5(((void*)0)));
  FUNC_2(VAR_3);
 }
 if (VAR_2)
  FUNC_0("Failed to disable display: %d\n", VAR_2);


 VAR_1->conn_connected = 1;


 FUNC_3(VAR_1);
}
