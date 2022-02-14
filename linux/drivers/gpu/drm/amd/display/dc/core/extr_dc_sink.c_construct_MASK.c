
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_sink_init_data {struct dc_link* link; int converter_disable_audio; int dongle_max_pix_clk; int sink_signal; } ;
struct dc_sink {int sink_id; int * dc_container_id; int converter_disable_audio; int dongle_max_pix_clk; TYPE_1__* ctx; struct dc_link* link; int sink_signal; } ;
struct dc_link {TYPE_1__* ctx; } ;
struct TYPE_2__ {int dc_sink_id_count; } ;



__attribute__((used)) static bool FUNC_0(struct dc_sink *VAR_0, const struct dc_sink_init_data *VAR_1)
{

 struct dc_link *VAR_2 = VAR_1->link;

 if (!VAR_2)
  return 0;

 VAR_0->sink_signal = VAR_1->sink_signal;
 VAR_0->link = VAR_2;
 VAR_0->ctx = VAR_2->ctx;
 VAR_0->dongle_max_pix_clk = VAR_1->dongle_max_pix_clk;
 VAR_0->converter_disable_audio = VAR_1->converter_disable_audio;
 VAR_0->dc_container_id = ((void*)0);
 VAR_0->sink_id = VAR_1->link->ctx->dc_sink_id_count;


 VAR_1->link->ctx->dc_sink_id_count++;

 return 1;
}
