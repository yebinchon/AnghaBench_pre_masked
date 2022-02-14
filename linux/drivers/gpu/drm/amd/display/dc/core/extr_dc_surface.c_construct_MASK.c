
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_plane_state {TYPE_3__* blend_tf; TYPE_5__* lut3d_func; TYPE_2__* in_shaper_func; TYPE_1__* in_transfer_func; TYPE_4__* gamma_correction; struct dc_context* ctx; } ;
struct dc_context {int dummy; } ;
struct TYPE_10__ {struct dc_context* ctx; } ;
struct TYPE_9__ {int is_identity; } ;
struct TYPE_8__ {struct dc_context* ctx; void* type; } ;
struct TYPE_7__ {struct dc_context* ctx; void* type; } ;
struct TYPE_6__ {struct dc_context* ctx; void* type; } ;


 void* VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 TYPE_4__* FUNC_1 () ;
 void* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct dc_context *VAR_1, struct dc_plane_state *VAR_2)
{
 VAR_2->ctx = VAR_1;

 VAR_2->gamma_correction = FUNC_1();
 if (VAR_2->gamma_correction != ((void*)0))
  VAR_2->gamma_correction->is_identity = 1;

 VAR_2->in_transfer_func = FUNC_2();
 if (VAR_2->in_transfer_func != ((void*)0)) {
  VAR_2->in_transfer_func->type = VAR_0;
  VAR_2->in_transfer_func->ctx = VAR_1;
 }
}
