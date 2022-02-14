
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_pool {size_t pipe_count; int ** transforms; int ** mis; int ** timing_generators; int ** opps; } ;
struct dce_transform {int base; } ;
struct dce_mem_input {int base; } ;
struct dce110_timing_generator {int base; } ;
struct dce110_opp {int base; } ;
struct dc_context {TYPE_2__* dc; } ;
struct TYPE_3__ {int max_slave_planes; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_transform*,struct dc_context*) ;
 int FUNC_1 (struct dce_transform*,struct dc_context*) ;
 int FUNC_2 (struct dce_transform*,struct dc_context*) ;
 int FUNC_3 (struct dce_transform*,struct dc_context*) ;
 int FUNC_4 (struct dce_transform*) ;
 struct dce_transform* FUNC_5 (int,int ) ;

__attribute__((used)) static bool FUNC_6(struct dc_context *VAR_1, struct resource_pool *VAR_2)
{
 struct dce110_timing_generator *VAR_3 = FUNC_5(sizeof(*VAR_3),
            VAR_0);
 struct dce_transform *VAR_4 = FUNC_5(sizeof(*VAR_4),
          VAR_0);
 struct dce_mem_input *VAR_5 = FUNC_5(sizeof(*VAR_5),
         VAR_0);
 struct dce110_opp *VAR_6 = FUNC_5(sizeof(*VAR_6),
       VAR_0);

 if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6) {
  FUNC_4(VAR_3);
  FUNC_4(VAR_4);
  FUNC_4(VAR_5);
  FUNC_4(VAR_6);
  return 0;
 }

 FUNC_1(VAR_6, VAR_1);

 FUNC_2(VAR_3, VAR_1);
 FUNC_0(VAR_5, VAR_1);
 FUNC_3(VAR_4, VAR_1);

 VAR_2->opps[VAR_2->pipe_count] = &VAR_6->base;
 VAR_2->timing_generators[VAR_2->pipe_count] = &VAR_3->base;
 VAR_2->mis[VAR_2->pipe_count] = &VAR_5->base;
 VAR_2->transforms[VAR_2->pipe_count] = &VAR_4->base;
 VAR_2->pipe_count++;


 VAR_1->dc->caps.max_slave_planes = 1;
 VAR_1->dc->caps.max_slave_planes = 1;

 return 1;
}
