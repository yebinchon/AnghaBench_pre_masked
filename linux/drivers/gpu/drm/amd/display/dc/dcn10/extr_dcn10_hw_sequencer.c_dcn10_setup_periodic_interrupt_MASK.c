
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {TYPE_1__* funcs; } ;
struct TYPE_8__ {struct timing_generator* tg; } ;
struct pipe_ctx {TYPE_3__* stream; TYPE_4__ stream_res; } ;
typedef enum vline_select { ____Placeholder_vline_select } vline_select ;
struct TYPE_6__ {int lines_offset; } ;
struct TYPE_7__ {TYPE_2__ periodic_interrupt1; } ;
struct TYPE_5__ {int (* setup_vertical_interrupt1 ) (struct timing_generator*,int ) ;int (* setup_vertical_interrupt0 ) (struct timing_generator*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_ctx*,int,int *,int *) ;
 int FUNC_1 (struct timing_generator*,int ,int ) ;
 int FUNC_2 (struct timing_generator*,int ) ;

__attribute__((used)) static void FUNC_3(
  struct pipe_ctx *VAR_2,
  enum vline_select VAR_3)
{
 struct timing_generator *VAR_4 = VAR_2->stream_res.tg;

 if (VAR_3 == VAR_0) {
  uint32_t VAR_5 = 0;
  uint32_t VAR_6 = 0;

  FUNC_0(VAR_2, VAR_3, &VAR_5, &VAR_6);

  VAR_4->funcs->setup_vertical_interrupt0(VAR_4, VAR_5, VAR_6);

 } else if (VAR_3 == VAR_1) {
  VAR_2->stream_res.tg->funcs->setup_vertical_interrupt1(
    VAR_4,
    VAR_2->stream->periodic_interrupt1.lines_offset);
 }
}
