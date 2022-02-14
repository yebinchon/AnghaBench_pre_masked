
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int x; int width; int y; int height; } ;
struct scaler_data {int h_active; int v_active; TYPE_5__ recout; } ;
struct TYPE_9__ {TYPE_3__* ctx; } ;
struct dce_transform {TYPE_4__ base; } ;
struct TYPE_8__ {TYPE_2__* dc; } ;
struct TYPE_6__ {scalar_t__ visual_confirm; } ;
struct TYPE_7__ {TYPE_1__ debug; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_2(
  struct dce_transform *VAR_7,
  const struct scaler_data *VAR_8)
{
 int VAR_9 = VAR_8->h_active
   - VAR_8->recout.x - VAR_8->recout.width;
 int VAR_10 = VAR_8->v_active
   - VAR_8->recout.y - VAR_8->recout.height;

 if (VAR_7->base.ctx->dc->debug.visual_confirm != VAR_6) {
  VAR_10 += 2;
  VAR_9 += 2;
 }

 if (VAR_9 < 0) {
  FUNC_0();
  VAR_9 = 0;
 }
 if (VAR_10 < 0) {
  FUNC_0();
  VAR_10 = 0;
 }

 FUNC_1(VAR_2, 0,
   VAR_1, VAR_8->recout.x,
   VAR_3, VAR_9);
 FUNC_1(VAR_5, 0,
   VAR_4, VAR_8->recout.y,
   VAR_0, VAR_10);
}
