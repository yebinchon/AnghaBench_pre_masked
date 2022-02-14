
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct input_pixel_processor* ipp; } ;
struct pipe_ctx {TYPE_1__ plane_res; } ;
struct ipp_prescale_params {int member_0; } ;
struct input_pixel_processor {TYPE_2__* funcs; } ;
struct dc_transfer_func {scalar_t__ type; int tf; } ;
struct dc_plane_state {TYPE_3__* gamma_correction; int format; struct dc_transfer_func* in_transfer_func; } ;
struct TYPE_6__ {int is_identity; } ;
struct TYPE_5__ {int (* ipp_set_degamma ) (struct input_pixel_processor*,int ) ;int (* ipp_program_input_lut ) (struct input_pixel_processor*,TYPE_3__*) ;int (* ipp_program_prescale ) (struct input_pixel_processor*,struct ipp_prescale_params*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (struct ipp_prescale_params*,struct dc_plane_state const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct input_pixel_processor*,struct ipp_prescale_params*) ;
 int FUNC_3 (struct input_pixel_processor*,TYPE_3__*) ;
 int FUNC_4 (struct input_pixel_processor*,int ) ;
 int FUNC_5 (struct input_pixel_processor*,int ) ;
 int FUNC_6 (struct input_pixel_processor*,int ) ;
 int FUNC_7 (struct input_pixel_processor*,int ) ;
 int FUNC_8 (struct input_pixel_processor*,int ) ;

__attribute__((used)) static bool
FUNC_9(struct pipe_ctx *VAR_5,
          const struct dc_plane_state *VAR_6)
{
 struct input_pixel_processor *VAR_7 = VAR_5->plane_res.ipp;
 const struct dc_transfer_func *VAR_8 = ((void*)0);
 struct ipp_prescale_params VAR_9 = { 0 };
 bool VAR_10 = 1;

 if (VAR_7 == ((void*)0))
  return 0;

 if (VAR_6->in_transfer_func)
  VAR_8 = VAR_6->in_transfer_func;

 FUNC_0(&VAR_9, VAR_6);
 VAR_7->funcs->ipp_program_prescale(VAR_7, &VAR_9);

 if (VAR_6->gamma_correction &&
   !VAR_6->gamma_correction->is_identity &&
   FUNC_1(VAR_6->format))
  VAR_7->funcs->ipp_program_input_lut(VAR_7, VAR_6->gamma_correction);

 if (VAR_8 == ((void*)0)) {

  VAR_7->funcs->ipp_set_degamma(VAR_7, VAR_1);
 } else if (VAR_8->type == VAR_4) {
  switch (VAR_8->tf) {
  case 128:
   VAR_7->funcs->ipp_set_degamma(VAR_7, VAR_1);
   break;
  case 131:
   VAR_7->funcs->ipp_set_degamma(VAR_7, VAR_2);
   break;
  case 130:
   VAR_7->funcs->ipp_set_degamma(VAR_7, VAR_0);
   break;
  case 129:
  default:
   VAR_10 = 0;
   break;
  }
 } else if (VAR_8->type == VAR_3) {
  VAR_7->funcs->ipp_set_degamma(VAR_7, VAR_0);
 } else {

  VAR_10 = 0;
 }

 return VAR_10;
}
