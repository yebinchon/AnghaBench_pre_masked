
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {scalar_t__ vdisplay; scalar_t__ hdisplay; } ;
struct TYPE_2__ {int id; } ;
struct drm_connector {int tile_h_loc; int tile_v_loc; TYPE_1__ base; int has_tile; } ;
struct drm_client_offset {int x; int y; } ;


 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_1(struct drm_connector **VAR_0,
           unsigned int VAR_1,
           struct drm_display_mode **VAR_2,
           struct drm_client_offset *VAR_3,
           int VAR_4,
           int VAR_5, int VAR_6)
{
 struct drm_connector *VAR_7;
 int VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = VAR_0[VAR_8];
  if (!VAR_7->has_tile)
   continue;

  if (!VAR_2[VAR_8] && (VAR_5 || VAR_6)) {
   FUNC_0("no modes for connector tiled %d %d\n", VAR_8,
          VAR_7->base.id);
   continue;
  }
  if (VAR_7->tile_h_loc < VAR_5)
   VAR_9 += VAR_2[VAR_8]->hdisplay;

  if (VAR_7->tile_v_loc < VAR_6)
   VAR_10 += VAR_2[VAR_8]->vdisplay;
 }
 VAR_3[VAR_4].x = VAR_9;
 VAR_3[VAR_4].y = VAR_10;
 FUNC_0("returned %d %d for %d %d\n", VAR_9, VAR_10, VAR_5, VAR_6);
 return 0;
}
