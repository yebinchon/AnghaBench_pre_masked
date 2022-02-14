
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


struct TYPE_9__ {size_t num_states; } ;
struct TYPE_10__ {TYPE_3__ soc; int * ValidationStatus; } ;
struct TYPE_11__ {TYPE_4__ vba; } ;
struct TYPE_12__ {TYPE_5__ dml; } ;
struct dc_state {TYPE_6__ bw_ctx; } ;
struct dc {TYPE_2__* ctx; TYPE_1__* res_pool; } ;
typedef int display_e2e_pipe_params_st ;
struct TYPE_8__ {int logger; } ;
struct TYPE_7__ {int pipe_count; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct dc*,struct dc_state*,int *,int,int) ;
 int FUNC_9 (struct dc*,struct dc_state*,int *,int*,int*,int) ;
 int FUNC_10 (struct dc*,struct dc_state*,int *,int*,int*,int*) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int,int ) ;

__attribute__((used)) static bool FUNC_14(struct dc *VAR_4, struct dc_state *VAR_5,
  bool VAR_6)
{
 bool VAR_7 = 0;

 FUNC_4();

 int VAR_8 = 0;
 int VAR_9[VAR_1];
 int VAR_10 = 0;
 display_e2e_pipe_params_st *VAR_11 = FUNC_13(VAR_4->res_pool->pipe_count * sizeof(display_e2e_pipe_params_st), VAR_0);
 FUNC_6(VAR_4->ctx->logger);

 FUNC_0();

 VAR_7 = FUNC_10(VAR_4, VAR_5, VAR_11, &VAR_10, VAR_9, &VAR_8);

 if (VAR_10 == 0)
  goto validate_out;

 if (!VAR_7)
  goto validate_fail;

 FUNC_1();

 if (VAR_6) {
  FUNC_5(VAR_3);
  goto validate_out;
 }

 FUNC_9(VAR_4, VAR_5, VAR_11, &VAR_10, VAR_9, VAR_8);
 FUNC_8(VAR_4, VAR_5, VAR_11, VAR_10, VAR_8);

 FUNC_2();

 goto validate_out;

validate_fail:
 FUNC_7("Mode Validation Warning: %s failed validation.\n",
  FUNC_11(VAR_5->bw_ctx.dml.vba.ValidationStatus[VAR_5->bw_ctx.dml.vba.soc.num_states]));

 FUNC_5(VAR_2);
 VAR_7 = 0;

validate_out:
 FUNC_12(VAR_11);

 FUNC_3();

 return VAR_7;
}
