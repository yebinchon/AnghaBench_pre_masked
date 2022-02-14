
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IGNORE_MSA_TIMING_PARAM; } ;
union down_spread_ctrl {scalar_t__ raw; TYPE_1__ bits; } ;
struct pipe_ctx {struct dc_stream_state* stream; } ;
struct dc_stream_state {scalar_t__ ignore_msa_timing_param; struct dc_link* link; } ;
struct dc_link {int dummy; } ;
typedef int old_downspread ;
typedef int new_downspread ;


 int VAR_0 ;
 int FUNC_0 (struct dc_link*,int ,scalar_t__*,int) ;
 int FUNC_1 (struct dc_link*,int ,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx *VAR_1)
{
 struct dc_stream_state *VAR_2 = VAR_1->stream;
 struct dc_link *VAR_3 = VAR_2->link;
 union down_spread_ctrl VAR_4;
 union down_spread_ctrl VAR_5;

 FUNC_0(VAR_3, VAR_0,
   &VAR_4.raw, sizeof(VAR_4));

 VAR_5.raw = VAR_4.raw;

 VAR_5.bits.IGNORE_MSA_TIMING_PARAM =
   (VAR_2->ignore_msa_timing_param) ? 1 : 0;

 if (VAR_5.raw != VAR_4.raw) {
  FUNC_1(VAR_3, VAR_0,
   &VAR_5.raw, sizeof(VAR_5));
 }
}
