
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; TYPE_1__* diver_sub; int bandwidth; void* sys; int frequency_khz; } ;
struct cxd2880_dvbt_tune_param {int bandwidth; int center_freq_khz; } ;
struct TYPE_2__ {int bandwidth; void* sys; int frequency_khz; scalar_t__ state; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,void*,int ) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_6,
         struct cxd2880_dvbt_tune_param
         *VAR_7)
{
 int VAR_8;

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_4 &&
     VAR_6->state != VAR_3)
  return -VAR_5;

 VAR_8 =
     FUNC_0(VAR_6, VAR_0,
      0);
 if (VAR_8)
  return VAR_8;

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
