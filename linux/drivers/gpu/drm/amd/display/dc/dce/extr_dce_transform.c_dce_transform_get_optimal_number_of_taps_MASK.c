
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct transform {int dummy; } ;
struct scaling_taps {int v_taps; int h_taps; } ;
struct TYPE_10__ {int v_taps; int v_taps_c; void* h_taps_c; void* h_taps; } ;
struct TYPE_9__ {int vert_c; int vert; int horz_c; int horz; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_7__ {int width; } ;
struct TYPE_6__ {int width; } ;
struct scaler_data {TYPE_5__ taps; TYPE_4__ ratios; TYPE_3__ lb_params; TYPE_2__ recout; TYPE_1__ viewport; } ;
struct dce_transform {scalar_t__ prescaler_on; } ;


 int FUNC_0 (int ) ;
 struct dce_transform* FUNC_1 (struct transform*) ;
 int FUNC_2 (struct dce_transform*,int ,int) ;
 void* FUNC_3 (int ,int,int) ;

bool FUNC_4(
 struct transform *VAR_0,
 struct scaler_data *VAR_1,
 const struct scaling_taps *VAR_2)
{
 struct dce_transform *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = VAR_1->viewport.width;
 int VAR_5;

 if (VAR_3->prescaler_on &&
   (VAR_1->viewport.width > VAR_1->recout.width))
  VAR_4 = VAR_1->recout.width;

 VAR_5 = FUNC_2(
  VAR_3,
  VAR_1->lb_params.depth,
  VAR_4);


 if (VAR_2->v_taps >= VAR_5)
  return 0;
 VAR_1->taps.h_taps = FUNC_3(VAR_1->ratios.horz, VAR_2->h_taps, 0);
 VAR_1->taps.v_taps = FUNC_3(VAR_1->ratios.vert, VAR_2->v_taps, 0);
 VAR_1->taps.h_taps_c = FUNC_3(VAR_1->ratios.horz_c, VAR_2->h_taps, 1);
 VAR_1->taps.v_taps_c = FUNC_3(VAR_1->ratios.vert_c, VAR_2->v_taps, 1);

 if (!FUNC_0(VAR_1->ratios.vert)) {

  if (VAR_2->v_taps == 0
    && VAR_5 <= VAR_1->taps.v_taps
    && VAR_1->taps.v_taps > 1) {
   VAR_1->taps.v_taps = VAR_5 - 1;
  }

  if (VAR_1->taps.v_taps <= 1)
   return 0;
 }

 if (!FUNC_0(VAR_1->ratios.vert_c)) {

  if (VAR_5 <= VAR_1->taps.v_taps_c && VAR_1->taps.v_taps_c > 1) {
   VAR_1->taps.v_taps_c = VAR_5 - 1;
  }

  if (VAR_1->taps.v_taps_c <= 1)
   return 0;
 }


 return 1;
}
