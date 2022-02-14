
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct display_mode_lib {int dummy; } ;
typedef int display_rq_regs_st ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ display_rq_params_st ;
struct TYPE_7__ {int src; } ;
typedef TYPE_2__ display_pipe_params_st ;


 int FUNC_0 (struct display_mode_lib*,TYPE_1__*,int ) ;
 int FUNC_1 (struct display_mode_lib*,int *,TYPE_1__) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct display_mode_lib*,int ) ;

void FUNC_4(struct display_mode_lib *VAR_0,
  display_rq_regs_st *VAR_1,
  const display_pipe_params_st VAR_2)
{
 display_rq_params_st VAR_3 = {0};

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(VAR_0, &VAR_3, VAR_2.src);
 FUNC_1(VAR_0, VAR_1, VAR_3);

 FUNC_3(VAR_0, *VAR_1);
}
