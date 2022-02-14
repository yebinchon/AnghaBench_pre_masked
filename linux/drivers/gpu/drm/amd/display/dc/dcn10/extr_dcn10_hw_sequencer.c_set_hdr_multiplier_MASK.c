
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_4__* dpp; } ;
struct pipe_ctx {TYPE_2__ plane_res; TYPE_3__* plane_state; } ;
struct fixed31_32 {int dummy; } ;
struct custom_float_format {int exponenta_bits; int mantissa_bits; int sign; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct TYPE_7__ {int sdr_white_level; } ;
struct TYPE_5__ {int (* dpp_set_hdr_multiplier ) (TYPE_4__*,int) ;} ;


 int FUNC_0 (struct fixed31_32,struct custom_float_format*,int*) ;
 struct fixed31_32 FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*,int) ;

void FUNC_3(struct pipe_ctx *VAR_0)
{
 struct fixed31_32 VAR_1 = FUNC_1(
   VAR_0->plane_state->sdr_white_level, 80);
 uint32_t VAR_2 = 0x1f000;
 struct custom_float_format VAR_3;

 VAR_3.exponenta_bits = 6;
 VAR_3.mantissa_bits = 12;
 VAR_3.sign = 1;

 if (VAR_0->plane_state->sdr_white_level > 80)
  FUNC_0(VAR_1, &VAR_3, &VAR_2);

 VAR_0->plane_res.dpp->funcs->dpp_set_hdr_multiplier(
   VAR_0->plane_res.dpp, VAR_2);
}
