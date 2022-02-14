
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timing_generator {TYPE_3__* funcs; } ;
struct dc_sink {struct dc_link* link; } ;
struct dc_link {int connector_signal; TYPE_8__* link_enc; } ;
struct dc_crtc_timing {unsigned int pix_clk_100hz; } ;
struct dc {TYPE_5__* res_pool; } ;
struct TYPE_17__ {TYPE_1__* funcs; } ;
struct TYPE_16__ {TYPE_2__* funcs; } ;
struct TYPE_15__ {TYPE_4__* funcs; } ;
struct TYPE_14__ {unsigned int pipe_count; unsigned int stream_enc_count; unsigned int timing_generator_count; TYPE_6__* dp_clock_source; struct timing_generator** timing_generators; TYPE_7__** stream_enc; } ;
struct TYPE_13__ {int (* get_pixel_clk_frequency_100hz ) (TYPE_6__*,unsigned int,unsigned int*) ;} ;
struct TYPE_12__ {int (* is_matching_timing ) (struct timing_generator*,struct dc_crtc_timing*) ;} ;
struct TYPE_11__ {unsigned int (* dig_source_otg ) (TYPE_7__*) ;} ;
struct TYPE_10__ {unsigned int (* get_dig_frontend ) (TYPE_8__*) ;int (* is_dig_enabled ) (TYPE_8__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*) ;
 unsigned int FUNC_2 (TYPE_8__*) ;
 unsigned int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct timing_generator*,struct dc_crtc_timing*) ;
 int FUNC_5 (TYPE_6__*,unsigned int,unsigned int*) ;

bool FUNC_6(const struct dc *VAR_0,
    const struct dc_sink *VAR_1,
    struct dc_crtc_timing *VAR_2)
{
 struct timing_generator *VAR_3;
 struct dc_link *VAR_4 = VAR_1->link;
 unsigned int VAR_5, VAR_6;


 if (!VAR_4->link_enc->funcs->is_dig_enabled(VAR_4->link_enc))
  return 0;







 VAR_5 = VAR_4->link_enc->funcs->get_dig_frontend(VAR_4->link_enc);


 if (VAR_5 >= VAR_0->res_pool->pipe_count)
  return 0;

 if (VAR_5 >= VAR_0->res_pool->stream_enc_count)
  return 0;

 VAR_6 = VAR_0->res_pool->stream_enc[VAR_5]->funcs->dig_source_otg(
  VAR_0->res_pool->stream_enc[VAR_5]);

 if (VAR_6 >= VAR_0->res_pool->timing_generator_count)
  return 0;

 VAR_3 = VAR_0->res_pool->timing_generators[VAR_6];

 if (!VAR_3->funcs->is_matching_timing)
  return 0;

 if (!VAR_3->funcs->is_matching_timing(VAR_3, VAR_2))
  return 0;

 if (FUNC_0(VAR_4->connector_signal)) {
  unsigned int VAR_7;

  VAR_0->res_pool->dp_clock_source->funcs->get_pixel_clk_frequency_100hz(
   VAR_0->res_pool->dp_clock_source,
   VAR_6, &VAR_7);

  if (VAR_2->pix_clk_100hz != VAR_7)
   return 0;

 }

 return 1;
}
