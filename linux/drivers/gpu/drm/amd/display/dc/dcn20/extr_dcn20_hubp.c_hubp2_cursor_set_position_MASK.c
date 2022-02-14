
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
struct TYPE_6__ {scalar_t__ quad_part; } ;
struct TYPE_9__ {TYPE_1__ address; scalar_t__ width; scalar_t__ height; } ;
struct hubp {TYPE_4__ curs_attr; TYPE_3__* funcs; } ;
struct dcn20_hubp {int dummy; } ;
struct dc_cursor_position {int x; int x_hotspot; int y; int y_hotspot; scalar_t__ enable; } ;
struct TYPE_7__ {int x; int y; int width; scalar_t__ height; } ;
struct TYPE_10__ {scalar_t__ value; } ;
struct dc_cursor_mi_param {scalar_t__ rotation; int ref_clk_khz; int pixel_clk_khz; TYPE_2__ viewport; TYPE_5__ h_scale_ratio; scalar_t__ mirror; } ;
struct TYPE_8__ {int (* set_cursor_attributes ) (struct hubp*,TYPE_4__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct dcn20_hubp* FUNC_5 (struct hubp*) ;
 int FUNC_6 (int ,TYPE_5__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct hubp*,TYPE_4__*) ;
 int FUNC_10 (int,int) ;

void FUNC_11(
  struct hubp *VAR_14,
  const struct dc_cursor_position *VAR_15,
  const struct dc_cursor_mi_param *VAR_16)
{
 struct dcn20_hubp *VAR_17 = FUNC_5(VAR_14);
 int VAR_18 = VAR_15->x - VAR_15->x_hotspot - VAR_16->viewport.x;
 int VAR_19 = VAR_15->y - VAR_15->y_hotspot - VAR_16->viewport.y;
 int VAR_20 = VAR_15->x_hotspot;
 int VAR_21 = VAR_15->y_hotspot;
 int VAR_22 = (int)VAR_14->curs_attr.height;
 int VAR_23 = (int)VAR_14->curs_attr.width;
 uint32_t VAR_24;
 uint32_t VAR_25 = VAR_15->enable ? 1 : 0;
 if (VAR_14->curs_attr.address.quad_part == 0)
  return;


 if (VAR_16->rotation == VAR_13 || VAR_16->rotation == VAR_12) {
  FUNC_10(VAR_22, VAR_23);
  if (VAR_16->rotation == VAR_13) {
   VAR_18 = VAR_15->x - VAR_15->y_hotspot - VAR_16->viewport.x;
   VAR_19 = VAR_15->y - VAR_15->x_hotspot - VAR_16->viewport.y;
  }
 } else if (VAR_16->rotation == VAR_11) {
  VAR_18 = VAR_15->x - VAR_16->viewport.x;
  VAR_19 = VAR_15->y - VAR_16->viewport.y;
 }

 if (VAR_16->mirror) {
  VAR_20 = VAR_16->viewport.width - VAR_20;
  VAR_18 = VAR_16->viewport.x + VAR_16->viewport.width - VAR_18;
 }

 VAR_24 = (VAR_18 >= 0) ? VAR_18 : 0;
 VAR_24 *= VAR_16->ref_clk_khz;
 VAR_24 /= VAR_16->pixel_clk_khz;

 FUNC_0(VAR_16->h_scale_ratio.value);

 if (VAR_16->h_scale_ratio.value)
  VAR_24 = FUNC_7(FUNC_6(
    FUNC_8(VAR_24),
    VAR_16->h_scale_ratio));

 if (VAR_18 >= (int)VAR_16->viewport.width)
  VAR_25 = 0;

 if (VAR_18 + VAR_23 <= 0)
  VAR_25 = 0;

 if (VAR_19 >= (int)VAR_16->viewport.height)
  VAR_25 = 0;

 if (VAR_19 + VAR_22 <= 0)
  VAR_25 = 0;

 if (VAR_25 && FUNC_1(VAR_8) == 0)
  VAR_14->funcs->set_cursor_attributes(VAR_14, &VAR_14->curs_attr);

 FUNC_4(VAR_0,
   VAR_3, VAR_25);

 FUNC_3(VAR_7, 0,
   VAR_9, VAR_15->x,
   VAR_10, VAR_15->y);

 FUNC_3(VAR_4, 0,
   VAR_5, VAR_20,
   VAR_6, VAR_21);

 FUNC_2(VAR_1, 0,
   VAR_2, VAR_24);

}
