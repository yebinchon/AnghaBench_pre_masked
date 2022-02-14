
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct scaling_taps {int h_taps; int v_taps; int v_taps_c; int h_taps_c; } ;
struct TYPE_19__ {int h_taps; int v_taps; int v_taps_c; int h_taps_c; } ;
struct TYPE_11__ {long long value; } ;
struct TYPE_18__ {TYPE_10__ vert_c; TYPE_10__ horz_c; TYPE_10__ vert; TYPE_10__ horz; } ;
struct TYPE_14__ {scalar_t__ width; } ;
struct TYPE_12__ {scalar_t__ width; } ;
struct scaler_data {scalar_t__ format; scalar_t__ h_active; TYPE_8__ taps; TYPE_7__ ratios; TYPE_3__ viewport; TYPE_1__ recout; } ;
struct dpp {TYPE_6__* ctx; TYPE_2__* caps; } ;
struct TYPE_20__ {long long value; } ;
struct TYPE_17__ {TYPE_5__* dc; } ;
struct TYPE_15__ {scalar_t__ max_downscale_src_width; int always_scale; } ;
struct TYPE_16__ {TYPE_4__ debug; } ;
struct TYPE_13__ {scalar_t__ dscl_data_proc_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_10__) ;
 scalar_t__ VAR_1 ;
 TYPE_9__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(
  struct dpp *VAR_3,
  struct scaler_data *VAR_4,
  const struct scaling_taps *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_4->viewport.width > VAR_4->recout.width)
  VAR_6 = VAR_4->recout.width;
 else
  VAR_6 = VAR_4->viewport.width;


 if (VAR_4->format == VAR_1 &&
  VAR_3->caps->dscl_data_proc_format == VAR_0 &&
  VAR_4->ratios.horz.value != VAR_2.value &&
  VAR_4->ratios.vert.value != VAR_2.value)
  return 0;

 if (VAR_4->viewport.width > VAR_4->h_active &&
  VAR_3->ctx->dc->debug.max_downscale_src_width != 0 &&
  VAR_4->viewport.width > VAR_3->ctx->dc->debug.max_downscale_src_width)
  return 0;




 if (VAR_4->ratios.horz.value == (4ll << 32))
  VAR_4->ratios.horz.value--;
 if (VAR_4->ratios.vert.value == (4ll << 32))
  VAR_4->ratios.vert.value--;
 if (VAR_4->ratios.horz_c.value == (4ll << 32))
  VAR_4->ratios.horz_c.value--;
 if (VAR_4->ratios.vert_c.value == (4ll << 32))
  VAR_4->ratios.vert_c.value--;


 if (VAR_5->h_taps == 0)
  VAR_4->taps.h_taps = 4;
 else
  VAR_4->taps.h_taps = VAR_5->h_taps;
 if (VAR_5->v_taps == 0)
  VAR_4->taps.v_taps = 4;
 else
  VAR_4->taps.v_taps = VAR_5->v_taps;
 if (VAR_5->v_taps_c == 0)
  VAR_4->taps.v_taps_c = 2;
 else
  VAR_4->taps.v_taps_c = VAR_5->v_taps_c;
 if (VAR_5->h_taps_c == 0)
  VAR_4->taps.h_taps_c = 2;

 else if ((VAR_5->h_taps_c % 2) != 0 && VAR_5->h_taps_c != 1)
  VAR_4->taps.h_taps_c = VAR_5->h_taps_c - 1;
 else
  VAR_4->taps.h_taps_c = VAR_5->h_taps_c;

 if (!VAR_3->ctx->dc->debug.always_scale) {
  if (FUNC_0(VAR_4->ratios.horz))
   VAR_4->taps.h_taps = 1;
  if (FUNC_0(VAR_4->ratios.vert))
   VAR_4->taps.v_taps = 1;
  if (FUNC_0(VAR_4->ratios.horz_c))
   VAR_4->taps.h_taps_c = 1;
  if (FUNC_0(VAR_4->ratios.vert_c))
   VAR_4->taps.v_taps_c = 1;
 }

 return 1;
}
