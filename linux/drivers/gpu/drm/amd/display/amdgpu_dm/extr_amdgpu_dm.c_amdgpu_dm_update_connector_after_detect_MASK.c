
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct edid {int dummy; } ;
struct TYPE_10__ {int mutex; } ;
struct drm_device {TYPE_5__ mode_config; } ;
struct drm_connector {scalar_t__ force; struct drm_device* dev; } ;
struct TYPE_8__ {scalar_t__ length; scalar_t__ raw_edid; } ;
struct dc_sink {scalar_t__ sink_signal; TYPE_3__ dc_edid; } ;
struct TYPE_9__ {int aux; } ;
struct TYPE_6__ {int mst_state; } ;
struct amdgpu_dm_connector {struct edid* edid; struct dc_sink* dc_sink; scalar_t__ num_modes; TYPE_4__ dm_dp_aux; int connector_id; struct dc_sink* dc_em_sink; struct drm_connector base; TYPE_2__* dc_link; TYPE_1__ mst_mgr; } ;
struct TYPE_7__ {struct dc_sink* local_sink; } ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct dc_sink*) ;
 int FUNC_3 (struct dc_sink*) ;
 int FUNC_4 (struct drm_connector*,struct edid*) ;
 int FUNC_5 (int *,struct edid*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct amdgpu_dm_connector *VAR_2)
{
 struct drm_connector *VAR_3 = &VAR_2->base;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct dc_sink *VAR_5;


 if (VAR_2->mst_mgr.mst_state == 1)
  return;


 VAR_5 = VAR_2->dc_link->local_sink;
 if (VAR_5)
  FUNC_3(VAR_5);






 if (VAR_2->base.force != VAR_0
   && VAR_2->dc_em_sink) {





  FUNC_7(&VAR_4->mode_config.mutex);

  if (VAR_5) {
   if (VAR_2->dc_sink) {
    FUNC_1(VAR_3, ((void*)0));






    FUNC_2(VAR_2->dc_sink);
   }
   VAR_2->dc_sink = VAR_5;
   FUNC_3(VAR_2->dc_sink);
   FUNC_1(VAR_3,
     VAR_2->edid);
  } else {
   FUNC_1(VAR_3, ((void*)0));
   if (!VAR_2->dc_sink) {
    VAR_2->dc_sink = VAR_2->dc_em_sink;
    FUNC_3(VAR_2->dc_sink);
   }
  }

  FUNC_8(&VAR_4->mode_config.mutex);

  if (VAR_5)
   FUNC_2(VAR_5);
  return;
 }





 if (VAR_5 && VAR_5->sink_signal == VAR_1) {
  FUNC_2(VAR_5);
  return;
 }

 if (VAR_2->dc_sink == VAR_5) {




  FUNC_0("DCHPD: connector_id=%d: dc_sink didn't change.\n",
    VAR_2->connector_id);
  if (VAR_5)
   FUNC_2(VAR_5);
  return;
 }

 FUNC_0("DCHPD: connector_id=%d: Old sink=%p New sink=%p\n",
  VAR_2->connector_id, VAR_2->dc_sink, VAR_5);

 FUNC_7(&VAR_4->mode_config.mutex);





 if (VAR_5) {




  if (VAR_2->dc_sink)
   FUNC_1(VAR_3, ((void*)0));

  VAR_2->dc_sink = VAR_5;
  FUNC_3(VAR_2->dc_sink);
  if (VAR_5->dc_edid.length == 0) {
   VAR_2->edid = ((void*)0);
   FUNC_6(&VAR_2->dm_dp_aux.aux);
  } else {
   VAR_2->edid =
    (struct edid *) VAR_5->dc_edid.raw_edid;


   FUNC_4(VAR_3,
     VAR_2->edid);
   FUNC_5(&VAR_2->dm_dp_aux.aux,
         VAR_2->edid);
  }
  FUNC_1(VAR_3, VAR_2->edid);

 } else {
  FUNC_6(&VAR_2->dm_dp_aux.aux);
  FUNC_1(VAR_3, ((void*)0));
  FUNC_4(VAR_3, ((void*)0));
  VAR_2->num_modes = 0;
  FUNC_2(VAR_2->dc_sink);
  VAR_2->dc_sink = ((void*)0);
  VAR_2->edid = ((void*)0);
 }

 FUNC_8(&VAR_4->mode_config.mutex);

 if (VAR_5)
  FUNC_2(VAR_5);
}
