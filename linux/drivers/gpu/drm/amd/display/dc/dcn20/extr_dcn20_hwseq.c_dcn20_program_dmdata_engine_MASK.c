
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stream_encoder {TYPE_6__* funcs; } ;
struct TYPE_9__ {int valid; } ;
struct TYPE_10__ {TYPE_3__ hdrsmd; } ;
struct TYPE_11__ {TYPE_4__ encoder_info_frame; struct stream_encoder* stream_enc; } ;
struct TYPE_7__ {struct hubp* hubp; } ;
struct pipe_ctx {TYPE_5__ stream_res; struct dc_stream_state* stream; TYPE_1__ plane_res; } ;
struct hubp {int inst; } ;
struct TYPE_8__ {scalar_t__ quad_part; } ;
struct dc_stream_state {TYPE_2__ dmdata_address; int signal; } ;
typedef enum dynamic_metadata_mode { ____Placeholder_dynamic_metadata_mode } dynamic_metadata_mode ;
struct TYPE_12__ {int (* set_dynamic_metadata ) (struct stream_encoder*,int,int ,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct stream_encoder*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_2)
{
 struct dc_stream_state *VAR_3 = VAR_2->stream;
 struct hubp *VAR_4 = VAR_2->plane_res.hubp;
 bool VAR_5 = 0;
 struct stream_encoder *VAR_6 = VAR_2->stream_res.stream_enc;
 enum dynamic_metadata_mode VAR_7 = FUNC_0(VAR_3->signal)
       ? VAR_0
       : VAR_1;


 if (VAR_2->stream->dmdata_address.quad_part != 0) {
  VAR_2->stream_res.encoder_info_frame.hdrsmd.valid = 0;
  VAR_5 = 1;
 }

 if (!VAR_4)
  return;

 if (!VAR_6 || !VAR_6->funcs->set_dynamic_metadata)
  return;

 VAR_6->funcs->set_dynamic_metadata(VAR_6, VAR_5,
      VAR_4->inst, VAR_7);
}
