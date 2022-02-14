
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


struct TYPE_13__ {scalar_t__ IS_TPS4_CAPABLE; scalar_t__ IS_TPS3_CAPABLE; } ;
struct TYPE_14__ {TYPE_6__ bits; } ;
struct encoder_feature_support {TYPE_7__ flags; } ;
struct TYPE_10__ {scalar_t__ TPS3_SUPPORTED; } ;
struct TYPE_11__ {TYPE_3__ bits; } ;
struct TYPE_8__ {scalar_t__ TPS4_SUPPORTED; } ;
struct TYPE_9__ {TYPE_1__ bits; } ;
struct dpcd_caps {TYPE_4__ max_ln_count; TYPE_2__ max_down_spread; } ;
struct dc_link {struct dpcd_caps dpcd_caps; TYPE_5__* link_enc; } ;
typedef enum dc_dp_training_pattern { ____Placeholder_dc_dp_training_pattern } dc_dp_training_pattern ;
struct TYPE_12__ {struct encoder_feature_support features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum dc_dp_training_pattern FUNC_0(struct dc_link *VAR_3)
{
 enum dc_dp_training_pattern VAR_4 = VAR_0;
 struct encoder_feature_support *VAR_5 = &VAR_3->link_enc->features;
 struct dpcd_caps *VAR_6 = &VAR_3->dpcd_caps;

 if (VAR_5->flags.bits.IS_TPS3_CAPABLE)
  VAR_4 = VAR_1;

 if (VAR_5->flags.bits.IS_TPS4_CAPABLE)
  VAR_4 = VAR_2;

 if (VAR_6->max_down_spread.bits.TPS4_SUPPORTED &&
  VAR_4 >= VAR_2)
  return VAR_2;

 if (VAR_6->max_ln_count.bits.TPS3_SUPPORTED &&
  VAR_4 >= VAR_1)
  return VAR_1;

 return VAR_0;
}
