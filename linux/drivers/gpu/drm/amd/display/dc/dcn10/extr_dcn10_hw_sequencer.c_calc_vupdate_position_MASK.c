
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pipe_ctx {TYPE_2__* stream; } ;
struct dc_crtc_timing {int v_total; } ;
struct TYPE_3__ {int lines_offset; } ;
struct TYPE_4__ {TYPE_1__ periodic_interrupt0; struct dc_crtc_timing timing; } ;


 int FUNC_0 (struct pipe_ctx*) ;

__attribute__((used)) static void FUNC_1(
  struct pipe_ctx *VAR_0,
  uint32_t *VAR_1,
  uint32_t *VAR_2)
{
 const struct dc_crtc_timing *VAR_3 = &VAR_0->stream->timing;
 int VAR_4 =
   VAR_0->stream->periodic_interrupt0.lines_offset;
 int VAR_5 = FUNC_0(VAR_0);
 int VAR_6;

 if (VAR_4 > 0)
  VAR_4--;
 else if (VAR_4 < 0)
  VAR_4++;

 VAR_6 = VAR_4 + VAR_5;

 if (VAR_6 >= 0)
  *VAR_1 = VAR_6;
 else
  *VAR_1 = VAR_3->v_total + VAR_6 - 1;

 *VAR_2 = *VAR_1 + 2;

 if (*VAR_2 >= VAR_3->v_total)
  *VAR_2 = 2;
}
