
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {struct komeda_pipeline* pipeline; } ;
struct komeda_scaler {scalar_t__ max_upscaling; TYPE_3__ base; int max_downscaling; int vsize; int hsize; } ;
struct komeda_pipeline {TYPE_4__* funcs; } ;
struct TYPE_7__ {TYPE_1__* component; } ;
struct komeda_data_flow_cfg {scalar_t__ in_w; scalar_t__ in_h; scalar_t__ out_w; scalar_t__ out_h; TYPE_2__ input; } ;
struct TYPE_10__ {int adjusted_mode; } ;
struct komeda_crtc_state {TYPE_5__ base; } ;
struct TYPE_9__ {int (* downscaling_clk_check ) (struct komeda_pipeline*,int *,int ,struct komeda_data_flow_cfg*) ;} ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct komeda_crtc_state*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct komeda_pipeline*,int *,int ,struct komeda_data_flow_cfg*) ;

__attribute__((used)) static int
FUNC_6(struct komeda_scaler *VAR_2,
   struct komeda_crtc_state *VAR_3,
   struct komeda_data_flow_cfg *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_5 = VAR_4->in_w;
 VAR_6 = VAR_4->in_h;
 VAR_7 = VAR_4->out_w;
 VAR_8 = VAR_4->out_h;

 if (!FUNC_2(&VAR_2->hsize, VAR_5) ||
     !FUNC_2(&VAR_2->hsize, VAR_7)) {
  FUNC_0("Invalid horizontal sizes");
  return -VAR_0;
 }

 if (!FUNC_2(&VAR_2->vsize, VAR_6) ||
     !FUNC_2(&VAR_2->vsize, VAR_8)) {
  FUNC_0("Invalid vertical sizes");
  return -VAR_0;
 }




 if (FUNC_1(VAR_4->input.component->id, VAR_1))
  VAR_9 = 1;
 else
  VAR_9 = VAR_2->max_upscaling;

 if (!FUNC_4(VAR_5, VAR_7, VAR_9,
     VAR_2->max_downscaling)) {
  FUNC_0("Invalid horizontal scaling ratio");
  return -VAR_0;
 }

 if (!FUNC_4(VAR_6, VAR_8, VAR_9,
     VAR_2->max_downscaling)) {
  FUNC_0("Invalid vertical scaling ratio");
  return -VAR_0;
 }

 if (VAR_5 > VAR_7 || VAR_6 > VAR_8) {
  struct komeda_pipeline *VAR_10 = VAR_2->base.pipeline;
  int VAR_11;

  VAR_11 = VAR_10->funcs->downscaling_clk_check(VAR_10,
     &VAR_3->base.adjusted_mode,
     FUNC_3(VAR_3), VAR_4);
  if (VAR_11) {
   FUNC_0("aclk can't satisfy the clock requirement of the downscaling\n");
   return VAR_11;
  }
 }

 return 0;
}
