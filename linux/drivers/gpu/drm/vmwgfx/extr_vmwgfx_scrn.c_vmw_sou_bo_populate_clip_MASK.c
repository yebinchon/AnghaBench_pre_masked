
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int bottom; int right; int top; int left; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_8__ {TYPE_3__ destRect; TYPE_2__ srcOrigin; int destScreenId; } ;
struct vmw_kms_sou_bo_blit {TYPE_4__ body; int header; } ;
struct vmw_du_update_plane {TYPE_1__* du; } ;
struct drm_rect {int y2; int x2; int y1; int x1; } ;
struct TYPE_5__ {int unit; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(struct vmw_du_update_plane *VAR_1,
      void *VAR_2, struct drm_rect *VAR_3,
      uint32_t VAR_4, uint32_t VAR_5)
{
 struct vmw_kms_sou_bo_blit *VAR_6 = VAR_2;

 VAR_6->header = VAR_0;
 VAR_6->body.destScreenId = VAR_1->du->unit;
 VAR_6->body.srcOrigin.x = VAR_4;
 VAR_6->body.srcOrigin.y = VAR_5;
 VAR_6->body.destRect.left = VAR_3->x1;
 VAR_6->body.destRect.top = VAR_3->y1;
 VAR_6->body.destRect.right = VAR_3->x2;
 VAR_6->body.destRect.bottom = VAR_3->y2;

 return sizeof(*VAR_6);
}
