
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* stream_enc; } ;
struct pipe_ctx {struct dc_stream_state* stream; TYPE_6__* clock_source; TYPE_2__ stream_res; } ;
struct ext_hdmi_settings {int member_0; } ;
struct TYPE_10__ {int LTE_340MCSC_SCRAMBLE; } ;
struct TYPE_11__ {int h_addressable; int v_addressable; int pix_clk_100hz; int display_color_depth; scalar_t__ pixel_encoding; TYPE_3__ flags; } ;
struct dc_stream_state {int phy_pix_clk; int signal; TYPE_4__ timing; struct dc_link* link; } ;
struct dc_link_settings {int dummy; } ;
struct dc_link {unsigned short chip_caps; int ddc; TYPE_7__* link_enc; int cur_link_settings; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
struct TYPE_14__ {TYPE_5__* funcs; } ;
struct TYPE_13__ {int id; } ;
struct TYPE_12__ {int (* enable_tmds_output ) (TYPE_7__*,int ,int,int ,int) ;} ;
struct TYPE_8__ {int id; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pipe_ctx*,int,struct ext_hdmi_settings*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_7__*,int ,int,int ,int) ;
 int FUNC_6 (struct pipe_ctx*,int,int) ;
 int FUNC_7 (struct pipe_ctx*,int) ;
 int FUNC_8 (struct pipe_ctx*,int,int,struct ext_hdmi_settings*) ;

__attribute__((used)) static void FUNC_9(struct pipe_ctx *VAR_5)
{
 struct dc_stream_state *VAR_6 = VAR_5->stream;
 struct dc_link *VAR_7 = VAR_6->link;
 enum dc_color_depth VAR_8;
 enum engine_id VAR_9;
 struct ext_hdmi_settings VAR_10 = {0};
 bool VAR_11 = 0;
 bool VAR_12 = (VAR_6->timing.h_addressable == 640)
   && (VAR_6->timing.v_addressable == 480);

 if (VAR_6->phy_pix_clk == 0)
  VAR_6->phy_pix_clk = VAR_6->timing.pix_clk_100hz / 10;
 if (VAR_6->phy_pix_clk > 340000)
  VAR_11 = 1;

 if (FUNC_2(VAR_5->stream->signal)) {
  unsigned short VAR_13 = VAR_5->stream->link->chip_caps &
    VAR_1;
  if (VAR_13 == VAR_3) {

   VAR_9 = VAR_5->stream_res.stream_enc->id;

   if (FUNC_3(VAR_5, VAR_9, &VAR_10)) {
    FUNC_8(VAR_5,
      VAR_12, VAR_11, &VAR_10);
   } else {
    FUNC_6(VAR_5,
      VAR_12, VAR_11);
   }
  } else if (VAR_13 == VAR_2) {

   FUNC_7(VAR_5, VAR_11);
  }
 }

 if (FUNC_2(VAR_5->stream->signal))
  FUNC_1(
   VAR_6->link->ddc,
   VAR_6->phy_pix_clk,
   VAR_6->timing.flags.LTE_340MCSC_SCRAMBLE);

 FUNC_4(&VAR_6->link->cur_link_settings, 0,
   sizeof(struct dc_link_settings));

 VAR_8 = VAR_6->timing.display_color_depth;
 if (VAR_6->timing.pixel_encoding == VAR_4)
  VAR_8 = VAR_0;

 VAR_7->link_enc->funcs->enable_tmds_output(
   VAR_7->link_enc,
   VAR_5->clock_source->id,
   VAR_8,
   VAR_5->stream->signal,
   VAR_6->phy_pix_clk);

 if (FUNC_2(VAR_5->stream->signal))
  FUNC_0(VAR_7->ddc);
}
