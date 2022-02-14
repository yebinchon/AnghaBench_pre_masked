
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct display_sink_capability {scalar_t__ transaction_type; void* signal; } ;
struct TYPE_4__ {int SINK_COUNT; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct TYPE_6__ {scalar_t__ dongle_type; TYPE_2__ sink_count; } ;
struct dc_link {scalar_t__ type; int ddc; TYPE_3__ dpcd_caps; int ctx; } ;
struct audio_support {int dummy; } ;
typedef enum dc_detect_reason { ____Placeholder_dc_detect_reason } dc_detect_reason ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct dc_link*) ;
 int FUNC_2 (int ,struct dc_link*,int) ;
 int FUNC_3 (int ,struct dc_link*) ;
 void* FUNC_4 (int ,struct display_sink_capability*,struct audio_support*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (struct dc_link*) ;
 scalar_t__ FUNC_7 (struct dc_link*) ;
 void* FUNC_8 (struct dc_link*,int) ;
 int FUNC_9 (struct dc_link*) ;

__attribute__((used)) static bool FUNC_10(
 struct dc_link *VAR_8,
 struct display_sink_capability *VAR_9,
 bool *VAR_10,
 struct audio_support *VAR_11,
 enum dc_detect_reason VAR_12)
{
 bool VAR_13 = 0;
 VAR_9->signal = FUNC_8(VAR_8, VAR_12);
 VAR_9->transaction_type =
  FUNC_5(VAR_9->signal);

 if (VAR_9->transaction_type == VAR_0) {
  VAR_9->signal = VAR_3;
  if (!FUNC_1(VAR_8))
   return 0;

  if (FUNC_7(VAR_8)) {
   VAR_9->signal = VAR_4;
   VAR_8->type = VAR_6;

   FUNC_0(
       VAR_8->ddc,
       VAR_9->transaction_type);
   if (VAR_12 == VAR_1)
    VAR_13 = 1;

   FUNC_3(
    VAR_8->ctx,
    VAR_8);

   if (!FUNC_2(
    VAR_8->ctx,
    VAR_8, VAR_13)) {

    VAR_8->type = VAR_7;
    VAR_9->signal = VAR_3;
   }
  }

  if (VAR_8->type != VAR_6 &&
   FUNC_6(VAR_8)) {

   VAR_8->type = VAR_5;
   if (!VAR_8->dpcd_caps.sink_count.bits.SINK_COUNT) {



    FUNC_9(VAR_8);
    return 1;
   }

   if (VAR_8->dpcd_caps.dongle_type != VAR_2)
    *VAR_10 = 1;
  }
 } else {

  VAR_9->signal = FUNC_4(VAR_8->ddc,
    VAR_9,
    VAR_11);
 }

 return 1;
}
