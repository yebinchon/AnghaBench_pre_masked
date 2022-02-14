
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_port {int ddps; int pdt; int input; scalar_t__ available_pbn; int ldps; int mcs; } ;
struct drm_dp_mst_branch {TYPE_1__* mgr; } ;
struct drm_dp_connection_status_notify {int peer_device_type; int displayport_device_plug_status; int legacy_device_plug_status; int message_capability_status; int port_number; } ;
struct TYPE_2__ {int work; } ;


 struct drm_dp_mst_port* FUNC_0 (struct drm_dp_mst_branch*,int ) ;
 int FUNC_1 (struct drm_dp_mst_port*) ;
 scalar_t__ FUNC_2 (struct drm_dp_mst_port*) ;
 int FUNC_3 (struct drm_dp_mst_port*,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct drm_dp_mst_branch *VAR_1,
          struct drm_dp_connection_status_notify *VAR_2)
{
 struct drm_dp_mst_port *VAR_3;
 int VAR_4;
 int VAR_5;
 bool VAR_6 = 0;
 VAR_3 = FUNC_0(VAR_1, VAR_2->port_number);
 if (!VAR_3)
  return;

 VAR_5 = VAR_3->ddps;
 VAR_4 = VAR_3->pdt;
 VAR_3->pdt = VAR_2->peer_device_type;
 VAR_3->mcs = VAR_2->message_capability_status;
 VAR_3->ldps = VAR_2->legacy_device_plug_status;
 VAR_3->ddps = VAR_2->displayport_device_plug_status;

 if (VAR_5 != VAR_3->ddps) {
  if (VAR_3->ddps) {
   VAR_6 = 1;
  } else {
   VAR_3->available_pbn = 0;
  }
 }
 if (VAR_4 != VAR_3->pdt && !VAR_3->input) {
  FUNC_3(VAR_3, VAR_4);

  if (FUNC_2(VAR_3))
   VAR_6 = 1;
 }

 FUNC_1(VAR_3);
 if (VAR_6)
  FUNC_4(VAR_0, &VAR_1->mgr->work);

}
