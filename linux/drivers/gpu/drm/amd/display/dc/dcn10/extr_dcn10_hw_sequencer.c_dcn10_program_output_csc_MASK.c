
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_10__ {TYPE_5__* dpp; } ;
struct pipe_ctx {TYPE_4__ plane_res; TYPE_2__* stream; } ;
struct dc {int dummy; } ;
typedef scalar_t__ int16_t ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_11__ {TYPE_3__* funcs; } ;
struct TYPE_9__ {int (* dpp_set_csc_default ) (TYPE_5__*,int) ;int (* dpp_set_csc_adjustment ) (TYPE_5__*,scalar_t__*) ;} ;
struct TYPE_7__ {int enable_adjustment; } ;
struct TYPE_8__ {TYPE_1__ csc_color_matrix; } ;


 scalar_t__ FUNC_0 (struct pipe_ctx*,int) ;
 int FUNC_1 (struct pipe_ctx*,scalar_t__*) ;
 int FUNC_2 (TYPE_5__*,scalar_t__*) ;
 int FUNC_3 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_4(struct dc *VAR_0,
  struct pipe_ctx *VAR_1,
  enum dc_color_space VAR_2,
  uint16_t *VAR_3,
  int VAR_4)
{
 if (VAR_1->stream->csc_color_matrix.enable_adjustment == 1) {
  if (VAR_1->plane_res.dpp->funcs->dpp_set_csc_adjustment != ((void*)0)) {
   int16_t VAR_5 = VAR_3[3];


   if (VAR_5 > 0 && FUNC_0(VAR_1, VAR_2)) {
    FUNC_1(VAR_1, VAR_3);
   } else {
    VAR_1->plane_res.dpp->funcs->dpp_set_csc_adjustment(VAR_1->plane_res.dpp, VAR_3);
   }
  }
 } else {
  if (VAR_1->plane_res.dpp->funcs->dpp_set_csc_default != ((void*)0))
   VAR_1->plane_res.dpp->funcs->dpp_set_csc_default(VAR_1->plane_res.dpp, VAR_2);
 }
}
