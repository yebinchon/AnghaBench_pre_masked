
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_drm_front_drm_pipeline {int conn_connected; int index; int pflip_to_worker; struct xen_drm_front_drm_info* drm_info; } ;
struct xen_drm_front_drm_info {int front_info; } ;
struct drm_simple_display_pipe {int plane; } ;
struct drm_plane_state {scalar_t__ fb; int state; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct drm_plane_state* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 struct xen_drm_front_drm_pipeline* FUNC_4 (struct drm_simple_display_pipe*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct drm_simple_display_pipe *VAR_1,
       struct drm_plane_state *VAR_2)
{
 struct drm_plane_state *VAR_3 =
   FUNC_1(VAR_2->state,
             &VAR_1->plane);
 if (VAR_2->fb && VAR_3->fb) {
  struct xen_drm_front_drm_pipeline *VAR_4 =
    FUNC_4(VAR_1);
  struct xen_drm_front_drm_info *VAR_5 = VAR_4->drm_info;
  int VAR_6;

  FUNC_3(&VAR_4->pflip_to_worker,
          FUNC_2(VAR_0));

  VAR_6 = FUNC_6(VAR_5->front_info,
           VAR_4->index,
           FUNC_5(VAR_3->fb));
  if (VAR_6) {
   FUNC_0("Failed to send page flip request to backend: %d\n", VAR_6);

   VAR_4->conn_connected = 0;




   return 0;
  }




  return 1;
 }

 return 0;
}
