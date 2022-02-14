
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; int is_remote; int ddc; int dev; } ;
struct drm_dp_mst_port {scalar_t__ port_num; int pdt; int ddps; int connector; TYPE_1__ aux; int cached_edid; int next; int input; int mstb; scalar_t__ available_pbn; int num_sdp_stream_sinks; int num_sdp_streams; int dpcd_rev; int ldps; int mcs; TYPE_3__* mgr; struct drm_dp_mst_branch* parent; int malloc_kref; int topology_kref; } ;
struct drm_dp_mst_branch {TYPE_3__* mgr; int ports; } ;
struct drm_dp_link_addr_reply_port {scalar_t__ port_number; int peer_device_type; int ddps; int num_sdp_stream_sinks; int num_sdp_streams; int dpcd_revision; int legacy_device_plug_status; int mcs; int input_port; } ;
struct drm_device {int dev; } ;
typedef int proppath ;
struct TYPE_8__ {TYPE_2__* cbs; int lock; } ;
struct TYPE_7__ {int (* register_connector ) (int ) ;int (* add_connector ) (TYPE_3__*,struct drm_dp_mst_port*,char*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_dp_mst_branch*,scalar_t__,char*,int) ;
 int FUNC_1 (int ) ;
 struct drm_dp_mst_port* FUNC_2 (struct drm_dp_mst_branch*,scalar_t__) ;
 int FUNC_3 (struct drm_dp_mst_branch*) ;
 int FUNC_4 (struct drm_dp_mst_port*) ;
 int FUNC_5 (struct drm_dp_mst_port*) ;
 int FUNC_6 (struct drm_dp_mst_port*) ;
 int FUNC_7 (struct drm_dp_mst_port*,int) ;
 int FUNC_8 (TYPE_3__*,struct drm_dp_mst_branch*,struct drm_dp_mst_port*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 struct drm_dp_mst_port* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*,struct drm_dp_mst_port*,char*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19(struct drm_dp_mst_branch *VAR_4,
       struct drm_device *VAR_5,
       struct drm_dp_link_addr_reply_port *VAR_6)
{
 struct drm_dp_mst_port *VAR_7;
 bool VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_7 = FUNC_2(VAR_4, VAR_6->port_number);
 if (!VAR_7) {
  VAR_7 = FUNC_12(sizeof(*VAR_7), VAR_3);
  if (!VAR_7)
   return;
  FUNC_11(&VAR_7->topology_kref);
  FUNC_11(&VAR_7->malloc_kref);
  VAR_7->parent = VAR_4;
  VAR_7->port_num = VAR_6->port_number;
  VAR_7->mgr = VAR_4->mgr;
  VAR_7->aux.name = "DPMST";
  VAR_7->aux.dev = VAR_5->dev;
  VAR_7->aux.is_remote = 1;





  FUNC_3(VAR_4);

  VAR_9 = 1;
 } else {
  VAR_10 = VAR_7->pdt;
  VAR_11 = VAR_7->ddps;
 }

 VAR_7->pdt = VAR_6->peer_device_type;
 VAR_7->input = VAR_6->input_port;
 VAR_7->mcs = VAR_6->mcs;
 VAR_7->ddps = VAR_6->ddps;
 VAR_7->ldps = VAR_6->legacy_device_plug_status;
 VAR_7->dpcd_rev = VAR_6->dpcd_revision;
 VAR_7->num_sdp_streams = VAR_6->num_sdp_streams;
 VAR_7->num_sdp_stream_sinks = VAR_6->num_sdp_stream_sinks;



 if (VAR_9) {
  FUNC_15(&VAR_4->mgr->lock);
  FUNC_4(VAR_7);
  FUNC_13(&VAR_7->next, &VAR_4->ports);
  FUNC_16(&VAR_4->mgr->lock);
 }

 if (VAR_11 != VAR_7->ddps) {
  if (VAR_7->ddps) {
   if (!VAR_7->input) {
    FUNC_8(VAR_4->mgr,
        VAR_4, VAR_7);
   }
  } else {
   VAR_7->available_pbn = 0;
  }
 }

 if (VAR_10 != VAR_7->pdt && !VAR_7->input) {
  FUNC_7(VAR_7, VAR_10);

  VAR_8 = FUNC_6(VAR_7);
  if (VAR_8 == 1)
   FUNC_9(VAR_4->mgr, VAR_7->mstb);
 }

 if (VAR_9 && !VAR_7->input) {
  char VAR_12[255];

  FUNC_0(VAR_4, VAR_7->port_num, VAR_12,
        sizeof(VAR_12));
  VAR_7->connector = (*VAR_4->mgr->cbs->add_connector)(VAR_4->mgr,
           VAR_7,
           VAR_12);
  if (!VAR_7->connector) {

   FUNC_15(&VAR_4->mgr->lock);
   FUNC_14(&VAR_7->next);
   FUNC_16(&VAR_4->mgr->lock);

   FUNC_5(VAR_7);
   goto out;
  }
  if ((VAR_7->pdt == VAR_1 ||
       VAR_7->pdt == VAR_2) &&
      VAR_7->port_num >= VAR_0) {
   VAR_7->cached_edid = FUNC_10(VAR_7->connector,
        &VAR_7->aux.ddc);
   FUNC_1(VAR_7->connector);
  }
  (*VAR_4->mgr->cbs->register_connector)(VAR_7->connector);
 }

out:

 FUNC_5(VAR_7);
}
