
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int vert_c; int vert; } ;
struct TYPE_8__ {int v_taps; int v_taps_c; } ;
struct scaler_data {scalar_t__ format; TYPE_2__ ratios; TYPE_1__ taps; } ;
struct TYPE_14__ {TYPE_6__* caps; TYPE_5__* ctx; } ;
struct dcn10_dpp {TYPE_7__ base; } ;
typedef enum lb_memory_config { ____Placeholder_lb_memory_config } lb_memory_config ;
struct TYPE_13__ {int (* dscl_calc_lb_num_partitions ) (struct scaler_data const*,int,int*,int*) ;} ;
struct TYPE_12__ {TYPE_4__* dc; } ;
struct TYPE_10__ {scalar_t__ use_max_lb; } ;
struct TYPE_11__ {TYPE_3__ debug; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (struct scaler_data const*,int,int*,int*) ;
 int FUNC_4 (struct scaler_data const*,int,int*,int*) ;
 int FUNC_5 (struct scaler_data const*,int,int*,int*) ;
 int FUNC_6 (struct scaler_data const*,int,int*,int*) ;

__attribute__((used)) static enum lb_memory_config FUNC_7(struct dcn10_dpp *VAR_6,
  const struct scaler_data *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = VAR_7->taps.v_taps;
 int VAR_11 = VAR_7->taps.v_taps_c;
 int VAR_12 = FUNC_1(VAR_7->ratios.vert);
 int VAR_13 = FUNC_1(VAR_7->ratios.vert_c);
 enum lb_memory_config VAR_14 = VAR_0;

 if (VAR_6->base.ctx->dc->debug.use_max_lb)
  return VAR_14;

 VAR_6->base.caps->dscl_calc_lb_num_partitions(
   VAR_7, VAR_1, &VAR_8, &VAR_9);

 if (FUNC_2(VAR_12, VAR_8, VAR_10)
   && FUNC_2(VAR_13, VAR_9, VAR_11))
  return VAR_1;

 VAR_6->base.caps->dscl_calc_lb_num_partitions(
   VAR_7, VAR_2, &VAR_8, &VAR_9);

 if (FUNC_2(VAR_12, VAR_8, VAR_10)
   && FUNC_2(VAR_13, VAR_9, VAR_11))
  return VAR_2;

 if (VAR_7->format == VAR_5
   || VAR_7->format == VAR_4) {
  VAR_6->base.caps->dscl_calc_lb_num_partitions(
    VAR_7, VAR_3, &VAR_8, &VAR_9);

  if (FUNC_2(VAR_12, VAR_8, VAR_10)
    && FUNC_2(VAR_13, VAR_9, VAR_11))
   return VAR_3;
 }

 VAR_6->base.caps->dscl_calc_lb_num_partitions(
   VAR_7, VAR_0, &VAR_8, &VAR_9);


 FUNC_0(FUNC_2(VAR_12, VAR_8, VAR_10)
   && FUNC_2(VAR_13, VAR_9, VAR_11));

 return VAR_0;
}
