
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int addr_update; int new_plane; int full_update; int in_transfer_func_change; int input_csc_change; int coeff_reduction_change; int gamma_change; } ;
union surface_update_flags {TYPE_2__ bits; scalar_t__ raw; } ;
struct dc_surface_update {TYPE_3__* surface; TYPE_1__* plane_info; scalar_t__ gamma; scalar_t__ coeff_reduction_factor; scalar_t__ input_csc_color_matrix; scalar_t__ in_transfer_func; scalar_t__ flip_addr; } ;
struct dc_state {int dummy; } ;
struct dc {struct dc_state* current_state; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
struct TYPE_6__ {int format; scalar_t__ force_full_update; union surface_update_flags update_flags; } ;
struct TYPE_4__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct dc_surface_update const*) ;
 int FUNC_3 (struct dc_surface_update const*) ;
 int FUNC_4 (struct dc_state const*,TYPE_3__*) ;

__attribute__((used)) static enum surface_update_type FUNC_5(const struct dc *VAR_4,
  const struct dc_surface_update *VAR_5)
{
 const struct dc_state *VAR_6 = VAR_4->current_state;
 enum surface_update_type VAR_7;
 enum surface_update_type VAR_8 = VAR_1;
 union surface_update_flags *VAR_9 = &VAR_5->surface->update_flags;

 VAR_9->raw = 0;

 if (VAR_5->flip_addr)
  VAR_9->bits.addr_update = 1;

 if (!FUNC_4(VAR_6, VAR_5->surface)) {
  VAR_9->bits.new_plane = 1;
  return VAR_2;
 }

 if (VAR_5->surface->force_full_update) {
  VAR_9->bits.full_update = 1;
  return VAR_2;
 }

 VAR_7 = FUNC_2(VAR_5);
 FUNC_1(&VAR_8, VAR_7);

 VAR_7 = FUNC_3(VAR_5);
 FUNC_1(&VAR_8, VAR_7);

 if (VAR_5->flip_addr)
  VAR_9->bits.addr_update = 1;

 if (VAR_5->in_transfer_func)
  VAR_9->bits.in_transfer_func_change = 1;

 if (VAR_5->input_csc_color_matrix)
  VAR_9->bits.input_csc_change = 1;

 if (VAR_5->coeff_reduction_factor)
  VAR_9->bits.coeff_reduction_change = 1;

 if (VAR_5->gamma) {
  enum surface_pixel_format VAR_10 = VAR_0;

  if (VAR_5->plane_info)
   VAR_10 = VAR_5->plane_info->format;
  else if (VAR_5->surface)
   VAR_10 = VAR_5->surface->format;

  if (FUNC_0(VAR_10))
   VAR_9->bits.gamma_change = 1;
 }

 if (VAR_9->bits.in_transfer_func_change) {
  VAR_7 = VAR_3;
  FUNC_1(&VAR_8, VAR_7);
 }

 if (VAR_9->bits.input_csc_change
   || VAR_9->bits.coeff_reduction_change
   || VAR_9->bits.gamma_change) {
  VAR_7 = VAR_2;
  FUNC_1(&VAR_8, VAR_7);
 }

 return VAR_8;
}
