
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bottom; int right; int top; int left; } ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_8__ {TYPE_3__ srcRect; TYPE_2__ destOrigin; int srcScreenId; } ;
struct vmw_kms_sou_readback_blit {TYPE_4__ body; int header; } ;
struct vmw_kms_dirty {int num_hits; int unit_y2; int unit_x2; int unit_y1; int unit_x1; int fb_y; int fb_x; TYPE_1__* unit; struct vmw_kms_sou_readback_blit* cmd; } ;
struct TYPE_5__ {int unit; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vmw_kms_dirty *VAR_1)
{
 struct vmw_kms_sou_readback_blit *VAR_2 = VAR_1->cmd;

 VAR_2 += VAR_1->num_hits;
 VAR_2->header = VAR_0;
 VAR_2->body.srcScreenId = VAR_1->unit->unit;
 VAR_2->body.destOrigin.x = VAR_1->fb_x;
 VAR_2->body.destOrigin.y = VAR_1->fb_y;
 VAR_2->body.srcRect.left = VAR_1->unit_x1;
 VAR_2->body.srcRect.top = VAR_1->unit_y1;
 VAR_2->body.srcRect.right = VAR_1->unit_x2;
 VAR_2->body.srcRect.bottom = VAR_1->unit_y2;
 VAR_1->num_hits++;
}
