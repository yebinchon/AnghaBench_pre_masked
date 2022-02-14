
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timing_generator {TYPE_2__* funcs; } ;
struct TYPE_3__ {struct timing_generator* tg; } ;
struct pipe_ctx {TYPE_1__ stream_res; } ;
struct TYPE_4__ {int (* setup_vertical_interrupt2 ) (struct timing_generator*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pipe_ctx*) ;
 int FUNC_2 (struct timing_generator*,int) ;

__attribute__((used)) static void FUNC_3(struct pipe_ctx *VAR_0)
{
 struct timing_generator *VAR_1 = VAR_0->stream_res.tg;
 int VAR_2 = FUNC_1(VAR_0);

 if (VAR_2 < 0) {
  FUNC_0(0);
  VAR_2 = 0;
 }

 if (VAR_1->funcs->setup_vertical_interrupt2)
  VAR_1->funcs->setup_vertical_interrupt2(VAR_1, VAR_2);
}
