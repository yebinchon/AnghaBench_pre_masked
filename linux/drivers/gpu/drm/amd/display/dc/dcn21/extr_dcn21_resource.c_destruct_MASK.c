
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


struct TYPE_10__ {unsigned int stream_enc_count; unsigned int pipe_count; unsigned int audio_count; unsigned int clk_src_count; int * pp_smu; int * dccg; int * dmcub; int * dmcu; int * abm; int * dp_clock_source; int ** clock_sources; scalar_t__* audios; int ** mcif_wb; int ** dwbc; TYPE_3__* res_cap; int ** timing_generators; TYPE_5__** opps; int ** sw_i2cs; int ** hw_i2cs; int ** engines; int * irqs; int ** hubps; TYPE_6__** ipps; int ** dpps; int * hubbub; int * mpc; int ** dscs; int ** stream_enc; } ;
struct dcn21_resource_pool {TYPE_4__ base; } ;
struct TYPE_12__ {TYPE_2__* funcs; } ;
struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_9__ {unsigned int num_dsc; unsigned int num_ddc; unsigned int num_opp; unsigned int num_timing_generator; unsigned int num_dwb; } ;
struct TYPE_8__ {int (* ipp_destroy ) (TYPE_6__**) ;} ;
struct TYPE_7__ {int (* opp_destroy ) (TYPE_5__**) ;} ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int **) ;
 int FUNC_13 (int **) ;
 int FUNC_14 (int **) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (int **) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_6__**) ;
 int FUNC_19 (TYPE_5__**) ;

__attribute__((used)) static void FUNC_20(struct dcn21_resource_pool *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->base.stream_enc_count; VAR_1++) {
  if (VAR_0->base.stream_enc[VAR_1] != ((void*)0)) {
   FUNC_17(FUNC_0(VAR_0->base.stream_enc[VAR_1]));
   VAR_0->base.stream_enc[VAR_1] = ((void*)0);
  }
 }
 if (VAR_0->base.mpc != ((void*)0)) {
  FUNC_17(FUNC_5(VAR_0->base.mpc));
  VAR_0->base.mpc = ((void*)0);
 }
 if (VAR_0->base.hubbub != ((void*)0)) {
  FUNC_17(VAR_0->base.hubbub);
  VAR_0->base.hubbub = ((void*)0);
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->base.pipe_count; VAR_1++) {
  if (VAR_0->base.dpps[VAR_1] != ((void*)0))
   FUNC_12(&VAR_0->base.dpps[VAR_1]);

  if (VAR_0->base.ipps[VAR_1] != ((void*)0))
   VAR_0->base.ipps[VAR_1]->funcs->ipp_destroy(&VAR_0->base.ipps[VAR_1]);

  if (VAR_0->base.hubps[VAR_1] != ((void*)0)) {
   FUNC_17(FUNC_3(VAR_0->base.hubps[VAR_1]));
   VAR_0->base.hubps[VAR_1] = ((void*)0);
  }

  if (VAR_0->base.irqs != ((void*)0)) {
   FUNC_6(&VAR_0->base.irqs);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.res_cap->num_ddc; VAR_1++) {
  if (VAR_0->base.engines[VAR_1] != ((void*)0))
   FUNC_7(&VAR_0->base.engines[VAR_1]);
  if (VAR_0->base.hw_i2cs[VAR_1] != ((void*)0)) {
   FUNC_17(VAR_0->base.hw_i2cs[VAR_1]);
   VAR_0->base.hw_i2cs[VAR_1] = ((void*)0);
  }
  if (VAR_0->base.sw_i2cs[VAR_1] != ((void*)0)) {
   FUNC_17(VAR_0->base.sw_i2cs[VAR_1]);
   VAR_0->base.sw_i2cs[VAR_1] = ((void*)0);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.res_cap->num_opp; VAR_1++) {
  if (VAR_0->base.opps[VAR_1] != ((void*)0))
   VAR_0->base.opps[VAR_1]->funcs->opp_destroy(&VAR_0->base.opps[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.res_cap->num_timing_generator; VAR_1++) {
  if (VAR_0->base.timing_generators[VAR_1] != ((void*)0)) {
   FUNC_17(FUNC_1(VAR_0->base.timing_generators[VAR_1]));
   VAR_0->base.timing_generators[VAR_1] = ((void*)0);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.res_cap->num_dwb; VAR_1++) {
  if (VAR_0->base.dwbc[VAR_1] != ((void*)0)) {
   FUNC_17(FUNC_2(VAR_0->base.dwbc[VAR_1]));
   VAR_0->base.dwbc[VAR_1] = ((void*)0);
  }
  if (VAR_0->base.mcif_wb[VAR_1] != ((void*)0)) {
   FUNC_17(FUNC_4(VAR_0->base.mcif_wb[VAR_1]));
   VAR_0->base.mcif_wb[VAR_1] = ((void*)0);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.audio_count; VAR_1++) {
  if (VAR_0->base.audios[VAR_1])
   FUNC_9(&VAR_0->base.audios[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.clk_src_count; VAR_1++) {
  if (VAR_0->base.clock_sources[VAR_1] != ((void*)0)) {
   FUNC_11(&VAR_0->base.clock_sources[VAR_1]);
   VAR_0->base.clock_sources[VAR_1] = ((void*)0);
  }
 }

 if (VAR_0->base.dp_clock_source != ((void*)0)) {
  FUNC_11(&VAR_0->base.dp_clock_source);
  VAR_0->base.dp_clock_source = ((void*)0);
 }


 if (VAR_0->base.abm != ((void*)0))
  FUNC_8(&VAR_0->base.abm);

 if (VAR_0->base.dmcu != ((void*)0))
  FUNC_10(&VAR_0->base.dmcu);






 if (VAR_0->base.dccg != ((void*)0))
  FUNC_16(&VAR_0->base.dccg);

 if (VAR_0->base.pp_smu != ((void*)0))
  FUNC_14(&VAR_0->base.pp_smu);
}
