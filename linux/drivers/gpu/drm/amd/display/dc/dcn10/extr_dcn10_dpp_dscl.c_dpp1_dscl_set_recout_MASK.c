
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rect {scalar_t__ height; int width; scalar_t__ y; int x; } ;
struct TYPE_8__ {int inst; TYPE_3__* ctx; } ;
struct dcn10_dpp {TYPE_4__ base; } ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_5__ {scalar_t__ visual_confirm; } ;
struct TYPE_6__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_1(
   struct dcn10_dpp *VAR_7, const struct rect *VAR_8)
{
 int VAR_9 = 0;
 if (VAR_7->base.ctx->dc->debug.visual_confirm != VAR_6)
  VAR_9 = 1;

 FUNC_0(VAR_2, 0,

    VAR_3, VAR_8->x,

    VAR_4, VAR_8->y);

 FUNC_0(VAR_1, 0,

    VAR_5, VAR_8->width,

    VAR_0, VAR_8->height
    - VAR_9 * 4 * (VAR_7->base.inst + 1));
}
