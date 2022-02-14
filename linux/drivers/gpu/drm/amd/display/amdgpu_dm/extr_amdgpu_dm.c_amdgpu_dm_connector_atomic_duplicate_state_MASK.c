
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector_state {int dummy; } ;
struct drm_connector {int state; } ;
struct dm_connector_state {struct drm_connector_state base; int underscan_vborder; int underscan_hborder; int underscan_enable; int scaling; int abm_level; int freesync_capable; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct drm_connector_state*) ;
 struct dm_connector_state* FUNC_1 (struct dm_connector_state*,int,int ) ;
 struct dm_connector_state* FUNC_2 (int ) ;

struct drm_connector_state *
FUNC_3(struct drm_connector *VAR_1)
{
 struct dm_connector_state *VAR_2 =
  FUNC_2(VAR_1->state);

 struct dm_connector_state *VAR_3 =
   FUNC_1(VAR_2, sizeof(*VAR_2), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_3->base);

 VAR_3->freesync_capable = VAR_2->freesync_capable;
 VAR_3->abm_level = VAR_2->abm_level;
 VAR_3->scaling = VAR_2->scaling;
 VAR_3->underscan_enable = VAR_2->underscan_enable;
 VAR_3->underscan_hborder = VAR_2->underscan_hborder;
 VAR_3->underscan_vborder = VAR_2->underscan_vborder;

 return &VAR_3->base;
}
