
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int pipe_count; unsigned int stream_enc_count; unsigned int clk_src_count; unsigned int audio_count; int * irqs; int * dmcu; int * abm; int ** audios; int * dp_clock_source; int ** clock_sources; int ** stream_enc; int ** sw_i2cs; int ** hw_i2cs; int ** engines; TYPE_1__* res_cap; int ** timing_generators; int ** mis; int ** ipps; int ** transforms; int ** opps; } ;
struct dce110_resource_pool {TYPE_2__ base; } ;
struct TYPE_3__ {unsigned int num_ddc; } ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct dce110_resource_pool *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->base.pipe_count; VAR_1++) {
  if (VAR_0->base.opps[VAR_1] != ((void*)0))
   FUNC_6(&VAR_0->base.opps[VAR_1]);

  if (VAR_0->base.transforms[VAR_1] != ((void*)0))
   FUNC_7(&VAR_0->base.transforms[VAR_1]);

  if (VAR_0->base.ipps[VAR_1] != ((void*)0))
   FUNC_11(&VAR_0->base.ipps[VAR_1]);

  if (VAR_0->base.mis[VAR_1] != ((void*)0)) {
   FUNC_12(FUNC_2(VAR_0->base.mis[VAR_1]));
   VAR_0->base.mis[VAR_1] = ((void*)0);
  }

  if (VAR_0->base.timing_generators[VAR_1] != ((void*)0)) {
   FUNC_12(FUNC_1(VAR_0->base.timing_generators[VAR_1]));
   VAR_0->base.timing_generators[VAR_1] = ((void*)0);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.res_cap->num_ddc; VAR_1++) {
  if (VAR_0->base.engines[VAR_1] != ((void*)0))
   FUNC_5(&VAR_0->base.engines[VAR_1]);
  if (VAR_0->base.hw_i2cs[VAR_1] != ((void*)0)) {
   FUNC_12(VAR_0->base.hw_i2cs[VAR_1]);
   VAR_0->base.hw_i2cs[VAR_1] = ((void*)0);
  }
  if (VAR_0->base.sw_i2cs[VAR_1] != ((void*)0)) {
   FUNC_12(VAR_0->base.sw_i2cs[VAR_1]);
   VAR_0->base.sw_i2cs[VAR_1] = ((void*)0);
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.stream_enc_count; VAR_1++) {
  if (VAR_0->base.stream_enc[VAR_1] != ((void*)0))
   FUNC_12(FUNC_0(VAR_0->base.stream_enc[VAR_1]));
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->base.clk_src_count; VAR_1++) {
  if (VAR_0->base.clock_sources[VAR_1] != ((void*)0)) {
   FUNC_4(&VAR_0->base.clock_sources[VAR_1]);
  }
 }

 if (VAR_0->base.dp_clock_source != ((void*)0))
  FUNC_4(&VAR_0->base.dp_clock_source);

 for (VAR_1 = 0; VAR_1 < VAR_0->base.audio_count; VAR_1++) {
  if (VAR_0->base.audios[VAR_1] != ((void*)0)) {
   FUNC_9(&VAR_0->base.audios[VAR_1]);
  }
 }

 if (VAR_0->base.abm != ((void*)0))
  FUNC_8(&VAR_0->base.abm);

 if (VAR_0->base.dmcu != ((void*)0))
  FUNC_10(&VAR_0->base.dmcu);

 if (VAR_0->base.irqs != ((void*)0)) {
  FUNC_3(&VAR_0->base.irqs);
 }
}
