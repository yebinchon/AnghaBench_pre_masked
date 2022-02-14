
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce110_stream_encoder {TYPE_1__* regs; } ;
struct dc_crtc_timing {int pixel_encoding; } ;
struct TYPE_2__ {scalar_t__ DIG_FE_CNTL; scalar_t__ TMDS_CNTL; } ;


 int VAR_0 ;

 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(
  struct dce110_stream_encoder *VAR_4,
  struct dc_crtc_timing *VAR_5)
{
 if (VAR_4->regs->TMDS_CNTL) {
  switch (VAR_5->pixel_encoding) {
  case 128:
   FUNC_0(VAR_1, VAR_3, 1);
   break;
  default:
   FUNC_0(VAR_1, VAR_3, 0);
   break;
  }
  FUNC_0(VAR_1, VAR_2, 0);
 } else if (VAR_4->regs->DIG_FE_CNTL) {
  switch (VAR_5->pixel_encoding) {
  case 128:
   FUNC_0(VAR_0, VAR_3, 1);
   break;
  default:
   FUNC_0(VAR_0, VAR_3, 0);
   break;
  }
  FUNC_0(VAR_0, VAR_2, 0);
 }

}
