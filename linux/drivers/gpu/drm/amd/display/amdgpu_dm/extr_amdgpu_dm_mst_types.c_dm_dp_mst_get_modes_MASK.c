
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct edid {int extensions; } ;
struct drm_connector {int dummy; } ;
struct dc_sink_init_data {int sink_signal; int link; } ;
struct dc_sink {scalar_t__ sink_signal; struct amdgpu_dm_connector* priv; } ;
struct amdgpu_dm_connector {struct edid* edid; int base; struct dc_sink* dc_sink; int dc_link; int port; TYPE_1__* mst_port; } ;
struct TYPE_2__ {int mst_mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct drm_connector*,struct edid*) ;
 struct dc_sink* FUNC_1 (int ,int *,int,struct dc_sink_init_data*) ;
 int FUNC_2 (struct dc_sink*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 int FUNC_4 (int *,struct edid*) ;
 struct edid* FUNC_5 (struct drm_connector*,int *,int ) ;
 struct amdgpu_dm_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_3)
{
 struct amdgpu_dm_connector *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = 0;

 if (!VAR_4)
  return FUNC_3(VAR_3, ((void*)0));

 if (!VAR_4->edid) {
  struct edid *VAR_6;
  VAR_6 = FUNC_5(VAR_3, &VAR_4->mst_port->mst_mgr, VAR_4->port);

  if (!VAR_6) {
   FUNC_4(
    &VAR_4->base,
    ((void*)0));
   return VAR_5;
  }

  VAR_4->edid = VAR_6;
 }

 if (VAR_4->dc_sink && VAR_4->dc_sink->sink_signal == VAR_2) {
  FUNC_2(VAR_4->dc_sink);
  VAR_4->dc_sink = ((void*)0);
 }

 if (!VAR_4->dc_sink) {
  struct dc_sink *VAR_7;
  struct dc_sink_init_data VAR_8 = {
    .link = VAR_4->dc_link,
    .sink_signal = VAR_1 };
  VAR_7 = FUNC_1(
   VAR_4->dc_link,
   (uint8_t *)VAR_4->edid,
   (VAR_4->edid->extensions + 1) * VAR_0,
   &VAR_8);

  VAR_7->priv = VAR_4;

  VAR_4->dc_sink = VAR_7;

  if (VAR_4->dc_sink)
   FUNC_0(
     VAR_3, VAR_4->edid);

 }

 FUNC_4(
     &VAR_4->base, VAR_4->edid);

 VAR_5 = FUNC_3(VAR_3, VAR_4->edid);

 return VAR_5;
}
