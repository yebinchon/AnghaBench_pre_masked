
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {scalar_t__ connector_type; scalar_t__ state; } ;
struct TYPE_2__ {int max_requested_bpc; } ;
struct dm_connector_state {int underscan_enable; TYPE_1__ base; int abm_level; scalar_t__ underscan_vborder; scalar_t__ underscan_hborder; int scaling; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_connector*,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (struct dm_connector_state*) ;
 struct dm_connector_state* FUNC_3 (int,int ) ;
 struct dm_connector_state* FUNC_4 (scalar_t__) ;

void FUNC_5(struct drm_connector *VAR_4)
{
 struct dm_connector_state *VAR_5 =
  FUNC_4(VAR_4->state);

 if (VAR_4->state)
  FUNC_0(VAR_4->state);

 FUNC_2(VAR_5);

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);

 if (VAR_5) {
  VAR_5->scaling = VAR_2;
  VAR_5->underscan_enable = 0;
  VAR_5->underscan_hborder = 0;
  VAR_5->underscan_vborder = 0;
  VAR_5->base.max_requested_bpc = 8;

  if (VAR_4->connector_type == VAR_0)
   VAR_5->abm_level = VAR_3;

  FUNC_1(VAR_4, &VAR_5->base);
 }
}
