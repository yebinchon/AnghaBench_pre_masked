
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int en_fef_intmtnt_base; int en_fef_intmtnt_lite; TYPE_1__* diver_sub; int bandwidth; void* sys; int frequency_khz; } ;
struct cxd2880_dvbt2_tune_param {int profile; int bandwidth; int center_freq_khz; } ;
struct TYPE_2__ {int bandwidth; void* sys; int frequency_khz; scalar_t__ state; } ;


 void* VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,void*,int) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_6,
          struct cxd2880_dvbt2_tune_param
          *VAR_7)
{
 u8 VAR_8 = 1;
 int VAR_9;

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_4 &&
     VAR_6->state != VAR_3)
  return -VAR_5;

 switch (VAR_7->profile) {
 case 129:
  VAR_8 = VAR_6->en_fef_intmtnt_base;
  break;
 case 128:
  VAR_8 = VAR_6->en_fef_intmtnt_lite;
  break;
 case 130:
  if (VAR_6->en_fef_intmtnt_base &&
      VAR_6->en_fef_intmtnt_lite)
   VAR_8 = 1;
  else
   VAR_8 = 0;
  break;
 default:
  return -VAR_5;
 }

 VAR_9 =
     FUNC_0(VAR_6,
      VAR_0,
      VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->state = VAR_3;
 VAR_6->frequency_khz = VAR_7->center_freq_khz;
 VAR_6->sys = VAR_0;
 VAR_6->bandwidth = VAR_7->bandwidth;

 if (VAR_6->diver_mode == VAR_1) {
  VAR_6->diver_sub->state = VAR_3;
  VAR_6->diver_sub->frequency_khz = VAR_7->center_freq_khz;
  VAR_6->diver_sub->sys = VAR_0;
  VAR_6->diver_sub->bandwidth = VAR_7->bandwidth;
 }

 return 0;
}
