
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {TYPE_5__* dpp; } ;
struct pipe_ctx {TYPE_4__ plane_res; TYPE_2__* stream; } ;
struct fixed31_32 {int dummy; } ;
struct dpp_cursor_attributes {int scale; scalar_t__ bias; int member_0; } ;
struct custom_float_format {int exponenta_bits; int mantissa_bits; int sign; } ;
struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_8__ {int (* set_optional_cursor_attributes ) (TYPE_5__*,struct dpp_cursor_attributes*) ;} ;
struct TYPE_6__ {int sdr_white_level; } ;
struct TYPE_7__ {TYPE_1__ cursor_attributes; } ;


 int FUNC_0 (struct fixed31_32,struct custom_float_format*,int*) ;
 struct fixed31_32 FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_5__*,struct dpp_cursor_attributes*) ;

__attribute__((used)) static void FUNC_3(struct pipe_ctx *VAR_0)
{
 uint32_t VAR_1 = VAR_0->stream->cursor_attributes.sdr_white_level;
 struct fixed31_32 VAR_2;
 struct dpp_cursor_attributes VAR_3 = { 0 };
 uint32_t VAR_4 = 0x3c00;
 struct custom_float_format VAR_5;

 if (!VAR_0->plane_res.dpp->funcs->set_optional_cursor_attributes)
  return;

 VAR_5.exponenta_bits = 5;
 VAR_5.mantissa_bits = 10;
 VAR_5.sign = 1;

 if (VAR_1 > 80) {
  VAR_2 = FUNC_1(VAR_1, 80);
  FUNC_0(VAR_2, &VAR_5, &VAR_4);
 }

 VAR_3.scale = VAR_4;
 VAR_3.bias = 0;

 VAR_0->plane_res.dpp->funcs->set_optional_cursor_attributes(
   VAR_0->plane_res.dpp, &VAR_3);
}
