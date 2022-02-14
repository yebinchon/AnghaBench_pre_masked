
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_cfg {int num_connectors; } ;
struct xen_drm_front_info {int num_evt_pairs; TYPE_1__* evt_pairs; struct xen_drm_front_cfg cfg; } ;
struct xen_drm_front_evtchnl_pair {int dummy; } ;
struct TYPE_2__ {int evt; int req; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xen_drm_front_info*,int,int *,int ) ;
 TYPE_1__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct xen_drm_front_info*) ;

int FUNC_4(struct xen_drm_front_info *VAR_4)
{
 struct xen_drm_front_cfg *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = &VAR_4->cfg;

 VAR_4->evt_pairs =
   FUNC_2(VAR_5->num_connectors,
    sizeof(struct xen_drm_front_evtchnl_pair),
    VAR_3);
 if (!VAR_4->evt_pairs) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_connectors; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_7,
        &VAR_4->evt_pairs[VAR_7].req,
        VAR_2);
  if (VAR_6 < 0) {
   FUNC_0("Error allocating control channel\n");
   goto fail;
  }

  VAR_6 = FUNC_1(VAR_4, VAR_7,
        &VAR_4->evt_pairs[VAR_7].evt,
        VAR_1);
  if (VAR_6 < 0) {
   FUNC_0("Error allocating in-event channel\n");
   goto fail;
  }
 }
 VAR_4->num_evt_pairs = VAR_5->num_connectors;
 return 0;

fail:
 FUNC_3(VAR_4);
 return VAR_6;
}
