
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct timing_generator {TYPE_5__* funcs; } ;
struct irq_source_info {int ext_id; int src_id; } ;
struct irq_service {struct dc_context* ctx; } ;
struct dc_context {struct dc* dc; } ;
struct dc {TYPE_4__* current_state; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
struct TYPE_10__ {int (* arm_vert_intr ) (struct timing_generator*,int) ;} ;
struct TYPE_8__ {TYPE_2__* pipe_ctx; } ;
struct TYPE_9__ {TYPE_3__ res_ctx; } ;
struct TYPE_6__ {struct timing_generator* tg; } ;
struct TYPE_7__ {TYPE_1__ stream_res; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct irq_service*,struct irq_source_info const*,int) ;
 int FUNC_2 (struct dc*,int ,int ) ;
 int FUNC_3 (struct timing_generator*,int) ;

bool FUNC_4(struct irq_service *VAR_1,
         const struct irq_source_info *VAR_2,
         bool VAR_3)
{
 struct dc_context *VAR_4 = VAR_1->ctx;
 struct dc *VAR_5 = VAR_1->ctx->dc;
 enum dc_irq_source VAR_6 =
   FUNC_2(VAR_1->ctx->dc,
         VAR_2->src_id,
         VAR_2->ext_id);
 uint8_t VAR_7 = VAR_6 - VAR_0;

 struct timing_generator *VAR_8 =
   VAR_5->current_state->res_ctx.pipe_ctx[VAR_7].stream_res.tg;

 if (VAR_3) {
  if (!VAR_8 || !VAR_8->funcs->arm_vert_intr(VAR_8, 2)) {
   FUNC_0("Failed to get VBLANK!\n");
   return 0;
  }
 }

 FUNC_1(VAR_1, VAR_2, VAR_3);
 return 1;
}
