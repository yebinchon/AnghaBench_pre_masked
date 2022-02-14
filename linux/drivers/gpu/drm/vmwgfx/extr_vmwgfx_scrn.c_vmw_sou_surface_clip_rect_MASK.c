
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_du_update_plane {int dummy; } ;
struct drm_rect {int y2; int x2; int y1; int x1; } ;
struct TYPE_2__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ SVGASignedRect ;



__attribute__((used)) static uint32_t FUNC_0(struct vmw_du_update_plane *VAR_0,
       void *VAR_1, struct drm_rect *VAR_2,
       uint32_t VAR_3, uint32_t VAR_4)
{
 SVGASignedRect *VAR_5 = VAR_1;





 VAR_5->left = VAR_2->x1;
 VAR_5->top = VAR_2->y1;
 VAR_5->right = VAR_2->x2;
 VAR_5->bottom = VAR_2->y2;

 return sizeof(*VAR_5);
}
