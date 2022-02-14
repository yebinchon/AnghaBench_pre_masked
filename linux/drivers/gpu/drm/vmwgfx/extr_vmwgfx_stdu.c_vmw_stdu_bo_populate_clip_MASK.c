
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_du_update_plane {int dummy; } ;
struct drm_rect {int y1; int x1; } ;
struct SVGA3dCopyBox {int srcx; int srcy; int d; int h; int w; scalar_t__ z; int y; int x; scalar_t__ srcz; } ;


 int FUNC_0 (struct drm_rect*) ;
 int FUNC_1 (struct drm_rect*) ;

__attribute__((used)) static uint32_t FUNC_2(struct vmw_du_update_plane *VAR_0,
       void *VAR_1, struct drm_rect *VAR_2,
       uint32_t VAR_3, uint32_t VAR_4)
{
 struct SVGA3dCopyBox *VAR_5 = VAR_1;

 VAR_5->srcx = VAR_3;
 VAR_5->srcy = VAR_4;
 VAR_5->srcz = 0;
 VAR_5->x = VAR_2->x1;
 VAR_5->y = VAR_2->y1;
 VAR_5->z = 0;
 VAR_5->w = FUNC_1(VAR_2);
 VAR_5->h = FUNC_0(VAR_2);
 VAR_5->d = 1;

 return sizeof(*VAR_5);
}
