
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int x; int width; int y; int height; } ;
struct scaler_data {int h_active; int v_active; TYPE_3__ recout; } ;
struct TYPE_9__ {TYPE_5__* ctx; } ;
struct dce_transform {TYPE_4__ base; } ;
struct TYPE_10__ {TYPE_2__* dc; } ;
struct TYPE_6__ {scalar_t__ visual_confirm; } ;
struct TYPE_7__ {TYPE_1__ debug; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(
  struct dce_transform *VAR_9,
  const struct scaler_data *VAR_10)
{
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;

 int VAR_13 = VAR_10->h_active - VAR_10->recout.x - VAR_10->recout.width;
 int VAR_14 = VAR_10->v_active - VAR_10->recout.y - VAR_10->recout.height;

 if (VAR_9->base.ctx->dc->debug.visual_confirm != VAR_6) {
  VAR_14 += 2;
  VAR_13 += 2;
 }

 if (VAR_13 < 0) {
  FUNC_0();
  VAR_13 = 0;
 }
 if (VAR_14 < 0) {
  FUNC_0();
  VAR_14 = 0;
 }

 FUNC_2(VAR_11, VAR_10->recout.x,
   VAR_2, VAR_1);

 FUNC_2(VAR_11, VAR_13,
   VAR_2, VAR_3);

 FUNC_2(VAR_12, VAR_10->recout.y,
   VAR_5, VAR_4);

 FUNC_2(VAR_12, VAR_14,
   VAR_5, VAR_0);

 FUNC_1(VAR_9->base.ctx,
   VAR_7,
   VAR_11);

 FUNC_1(VAR_9->base.ctx,
   VAR_8,
   VAR_12);
}
