
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_connector {int has_tile; int * tile_group; int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (struct edid*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_connector*,void*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_1,
         struct edid *VAR_2)
{
 void *VAR_3 = ((void*)0);
 int VAR_4;
 VAR_1->has_tile = 0;
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {

  goto out_drop_ref;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_0, 1);
 if (VAR_4 < 0)
  goto out_drop_ref;
 if (!VAR_1->has_tile)
  goto out_drop_ref;
 return;
out_drop_ref:
 if (VAR_1->tile_group) {
  FUNC_1(VAR_1->dev, VAR_1->tile_group);
  VAR_1->tile_group = ((void*)0);
 }
 return;
}
