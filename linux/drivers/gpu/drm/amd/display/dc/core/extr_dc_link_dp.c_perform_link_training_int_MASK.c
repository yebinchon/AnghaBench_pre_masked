
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ POST_LT_ADJ_REQ_GRANTED; int ENHANCED_FRAMING; int LANE_COUNT_SET; } ;
struct TYPE_9__ {int member_0; } ;
union lane_count_set {int raw; TYPE_8__ bits; TYPE_1__ member_0; } ;
struct TYPE_11__ {int TRAINING_PATTERN_SET; } ;
struct TYPE_10__ {int member_0; } ;
union dpcd_training_pattern {TYPE_3__ v1_4; TYPE_2__ member_0; } ;
struct TYPE_15__ {int lane_count; } ;
struct link_training_settings {int enhanced_framing; TYPE_7__ link_settings; } ;
struct TYPE_12__ {int POST_LT_ADJ_REQ_SUPPORTED; } ;
struct TYPE_13__ {TYPE_4__ bits; } ;
struct TYPE_14__ {TYPE_5__ max_ln_count; } ;
struct dc_link {TYPE_6__ dpcd_caps; } ;
typedef int lane_count_set ;
typedef enum link_training_result { ____Placeholder_link_training_result } link_training_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dc_link*,int ,int *,int) ;
 int FUNC_1 (struct dc_link*,int ,int *,int ) ;
 int FUNC_2 (struct dc_link*,union dpcd_training_pattern) ;
 scalar_t__ FUNC_3 (struct dc_link*) ;
 int FUNC_4 (struct dc_link*,struct link_training_settings*) ;

__attribute__((used)) static inline enum link_training_result FUNC_5(
 struct dc_link *VAR_6,
 struct link_training_settings *VAR_7,
 enum link_training_result VAR_8)
{
 union lane_count_set VAR_9 = { 0 };
 union dpcd_training_pattern VAR_10 = { {0} };


 VAR_10.v1_4.TRAINING_PATTERN_SET = VAR_0;
 FUNC_2(VAR_6, VAR_10);


 FUNC_1(VAR_6, VAR_2, ((void*)0), 0);






 if (VAR_6->dpcd_caps.max_ln_count.bits.POST_LT_ADJ_REQ_SUPPORTED != 1 ||
   FUNC_3(VAR_6) == VAR_3)
  return VAR_8;

 if (VAR_8 == VAR_5 &&
  FUNC_4(VAR_6, VAR_7) == 0)
  VAR_8 = VAR_4;

 VAR_9.bits.LANE_COUNT_SET = VAR_7->link_settings.lane_count;
 VAR_9.bits.ENHANCED_FRAMING = VAR_7->enhanced_framing;
 VAR_9.bits.POST_LT_ADJ_REQ_GRANTED = 0;

 FUNC_0(
  VAR_6,
  VAR_1,
  &VAR_9.raw,
  sizeof(VAR_9));

 return VAR_8;
}
