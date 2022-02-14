
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scaling_taps {int h_taps; int v_taps; int v_taps_c; int h_taps_c; } ;
struct TYPE_18__ {int h_taps; int v_taps; int v_taps_c; int h_taps_c; } ;
struct TYPE_19__ {long long value; } ;
struct TYPE_17__ {TYPE_9__ vert_c; TYPE_9__ horz_c; TYPE_9__ vert; TYPE_9__ horz; } ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_11__ {scalar_t__ width; } ;
struct scaler_data {scalar_t__ h_active; scalar_t__ v_active; scalar_t__ format; TYPE_8__ taps; TYPE_7__ ratios; TYPE_3__ viewport; TYPE_1__ recout; } ;
struct dpp {TYPE_6__* ctx; TYPE_2__* caps; } ;
struct TYPE_16__ {TYPE_5__* dc; } ;
struct TYPE_14__ {scalar_t__ max_downscale_src_width; int always_scale; } ;
struct TYPE_15__ {TYPE_4__ debug; } ;
struct TYPE_12__ {scalar_t__ dscl_data_proc_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_9__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_9__) ;

bool FUNC_2(
  struct dpp *VAR_2,
  struct scaler_data *VAR_3,
  const struct scaling_taps *VAR_4)
{
 uint32_t VAR_5;

 if (VAR_3->viewport.width > VAR_3->recout.width)
  VAR_5 = VAR_3->recout.width;
 else
  VAR_5 = VAR_3->viewport.width;


 if (VAR_3->viewport.width != VAR_3->h_active &&
  VAR_3->viewport.height != VAR_3->v_active &&
  VAR_2->caps->dscl_data_proc_format == VAR_0 &&
  VAR_3->format == VAR_1)
  return 0;

 if (VAR_3->viewport.width > VAR_3->h_active &&
  VAR_2->ctx->dc->debug.max_downscale_src_width != 0 &&
  VAR_3->viewport.width > VAR_2->ctx->dc->debug.max_downscale_src_width)
  return 0;




 if (VAR_3->ratios.horz.value == (8ll << 32))
  VAR_3->ratios.horz.value--;
 if (VAR_3->ratios.vert.value == (8ll << 32))
  VAR_3->ratios.vert.value--;
 if (VAR_3->ratios.horz_c.value == (8ll << 32))
  VAR_3->ratios.horz_c.value--;
 if (VAR_3->ratios.vert_c.value == (8ll << 32))
  VAR_3->ratios.vert_c.value--;


 if (VAR_4->h_taps == 0) {
  if (FUNC_1(VAR_3->ratios.horz) > 4)
   VAR_3->taps.h_taps = 8;
  else
   VAR_3->taps.h_taps = 4;
 } else
  VAR_3->taps.h_taps = VAR_4->h_taps;
 if (VAR_4->v_taps == 0) {
  if (FUNC_1(VAR_3->ratios.vert) > 4)
   VAR_3->taps.v_taps = 8;
  else
   VAR_3->taps.v_taps = 4;
 } else
  VAR_3->taps.v_taps = VAR_4->v_taps;
 if (VAR_4->v_taps_c == 0) {
  if (FUNC_1(VAR_3->ratios.vert_c) > 4)
   VAR_3->taps.v_taps_c = 4;
  else
   VAR_3->taps.v_taps_c = 2;
 } else
  VAR_3->taps.v_taps_c = VAR_4->v_taps_c;
 if (VAR_4->h_taps_c == 0) {
  if (FUNC_1(VAR_3->ratios.horz_c) > 4)
   VAR_3->taps.h_taps_c = 4;
  else
   VAR_3->taps.h_taps_c = 2;
 } else if ((VAR_4->h_taps_c % 2) != 0 && VAR_4->h_taps_c != 1)

  VAR_3->taps.h_taps_c = VAR_4->h_taps_c - 1;
 else
  VAR_3->taps.h_taps_c = VAR_4->h_taps_c;

 if (!VAR_2->ctx->dc->debug.always_scale) {
  if (FUNC_0(VAR_3->ratios.horz))
   VAR_3->taps.h_taps = 1;
  if (FUNC_0(VAR_3->ratios.vert))
   VAR_3->taps.v_taps = 1;
  if (FUNC_0(VAR_3->ratios.horz_c))
   VAR_3->taps.h_taps_c = 1;
  if (FUNC_0(VAR_3->ratios.vert_c))
   VAR_3->taps.v_taps_c = 1;
 }

 return 1;
}
