
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint32_t ;
struct dc_transfer_func_distributed_points {int dummy; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
struct dc_stream_update {struct dc_dsc_config* dsc_config; TYPE_4__* wb_update; int * dither_option; int * vsp_infopacket; int * vsc_infopacket; int * dpms_off; int * vrr_infopacket; int * output_csc_transform; int * output_color_space; int * gamut_remap; int * periodic_interrupt1; int * periodic_interrupt0; int * abm_level; int * hdr_static_metadata; TYPE_3__* out_transfer_func; TYPE_2__ dst; TYPE_1__ src; } ;
struct TYPE_15__ {void* DSC; } ;
struct dc_dsc_config {scalar_t__ num_slices_h; scalar_t__ num_slices_v; } ;
struct TYPE_16__ {TYPE_7__ flags; struct dc_dsc_config dsc_cfg; } ;
struct dc_stream_state {int num_wb_info; TYPE_8__ timing; int * writeback_info; int dither_option; int vsp_infopacket; int vsc_infopacket; int dpms_off; int vrr_infopacket; int csc_color_matrix; int output_color_space; int gamut_remap_matrix; int periodic_interrupt1; int periodic_interrupt0; int abm_level; int hdr_static_metadata; TYPE_3__* out_transfer_func; TYPE_2__ dst; TYPE_1__ src; } ;
struct dc_state {int dummy; } ;
struct dc {TYPE_6__* res_pool; } ;
struct TYPE_14__ {TYPE_5__* funcs; } ;
struct TYPE_13__ {int (* validate_bandwidth ) (struct dc*,struct dc_state*,int) ;} ;
struct TYPE_12__ {int num_wb_info; int * writeback_info; } ;
struct TYPE_11__ {int tf_pts; int type; int tf; int sdr_ref_white_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct dc*,struct dc_state*,int) ;

__attribute__((used)) static void FUNC_3(struct dc *VAR_1,
      struct dc_state *VAR_2,
      struct dc_stream_state *VAR_3,
      const struct dc_stream_update *VAR_4)
{
 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
  return;

 if (VAR_4->src.height && VAR_4->src.width)
  VAR_3->src = VAR_4->src;

 if (VAR_4->dst.height && VAR_4->dst.width)
  VAR_3->dst = VAR_4->dst;

 if (VAR_4->out_transfer_func &&
     VAR_3->out_transfer_func != VAR_4->out_transfer_func) {
  VAR_3->out_transfer_func->sdr_ref_white_level =
   VAR_4->out_transfer_func->sdr_ref_white_level;
  VAR_3->out_transfer_func->tf = VAR_4->out_transfer_func->tf;
  VAR_3->out_transfer_func->type =
   VAR_4->out_transfer_func->type;
  FUNC_1(&VAR_3->out_transfer_func->tf_pts,
         &VAR_4->out_transfer_func->tf_pts,
         sizeof(struct dc_transfer_func_distributed_points));
 }

 if (VAR_4->hdr_static_metadata)
  VAR_3->hdr_static_metadata = *VAR_4->hdr_static_metadata;

 if (VAR_4->abm_level)
  VAR_3->abm_level = *VAR_4->abm_level;

 if (VAR_4->periodic_interrupt0)
  VAR_3->periodic_interrupt0 = *VAR_4->periodic_interrupt0;

 if (VAR_4->periodic_interrupt1)
  VAR_3->periodic_interrupt1 = *VAR_4->periodic_interrupt1;

 if (VAR_4->gamut_remap)
  VAR_3->gamut_remap_matrix = *VAR_4->gamut_remap;





 if (VAR_4->output_color_space)
  VAR_3->output_color_space = *VAR_4->output_color_space;

 if (VAR_4->output_csc_transform)
  VAR_3->csc_color_matrix = *VAR_4->output_csc_transform;

 if (VAR_4->vrr_infopacket)
  VAR_3->vrr_infopacket = *VAR_4->vrr_infopacket;

 if (VAR_4->dpms_off)
  VAR_3->dpms_off = *VAR_4->dpms_off;

 if (VAR_4->vsc_infopacket)
  VAR_3->vsc_infopacket = *VAR_4->vsc_infopacket;

 if (VAR_4->vsp_infopacket)
  VAR_3->vsp_infopacket = *VAR_4->vsp_infopacket;

 if (VAR_4->dither_option)
  VAR_3->dither_option = *VAR_4->dither_option;
}
